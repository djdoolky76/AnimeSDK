#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

#define LPINFKKCING_GIPENIEDANE_OFFSET UNITYSDK_OFFSET(0x11F2A640)
#define LPINFKKCING_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11F2A5D0)
#define LPINFKKCING_LGFBJDHHLFO_OFFSET UNITYSDK_OFFSET(0x11F2A650)
#define LPINFKKCING__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2A5C0)

inline static constexpr unsigned int LPINFKKCING_TypeDefinitionIndex = 64899;

class LPINFKKCING : public ::IGKOFMFKNNO
{
public:
	::System::UInt32 _CHJENJIJCNJ_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPINFKKCING__CTOR_OFFSET))(this);
	}

	static ::LPINFKKCING* JFDOOELFAOA()
	{
		return ((::LPINFKKCING*(*)())((::PBYTE)hIl2Cpp + LPINFKKCING_JFDOOELFAOA_OFFSET))();
	}

	::System::UInt32 GIPENIEDANE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPINFKKCING_GIPENIEDANE_OFFSET))(this);
	}

	::System::Void LGFBJDHHLFO(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPINFKKCING_LGFBJDHHLFO_OFFSET))(this, EGEGIMGMJHN);
	}
};
