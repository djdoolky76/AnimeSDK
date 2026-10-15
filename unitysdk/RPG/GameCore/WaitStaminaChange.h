#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitStaminaChange; }

#define RPG_GAMECORE_WAITSTAMINACHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2280)
#define RPG_GAMECORE_WAITSTAMINACHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA2290)
#define RPG_GAMECORE_WAITSTAMINACHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA2240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitStaminaChange_TypeDefinitionIndex = 20493;

	class WaitStaminaChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsDecrease; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTAMINACHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitStaminaChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitStaminaChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTAMINACHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitStaminaChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitStaminaChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTAMINACHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
