#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueJoyValue; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECBBD10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECBBD20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECBBCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueJoyValue_TypeDefinitionIndex = 22182;

	class SetDynamicValueByRogueJoyValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueJoyValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueJoyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueJoyValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueJoyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEJOYVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
