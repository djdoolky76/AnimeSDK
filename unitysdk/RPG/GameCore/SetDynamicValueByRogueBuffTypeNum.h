#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueBuffTypeNum; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9B10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA9B20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffTypeNum_TypeDefinitionIndex = 21774;

	class SetDynamicValueByRogueBuffTypeNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
