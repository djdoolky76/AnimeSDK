#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEAIJJCDJHO.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class AnimationCurve; }

#define IABNKKCCLFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFE0A0)
#define IABNKKCCLFJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15DFE120)
#define IABNKKCCLFJ_MFCOINKALKA_OFFSET UNITYSDK_OFFSET(0x15DFE0D0)

inline static constexpr unsigned int IABNKKCCLFJ_TypeDefinitionIndex = 70161;

	class IABNKKCCLFJ : public ::BEAIJJCDJHO
	{
	public:
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x20
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x28
		::System::Int32 DDKMCNFAECO; // 0x30
		::System::Single JHCNLPEJJLN; // 0x34
		::System::Boolean CNOHJLMNBPJ; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single LJLPEDJPKGP; // 0x3C
		::System::Single PCEJNJJMOLI; // 0x40
		::System::Single DCOGIEGFBPP; // 0x44
		::System::Single IEHPFADHJFD; // 0x48
		::System::Single PHNGGJDKEOC; // 0x4C
		::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + IABNKKCCLFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PPEffectFilterType MFCOINKALKA()
		{
			return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + IABNKKCCLFJ_MFCOINKALKA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABNKKCCLFJ_HADOHLNHHGB_OFFSET))(this);
		}

	};
