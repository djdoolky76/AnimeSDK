#pragma once
#include "unitysdk/unitysdk.h"

class KGPHFADIIBM;
class OPEAGHFAHDH;

#define FMCEEMGJFGJ_KIIFLPLAKLB_OFFSET UNITYSDK_OFFSET(0x132289A0)
#define FMCEEMGJFGJ_LNAABLEDOEH_OFFSET UNITYSDK_OFFSET(0x13228960)
#define FMCEEMGJFGJ_PAKNBJJBLMH_OFFSET UNITYSDK_OFFSET(0x13228B10)
#define FMCEEMGJFGJ_PLBJCLIKOED_OFFSET UNITYSDK_OFFSET(0x13228A80)
#define FMCEEMGJFGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13228A20)

inline static constexpr unsigned int FMCEEMGJFGJ_TypeDefinitionIndex = 56285;

class FMCEEMGJFGJ
{
public:
	::KGPHFADIIBM* PNHMLCMNDNJ; // 0x28
	::System::Boolean GIIHDHHJLOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCEEMGJFGJ__CTOR_OFFSET))(this);
	}

	::System::Void LNAABLEDOEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCEEMGJFGJ_LNAABLEDOEH_OFFSET))(this);
	}

	::System::Void KIIFLPLAKLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCEEMGJFGJ_KIIFLPLAKLB_OFFSET))(this);
	}

	::System::Void PLBJCLIKOED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCEEMGJFGJ_PLBJCLIKOED_OFFSET))(this);
	}

	::System::Void PAKNBJJBLMH(::OPEAGHFAHDH* FFCADMOCBPH)
	{
		return ((::System::Void(*)(::PVOID, ::OPEAGHFAHDH*))((::PBYTE)hIl2Cpp + FMCEEMGJFGJ_PAKNBJJBLMH_OFFSET))(this, FFCADMOCBPH);
	}
};
