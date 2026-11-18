#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IFEMMIGFPEJ_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1A4573A0)
#define IFEMMIGFPEJ_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1A4574B0)
#define IFEMMIGFPEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A457440)

inline static constexpr unsigned int IFEMMIGFPEJ_TypeDefinitionIndex = 51087;

class IFEMMIGFPEJ : public ::PKMJPMFCNBK
{
public:
	::UnityEngine::Vector3 CKLMJHAJDPI; // 0x80
	::UnityEngine::Vector3 MKGEJMJOLAM; // 0x8C
	::UnityEngine::Vector3 KENDFNAECKI; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEMMIGFPEJ__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEMMIGFPEJ_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEMMIGFPEJ_KHJELIBOECB_OFFSET))(this);
	}
};
