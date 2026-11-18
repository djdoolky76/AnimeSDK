#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIIPPLFGOEJ.h"
#include "unitysdk/GMKLOAIMPNK.h"

#define NMHKNBHBIBB_INGMEAMPPMF_OFFSET UNITYSDK_OFFSET(0xE59D520)
#define NMHKNBHBIBB_KOMFCGALIHJ_OFFSET UNITYSDK_OFFSET(0xE59D580)
#define NMHKNBHBIBB__CTOR_OFFSET UNITYSDK_OFFSET(0xE59D5F0)

inline static constexpr unsigned int NMHKNBHBIBB_TypeDefinitionIndex = 40973;

class NMHKNBHBIBB : public ::EIIPPLFGOEJ
{
public:
	::GMKLOAIMPNK MFAENGHHFOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHKNBHBIBB__CTOR_OFFSET))(this);
	}

	::System::Void INGMEAMPPMF(::System::Int32 ABHBKFJKINO, ::GMKLOAIMPNK EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GMKLOAIMPNK))((::PBYTE)hIl2Cpp + NMHKNBHBIBB_INGMEAMPPMF_OFFSET))(this, ABHBKFJKINO, EKPEBNCLJPM);
	}

	::GMKLOAIMPNK KOMFCGALIHJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::GMKLOAIMPNK(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMHKNBHBIBB_KOMFCGALIHJ_OFFSET))(this, ABHBKFJKINO);
	}
};
