#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetResilience; }

#define RPG_GAMECORE_SETRESILIENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA92B50)
#define RPG_GAMECORE_SETRESILIENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA92B60)
#define RPG_GAMECORE_SETRESILIENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA92B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetResilience_TypeDefinitionIndex = 23476;

	class SetResilience : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ResilienceEnum Resilience; // 0x18
		::System::Boolean DoReset; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRESILIENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetResilience* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetResilience*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRESILIENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetResilience* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetResilience*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRESILIENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
