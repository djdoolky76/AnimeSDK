#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFHEHDNBJLL.h"
#include "unitysdk/JFHILPANBNL.h"
namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }

#define PDOKEMJEEBL_CTOR_OFFSET UNITYSDK_OFFSET(0xC022560)
#define PDOKEMJEEBL_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC022050)
#define PDOKEMJEEBL_HJNHPDOLMJA_OFFSET UNITYSDK_OFFSET(0xC0224A0)
#define PDOKEMJEEBL_JMOLCMEGIHM_OFFSET UNITYSDK_OFFSET(0xC022330)
#define PDOKEMJEEBL_MJHEKFEAOPE_OFFSET UNITYSDK_OFFSET(0xC022520)
#define PDOKEMJEEBL_OKFGOAFJEHL_OFFSET UNITYSDK_OFFSET(0xC0224E0)

	class PDOKEMJEEBL : public ::BFHEHDNBJLL
	{
	public:
		::System::UInt32 GGFCAMLJJJH; // 0x10
		::JFHILPANBNL LOKJIBPHGCA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOKEMJEEBL_CTOR_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + PDOKEMJEEBL_FPKLDCGAJGP_OFFSET))(this, a1);
		}

		::System::UInt32 HJNHPDOLMJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOKEMJEEBL_HJNHPDOLMJA_OFFSET))(this);
		}

		::System::UInt32 OKFGOAFJEHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOKEMJEEBL_OKFGOAFJEHL_OFFSET))(this);
		}

		::JFHILPANBNL MJHEKFEAOPE()
		{
			return ((::JFHILPANBNL(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOKEMJEEBL_MJHEKFEAOPE_OFFSET))(this);
		}

		::System::UInt32 JMOLCMEGIHM(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDOKEMJEEBL_JMOLCMEGIHM_OFFSET))(this, a1);
		}

	};
