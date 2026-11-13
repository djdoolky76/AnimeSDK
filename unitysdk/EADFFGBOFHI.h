#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEAIJJCDJHO.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture; }

#define EADFFGBOFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x181C77A0)
#define EADFFGBOFHI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x181C7810)
#define EADFFGBOFHI_MFCOINKALKA_OFFSET UNITYSDK_OFFSET(0x181C77C0)

inline static constexpr unsigned int EADFFGBOFHI_TypeDefinitionIndex = 72124;

	class EADFFGBOFHI : public ::BEAIJJCDJHO
	{
	public:
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x20
		::UnityEngine::Texture* LHBMPPDMFKC; // 0x28
		::System::Single CAFPEJDDMNC; // 0x30
		::System::Single CCAOGMEFNLB; // 0x34
		::System::Single FEKBJFJOCLF; // 0x38
		::RPG::CustomRP::ColorGradingGradual EJLHCINGODM; // 0x3C
		::System::Single ALJFIPDOIIB; // 0x40
		::System::Single BJKPDKKNIOJ; // 0x44
		::System::Single GKBAJIBGNPK; // 0x48
		::System::Single HKHPEFCDPGP; // 0x4C
		::System::Single EJOCALJIDPB; // 0x50
		::System::Single FABKKJMEAPO; // 0x54
		::System::Single CNBDOCBLIDP; // 0x58
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
