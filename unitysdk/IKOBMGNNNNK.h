#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IKOBMGNNNNK_BCLGOLAEMFA_OFFSET UNITYSDK_OFFSET(0x5B6160)
#define IKOBMGNNNNK_INMIGKPNNGD_OFFSET UNITYSDK_OFFSET(0x5B6050)
#define IKOBMGNNNNK_JIKJGKDECPI_OFFSET UNITYSDK_OFFSET(0x5B6070)
#define IKOBMGNNNNK_MLOIGLOCFDJ_OFFSET UNITYSDK_OFFSET(0x5B6030)

inline static constexpr unsigned int IKOBMGNNNNK_TypeDefinitionIndex = 39095;

struct alignas(4) IKOBMGNNNNK
{
	::System::Single AFIKJAIPLNG; // 0x10
	::System::Single FBLPEMDLPJE; // 0x14
	::UnityEngine::Vector3 BAPBGCKGNED; // 0x18
	::UnityEngine::Vector3 CEHGFFDBHOJ; // 0x24
	::UnityEngine::Vector3 DEIPJONPFNG; // 0x30

	::UnityEngine::Vector3 MLOIGLOCFDJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOBMGNNNNK_MLOIGLOCFDJ_OFFSET))(this);
	}

	::UnityEngine::Vector3 INMIGKPNNGD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOBMGNNNNK_INMIGKPNNGD_OFFSET))(this);
	}

	::UnityEngine::Vector3 JIKJGKDECPI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOBMGNNNNK_JIKJGKDECPI_OFFSET))(this);
	}

	::System::Single BCLGOLAEMFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOBMGNNNNK_BCLGOLAEMFA_OFFSET))(this);
	}
};
