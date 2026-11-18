#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNKKDGGFNBO.h"

class DBIPLPMIGPK;

#define IKKKHCFJDIL_PELMMJCCMLI_OFFSET UNITYSDK_OFFSET(0x16AA5150)
#define IKKKHCFJDIL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16AA50F0)
#define IKKKHCFJDIL__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA50D0)

inline static constexpr unsigned int IKKKHCFJDIL_TypeDefinitionIndex = 55133;

class IKKKHCFJDIL : public ::GNKKDGGFNBO
{
public:
	::System::UInt32 _AMDCDABHNOK_k__BackingField; // 0x30

	::System::Void _ctor(::System::UInt64 JGFGBMHHGFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IKKKHCFJDIL__CTOR_OFFSET))(this, JGFGBMHHGFA);
	}

	::System::Void _ctor_1(::DBIPLPMIGPK* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::DBIPLPMIGPK*))((::PBYTE)hIl2Cpp + IKKKHCFJDIL__CTOR_1_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::UInt32 PELMMJCCMLI()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKKHCFJDIL_PELMMJCCMLI_OFFSET))(this);
	}
};
