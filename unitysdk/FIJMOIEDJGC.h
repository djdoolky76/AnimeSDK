#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMLLGKJHADF.h"
#include "unitysdk/System/ValueType.h"

class JMNDEAFIAAF;
class MGCODKEBNNC;
namespace System { class Action; }

#define FIJMOIEDJGC_BIBMDPOJGJM_OFFSET UNITYSDK_OFFSET(0x745420)
#define FIJMOIEDJGC_DEADJIOEONL_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define FIJMOIEDJGC_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x7453C0)
#define FIJMOIEDJGC_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x363D60)
#define FIJMOIEDJGC__CTOR_OFFSET UNITYSDK_OFFSET(0x7453B0)

inline static constexpr unsigned int FIJMOIEDJGC_TypeDefinitionIndex = 88326;

struct alignas(4) FIJMOIEDJGC
{
	// static const ::System::Int32 CFEDLBDPDIN = 0x1; // 0x0
	::EMLLGKJHADF MOBBACOLGMP; // 0x10
	::System::Int32 _IHPHJGGFABP_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIJMOIEDJGC__CTOR_OFFSET))(this, AOCOIDIMLIH);
	}

	::System::Boolean FCFOEJGPDNO(::JMNDEAFIAAF* AAOCANGHBDG, ::MGCODKEBNNC*& HDMOCGOIJMP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JMNDEAFIAAF*, ::MGCODKEBNNC*&))((::PBYTE)hIl2Cpp + FIJMOIEDJGC_FCFOEJGPDNO_OFFSET))(this, AAOCANGHBDG, HDMOCGOIJMP);
	}

	::System::Void DEADJIOEONL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIJMOIEDJGC_DEADJIOEONL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMOIEDJGC_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Boolean BIBMDPOJGJM(::MGCODKEBNNC* HDMOCGOIJMP, ::System::Action* GODDDLDNLMN, ::System::Action* JFAFHDDJKOD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MGCODKEBNNC*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FIJMOIEDJGC_BIBMDPOJGJM_OFFSET))(this, HDMOCGOIJMP, GODDDLDNLMN, JFAFHDDJKOD);
	}
};
