#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseToTurnEnd; }

#define RPG_GAMECORE_PAUSETOTURNEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0CF30)
#define RPG_GAMECORE_PAUSETOTURNEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB0CF40)
#define RPG_GAMECORE_PAUSETOTURNEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB0CF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseToTurnEnd_TypeDefinitionIndex = 23862;

	class PauseToTurnEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseToTurnEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseToTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseToTurnEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseToTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
