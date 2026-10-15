#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfig; }
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfigList; }

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85EDF0)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D85ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagEventConfigList_TypeDefinitionIndex = 17110;

	class ModifierBehaviorFlagEventConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlagEventConfig*>* ModifierBehaviorFlagEventConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierBehaviorFlagEventConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierBehaviorFlagEventConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
