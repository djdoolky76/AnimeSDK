#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEAIJJCDJHO.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture; }

#define EADFFGBOFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1266CD40)
#define EADFFGBOFHI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1266CDB0)
#define EADFFGBOFHI_MFCOINKALKA_OFFSET UNITYSDK_OFFSET(0x1266CD60)

inline static constexpr unsigned int EADFFGBOFHI_TypeDefinitionIndex = 70158;

	class EADFFGBOFHI : public ::BEAIJJCDJHO
	{
	public:
		::UnityEngine::Texture* LHBMPPDMFKC; // 0x20
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x28
		::System::Single BJKPDKKNIOJ; // 0x30
		::System::Single CNBDOCBLIDP; // 0x34
		::System::Single FABKKJMEAPO; // 0x38
		::System::Single ALJFIPDOIIB; // 0x3C
		::System::Single CCAOGMEFNLB; // 0x40
		::System::Single EJOCALJIDPB; // 0x44
		::System::Single CAFPEJDDMNC; // 0x48
		::RPG::CustomRP::ColorGradingGradual EJLHCINGODM; // 0x4C
		::System::Single FEKBJFJOCLF; // 0x50
		::System::Single GKBAJIBGNPK; // 0x54
		::System::Single HKHPEFCDPGP; // 0x58
		::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + EADFFGBOFHI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PPEffectFilterType MFCOINKALKA()
		{
			return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + EADFFGBOFHI_MFCOINKALKA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADFFGBOFHI_HADOHLNHHGB_OFFSET))(this);
		}

	};
