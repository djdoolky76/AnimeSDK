#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLuaActionQueuePause; }

#define RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8B4F0)
#define RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8B500)
#define RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8B4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLuaActionQueuePause_TypeDefinitionIndex = 24283;

	class SetLuaActionQueuePause : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLuaActionQueuePause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLuaActionQueuePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLuaActionQueuePause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLuaActionQueuePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
