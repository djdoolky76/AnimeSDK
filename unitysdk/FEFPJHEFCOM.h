#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBEJPBPDEN.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;

#define FEFPJHEFCOM_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x11D71090)
#define FEFPJHEFCOM_DGJBHBPPBOP_OFFSET UNITYSDK_OFFSET(0x11D70FE0)
#define FEFPJHEFCOM_FMNLBKAIGKF_OFFSET UNITYSDK_OFFSET(0x11D71140)
#define FEFPJHEFCOM_HHMJIKCEKCB_OFFSET UNITYSDK_OFFSET(0x11D712B0)
#define FEFPJHEFCOM_IHKJFGBLAHB_OFFSET UNITYSDK_OFFSET(0x11D711D0)
#define FEFPJHEFCOM_IIPKOJLKCHD_OFFSET UNITYSDK_OFFSET(0x11D70D40)
#define FEFPJHEFCOM_MAFAECKGFFK_OFFSET UNITYSDK_OFFSET(0x11D70E40)
#define FEFPJHEFCOM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D71130)

inline static constexpr unsigned int FEFPJHEFCOM_TypeDefinitionIndex = 70242;

class FEFPJHEFCOM : public ::GLBEJPBPDEN
{
public:
	::COCJHGGDBCA* FKGLINBHPND; // 0x90
	::System::Int32 JDKDBGFJMMC; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFPJHEFCOM__CTOR_OFFSET))(this);
	}

	::System::Boolean IIPKOJLKCHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFPJHEFCOM_IIPKOJLKCHD_OFFSET))(this);
	}

	::System::Void MAFAECKGFFK(::UnityEngine::Vector3 GKOEEJHILPG, ::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEFPJHEFCOM_MAFAECKGFFK_OFFSET))(this, GKOEEJHILPG, IACKHFCLPJI);
	}

	::System::Void DGJBHBPPBOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFPJHEFCOM_DGJBHBPPBOP_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFPJHEFCOM_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void FMNLBKAIGKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFPJHEFCOM_FMNLBKAIGKF_OFFSET))(this);
	}

	::System::Void IHKJFGBLAHB(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEFPJHEFCOM_IHKJFGBLAHB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HHMJIKCEKCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFPJHEFCOM_HHMJIKCEKCB_OFFSET))(this);
	}
};
