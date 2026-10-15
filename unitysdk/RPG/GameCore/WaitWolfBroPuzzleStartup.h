#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitWolfBroPuzzleStartup; }

#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA5210)
#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA5220)
#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA51D0)

namespace RPG::GameCore
{
	class WaitWolfBroPuzzleStartup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Timeout; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessSequence; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailSequence; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
