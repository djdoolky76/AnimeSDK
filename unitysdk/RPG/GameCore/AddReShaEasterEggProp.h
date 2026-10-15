#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddReShaEasterEggProp; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDRESHAEASTEREGGPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35D4E0)
#define RPG_GAMECORE_ADDRESHAEASTEREGGPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35D510)
#define RPG_GAMECORE_ADDRESHAEASTEREGGPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35D490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaEasterEggProp_TypeDefinitionIndex = 22031;

	class AddReShaEasterEggProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* SuccessSound; // 0x20
		::RPG::GameCore::DynamicString* FailSound; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaEasterEggProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaEasterEggProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaEasterEggProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaEasterEggProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
