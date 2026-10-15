#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBOAHKAAECG.h"
#include "unitysdk/EKBAHHJNMIF_WorldFourSpeState.h"
#include "unitysdk/RPG/MVector3.h"
class KGMBGMIGHOE;

#define EKBAHHJNMIF_ALGBFIAIMDJ_OFFSET UNITYSDK_OFFSET(0x154EFEA0)
#define EKBAHHJNMIF_CTOR_OFFSET UNITYSDK_OFFSET(0x154EFA20)
#define EKBAHHJNMIF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x154EFA30)
#define EKBAHHJNMIF_JHOFCONKMDJ_OFFSET UNITYSDK_OFFSET(0x154F0110)
#define EKBAHHJNMIF_JICODPDLIGK_OFFSET UNITYSDK_OFFSET(0x154EFCB0)
#define EKBAHHJNMIF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x154EFBF0)
#define EKBAHHJNMIF_JOHJHMAFNLA_OFFSET UNITYSDK_OFFSET(0x154EFAC0)
#define EKBAHHJNMIF___ADDENDCELLEFFECT_B__4_0_OFFSET UNITYSDK_OFFSET(0x154F0300)
#define EKBAHHJNMIF___ADDSTARTCELLEFFECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x154F02F0)

inline static constexpr unsigned int EKBAHHJNMIF_TypeDefinitionIndex = 75801;

	class EKBAHHJNMIF : public ::CBOAHKAAECG
	{
	public:
		::EKBAHHJNMIF_WorldFourSpeState NJJCEADBFOH; // 0x28
		::RPG::MVector3 PDJBFBPEHFE; // 0x2C
		::System::Single LLNIGIGFCEA; // 0x38
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
