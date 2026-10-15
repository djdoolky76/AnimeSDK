#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBOAHKAAECG.h"
#include "unitysdk/EKBAHHJNMIF_WorldFourSpeState.h"
#include "unitysdk/RPG/MVector3.h"
class KGMBGMIGHOE;

#define EKBAHHJNMIF_ALGBFIAIMDJ_OFFSET UNITYSDK_OFFSET(0x154FBB70)
#define EKBAHHJNMIF_CTOR_OFFSET UNITYSDK_OFFSET(0x154FB6F0)
#define EKBAHHJNMIF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x154FB700)
#define EKBAHHJNMIF_JHOFCONKMDJ_OFFSET UNITYSDK_OFFSET(0x154FBDE0)
#define EKBAHHJNMIF_JICODPDLIGK_OFFSET UNITYSDK_OFFSET(0x154FB980)
#define EKBAHHJNMIF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x154FB8C0)
#define EKBAHHJNMIF_JOHJHMAFNLA_OFFSET UNITYSDK_OFFSET(0x154FB790)
#define EKBAHHJNMIF___ADDENDCELLEFFECT_B__4_0_OFFSET UNITYSDK_OFFSET(0x154FBFE0)
#define EKBAHHJNMIF___ADDSTARTCELLEFFECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x154FBFD0)

	class EKBAHHJNMIF : public ::CBOAHKAAECG
	{
	public:
		::System::Single LLNIGIGFCEA; // 0x28
		::EKBAHHJNMIF_WorldFourSpeState NJJCEADBFOH; // 0x2C
		::RPG::MVector3 PDJBFBPEHFE; // 0x30
		::RPG::MVector3 NAMGGEJCDMP; // 0x3C
		// static const ::System::String* LINFKKKAADL; // 0x0
		// static const ::System::String* LDEABAFJJLD; // 0x0
		// static const ::System::String* JPCINMNJDJK; // 0x0
		// static const ::System::Object PGGLECDKOLM; // 0x0
		::System::Void _ctor(::KGMBGMIGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + EKBAHHJNMIF_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAHHJNMIF_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKBAHHJNMIF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JICODPDLIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAHHJNMIF_JICODPDLIGK_OFFSET))(this);
		}

		::System::Void JHOFCONKMDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAHHJNMIF_JHOFCONKMDJ_OFFSET))(this);
		}

		::System::Void JOHJHMAFNLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAHHJNMIF_JOHJHMAFNLA_OFFSET))(this);
		}

		::System::Void ALGBFIAIMDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKBAHHJNMIF_ALGBFIAIMDJ_OFFSET))(this, a1);
		}

		::System::Void __AddStartCellEffect_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAHHJNMIF___ADDSTARTCELLEFFECT_B__3_0_OFFSET))(this);
		}

		::System::Void __AddEndCellEffect_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAHHJNMIF___ADDENDCELLEFFECT_B__4_0_OFFSET))(this);
		}

	};
