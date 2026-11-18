#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;

#define OJMKEIGKOLL_JALIEPAENOH_CIMIDIJGKDB_OFFSET UNITYSDK_OFFSET(0x13A66F10)
#define OJMKEIGKOLL_JALIEPAENOH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A66F00)

inline static constexpr unsigned int OJMKEIGKOLL_JALIEPAENOH_TypeDefinitionIndex = 52451;

class OJMKEIGKOLL_JALIEPAENOH : public ::System::Object
{
public:
	::System::Int32 OIKFFGKDHME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_JALIEPAENOH__CTOR_OFFSET))(this);
	}

	::System::Boolean CIMIDIJGKDB(::HGAJKHIMKJP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_JALIEPAENOH_CIMIDIJGKDB_OFFSET))(this, HAAEBCOBKFF);
	}
};
