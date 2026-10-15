#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UITriggerMonopolyModifier; }

#define RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC72180)
#define RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC72190)
#define RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC720C0)

namespace RPG::GameCore
{
	class UITriggerMonopolyModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UITriggerMonopolyModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UITriggerMonopolyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UITriggerMonopolyModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UITriggerMonopolyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
