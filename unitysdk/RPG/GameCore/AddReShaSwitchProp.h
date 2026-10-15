#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddReShaSwitchProp; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDRESHASWITCHPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35D850)
#define RPG_GAMECORE_ADDRESHASWITCHPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35D880)
#define RPG_GAMECORE_ADDRESHASWITCHPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35D800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaSwitchProp_TypeDefinitionIndex = 22030;

	class AddReShaSwitchProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* RouteDisplayID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHASWITCHPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaSwitchProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaSwitchProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHASWITCHPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaSwitchProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaSwitchProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHASWITCHPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
