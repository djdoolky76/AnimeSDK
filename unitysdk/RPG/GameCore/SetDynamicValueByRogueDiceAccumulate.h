#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueDiceAccumulate; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C320)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C330)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueDiceAccumulate_TypeDefinitionIndex = 21793;

	class SetDynamicValueByRogueDiceAccumulate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueDiceAccumulate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDICEACCUMULATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
