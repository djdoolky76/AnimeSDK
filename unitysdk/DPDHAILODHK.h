#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventHandler; }

#define DPDHAILODHK_FFGCECLLMJO_OFFSET UNITYSDK_OFFSET(0x1FDBA930)
#define DPDHAILODHK_GPEMMKPJAOG_OFFSET UNITYSDK_OFFSET(0x1FDBA9B0)
#define DPDHAILODHK_JCAKDFALMFB_OFFSET UNITYSDK_OFFSET(0x1FDBA5B0)
#define DPDHAILODHK_KFCECAGBBHL_OFFSET UNITYSDK_OFFSET(0x1FDBA8A0)
#define DPDHAILODHK_OGJMDCEKGBH_OFFSET UNITYSDK_OFFSET(0x1FDBA630)
#define DPDHAILODHK_PAPCIEINJON_OFFSET UNITYSDK_OFFSET(0x1FDBA8B0)
#define DPDHAILODHK_PJFPEPHIEGE_OFFSET UNITYSDK_OFFSET(0x1FDBA6B0)
#define DPDHAILODHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBAA60)

inline static constexpr unsigned int DPDHAILODHK_TypeDefinitionIndex = 28230;

class DPDHAILODHK : public ::System::Object
{
public:
	::System::EventHandler* ONMKIBHMBBB; // 0x10
	::System::EventHandler* JMHHKJKFFKO; // 0x18
	::System::Int32 LILINFOAEEP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDHAILODHK__CTOR_OFFSET))(this);
	}

	::System::Void JCAKDFALMFB(::System::EventHandler* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + DPDHAILODHK_JCAKDFALMFB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OGJMDCEKGBH(::System::EventHandler* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + DPDHAILODHK_OGJMDCEKGBH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PJFPEPHIEGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDHAILODHK_PJFPEPHIEGE_OFFSET))(this);
	}

	::System::Boolean KFCECAGBBHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDHAILODHK_KFCECAGBBHL_OFFSET))(this);
	}

	::System::Void PAPCIEINJON(::System::EventHandler* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + DPDHAILODHK_PAPCIEINJON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FFGCECLLMJO(::System::EventHandler* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + DPDHAILODHK_FFGCECLLMJO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GPEMMKPJAOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDHAILODHK_GPEMMKPJAOG_OFFSET))(this);
	}
};
