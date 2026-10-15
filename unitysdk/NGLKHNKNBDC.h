#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NGLKHNKNBDC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define NGLKHNKNBDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D207DF0)
#define NGLKHNKNBDC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D207E00)
#define NGLKHNKNBDC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D207DC0)

inline static constexpr unsigned int NGLKHNKNBDC_TypeDefinitionIndex = 22485;

	class NGLKHNKNBDC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HOPKBCJIOCD; // 0x18
		::RPG::GameCore::DynamicFloat* IEHPFADHJFD; // 0x20
		::System::String* ECNKCCNJNPJ; // 0x28
		::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType DLMINHHKKMK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLKHNKNBDC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGLKHNKNBDC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGLKHNKNBDC*))((::PBYTE)hIl2Cpp + NGLKHNKNBDC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NGLKHNKNBDC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGLKHNKNBDC*))((::PBYTE)hIl2Cpp + NGLKHNKNBDC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
