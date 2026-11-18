#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MENGACGOHOG_BCLGOLAEMFA_OFFSET UNITYSDK_OFFSET(0x7208D0)
#define MENGACGOHOG_HNMDJGNCMLL_OFFSET UNITYSDK_OFFSET(0x720400)
#define MENGACGOHOG_INMIGKPNNGD_OFFSET UNITYSDK_OFFSET(0x720730)
#define MENGACGOHOG_JGKAGNLKHDE_OFFSET UNITYSDK_OFFSET(0x720A70)
#define MENGACGOHOG_JIKJGKDECPI_OFFSET UNITYSDK_OFFSET(0x7206C0)
#define MENGACGOHOG_KCLMGOCKMNA_OFFSET UNITYSDK_OFFSET(0x7208C0)
#define MENGACGOHOG_MLOIGLOCFDJ_OFFSET UNITYSDK_OFFSET(0x7208E0)
#define MENGACGOHOG_OBDLBJPMGKG_OFFSET UNITYSDK_OFFSET(0x7203B0)

inline static constexpr unsigned int MENGACGOHOG_TypeDefinitionIndex = 58123;

struct alignas(4) MENGACGOHOG
{
	::System::Single AFIKJAIPLNG; // 0x10
	::UnityEngine::Vector2 BAPBGCKGNED; // 0x14
	::System::Single FBLPEMDLPJE; // 0x1C
	::UnityEngine::Vector2 CEHGFFDBHOJ; // 0x20

	::System::Boolean OBDLBJPMGKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_OBDLBJPMGKG_OFFSET))(this);
	}

	::System::Single HNMDJGNCMLL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_HNMDJGNCMLL_OFFSET))(this);
	}

	::UnityEngine::Vector2 JIKJGKDECPI()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_JIKJGKDECPI_OFFSET))(this);
	}

	::UnityEngine::Vector2 INMIGKPNNGD()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_INMIGKPNNGD_OFFSET))(this);
	}

	::UnityEngine::Vector2 KCLMGOCKMNA()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_KCLMGOCKMNA_OFFSET))(this);
	}

	::System::Single BCLGOLAEMFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_BCLGOLAEMFA_OFFSET))(this);
	}

	::UnityEngine::Vector2 MLOIGLOCFDJ()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_MLOIGLOCFDJ_OFFSET))(this);
	}

	::UnityEngine::Vector2 JGKAGNLKHDE()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGACGOHOG_JGKAGNLKHDE_OFFSET))(this);
	}
};
