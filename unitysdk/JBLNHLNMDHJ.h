#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JBLNHLNMDHJ_BIEPIADNNMC_OFFSET UNITYSDK_OFFSET(0x388A60)
#define JBLNHLNMDHJ_EABAFOMNIEH_OFFSET UNITYSDK_OFFSET(0x5F1BC0)
#define JBLNHLNMDHJ_GJFHOMOGGMK_OFFSET UNITYSDK_OFFSET(0x359150)
#define JBLNHLNMDHJ_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x13ABEDC0)
#define JBLNHLNMDHJ_KBNAFCEHOHJ_OFFSET UNITYSDK_OFFSET(0x40C7D0)
#define JBLNHLNMDHJ_MJEKGNJNEEO_OFFSET UNITYSDK_OFFSET(0x359320)
#define JBLNHLNMDHJ_PHIEHKGLAMA_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBLNHLNMDHJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x718E50)
#define JBLNHLNMDHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x718E10)

inline static constexpr unsigned int JBLNHLNMDHJ_TypeDefinitionIndex = 88337;

struct alignas(8) JBLNHLNMDHJ
{
	::System::Int32 _NLNEHOAINFP_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* _KIFLINHFMIP_k__BackingField; // 0x18
	::System::Boolean _AJANECHBLKN_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 KDDJHNKKCAG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ__CTOR_OFFSET))(this, KDDJHNKKCAG);
	}

	::System::Void _ctor_1(::System::Int32 KDDJHNKKCAG, ::System::Boolean OLMABPIMOME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ__CTOR_1_OFFSET))(this, KDDJHNKKCAG, OLMABPIMOME);
	}

	::System::Void BIEPIADNNMC(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ_BIEPIADNNMC_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::JBLNHLNMDHJ JPPEEOLOGGP(::System::Int32 KDDJHNKKCAG)
	{
		return ((::JBLNHLNMDHJ(*)(::System::Int32))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ_JPPEEOLOGGP_OFFSET))(KDDJHNKKCAG);
	}
	*/

	::System::Void GJFHOMOGGMK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ_GJFHOMOGGMK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PHIEHKGLAMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ_PHIEHKGLAMA_OFFSET))(this);
	}

	::System::Boolean KBNAFCEHOHJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ_KBNAFCEHOHJ_OFFSET))(this);
	}

	::System::Int32 MJEKGNJNEEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ_MJEKGNJNEEO_OFFSET))(this);
	}

	::System::Void EABAFOMNIEH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBLNHLNMDHJ_EABAFOMNIEH_OFFSET))(this, EGEGIMGMJHN);
	}
};
