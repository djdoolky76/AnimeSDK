#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEHAHJKOHKP_AttackChangeReason.h"
#include "unitysdk/LEHAHJKOHKP_HpChangeReason.h"
#include "unitysdk/LEHAHJKOHKP_ProbabilityChangeReason.h"
#include "unitysdk/NABHGBNKEAP.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
class KAKADGHNMFK;
namespace System { class String; }

#define EEADJIANBIH_COIHBMMDEGB_OFFSET UNITYSDK_OFFSET(0x1334C920)
#define EEADJIANBIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1334D3A0)
#define EEADJIANBIH_EBFKFOJNNGC_OFFSET UNITYSDK_OFFSET(0x1334C5B0)
#define EEADJIANBIH_FDOBJFJCJBB_OFFSET UNITYSDK_OFFSET(0x1334CFA0)
#define EEADJIANBIH_FDOGCHFNLEE_OFFSET UNITYSDK_OFFSET(0x1334C540)
#define EEADJIANBIH_GEDNLJOCONC_OFFSET UNITYSDK_OFFSET(0x1334D2A0)
#define EEADJIANBIH_NKGGFMBPJIK_OFFSET UNITYSDK_OFFSET(0x1334CC90)

inline static constexpr unsigned int EEADJIANBIH_TypeDefinitionIndex = 77561;

	class EEADJIANBIH : public ::NABHGBNKEAP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEADJIANBIH_CTOR_OFFSET))(this);
		}

		::System::String* FDOGCHFNLEE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEADJIANBIH_FDOGCHFNLEE_OFFSET))(this);
		}

		::System::Void EBFKFOJNNGC(::KAKADGHNMFK* a1, ::LEHAHJKOHKP_HpChangeReason a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::LEHAHJKOHKP_HpChangeReason, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EEADJIANBIH_EBFKFOJNNGC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void COIHBMMDEGB(::KAKADGHNMFK* a1, ::LEHAHJKOHKP_AttackChangeReason a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::LEHAHJKOHKP_AttackChangeReason, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EEADJIANBIH_COIHBMMDEGB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NKGGFMBPJIK(::KAKADGHNMFK* a1, ::LEHAHJKOHKP_ProbabilityChangeReason a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::LEHAHJKOHKP_ProbabilityChangeReason, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EEADJIANBIH_NKGGFMBPJIK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FDOBJFJCJBB(::KAKADGHNMFK* a1, ::LEHAHJKOHKP_ProbabilityChangeReason a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::LEHAHJKOHKP_ProbabilityChangeReason, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EEADJIANBIH_FDOBJFJCJBB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GEDNLJOCONC(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelStatusType a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelStatusType))((::PBYTE)hIl2Cpp + EEADJIANBIH_GEDNLJOCONC_OFFSET))(this, a1, a2);
		}

	};
