#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace RPG::GameCore { class TriggerEffect; }

#define RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DDAF0)
#define RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DD9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcPossessionEffectConfig_TypeDefinitionIndex = 22398;

	class NpcPossessionEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TriggerEffect*>* AttachEffects; // 0x10
		::System::Boolean AttachEffectsImmediately; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcPossessionEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSIONEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
