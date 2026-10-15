#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitForTurnEnd; }

#define RPG_GAMECORE_WAITFORTURNEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC98D50)
#define RPG_GAMECORE_WAITFORTURNEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC98D60)
#define RPG_GAMECORE_WAITFORTURNEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC98D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForTurnEnd_TypeDefinitionIndex = 23430;

	class WaitForTurnEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean GoNextImmediately; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORTURNEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForTurnEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORTURNEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForTurnEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORTURNEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
