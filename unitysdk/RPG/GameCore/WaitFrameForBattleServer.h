#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitFrameForBattleServer; }

#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6BC30)
#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6BC40)
#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6BBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFrameForBattleServer_TypeDefinitionIndex = 23788;

	class WaitFrameForBattleServer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 WaitFrameCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFrameForBattleServer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFrameForBattleServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFrameForBattleServer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFrameForBattleServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
