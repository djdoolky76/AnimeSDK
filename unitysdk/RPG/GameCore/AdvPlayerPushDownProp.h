#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerPushDownProp; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AB0E0)
#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AB0F0)
#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AB0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerPushDownProp_TypeDefinitionIndex = 22237;

	class AdvPlayerPushDownProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitStage; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitMonster; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerPushDownProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerPushDownProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerPushDownProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerPushDownProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
