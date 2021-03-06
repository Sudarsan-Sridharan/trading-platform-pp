#ifndef HELPER_H
#define HELPER_H
#include <QString>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QMetaEnum>
#include <chrono>
#include <map>
#include <QVector>

namespace helper {
QJsonObject parseJson(std::string apiResponse);
std::string convertToString(QJsonObject jsonData);
std::string convertToReadable(long unixTimeStamp);
std::string convertQJValueToStdString(QJsonValue value);
std::map<std::string, std::map<long, double>> convertToMap(QJsonObject data);
QJsonArray convertStringToQJsonArray(std::string apiResponse);
std::string convertToFullTimeReadable(long unixTimeStamp);
QVector<double> convert_to_vector(QJsonObject j, std::string k);

template<typename QEnum>
QString QEnumToQString(const QEnum value) {
  return QString(QMetaEnum::fromType<QEnum>().valueToKey(value));
}

template <typename T>
T QStringToQEnum(const QString &s) {
  return static_cast<T>(QMetaEnum::fromType<T>().keyToValue(s.toLocal8Bit()));
}

std::string toStdString(QString qs);
QString toQString(std::string s);

}



#endif // HELPER_H
