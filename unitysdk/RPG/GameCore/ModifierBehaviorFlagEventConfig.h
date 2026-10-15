#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlagEventType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85ED20)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D85EBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagEventConfig_TypeDefinitionIndex = 17111;

	class ModifierBehaviorFlagEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackConfig; // 0x10
		::RPG::GameCore::ModifierBehaviorFlagEventType EventType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierBehaviorFlagEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierBehaviorFlagEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
