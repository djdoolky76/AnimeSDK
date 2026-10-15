#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowEnvBuffDialog; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SHOWENVBUFFDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADB730)
#define RPG_GAMECORE_SHOWENVBUFFDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADB740)
#define RPG_GAMECORE_SHOWENVBUFFDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADB700)

namespace RPG::GameCore
{
	class ShowEnvBuffDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidID; // 0x18
		::System::UInt32 WorldLv; // 0x1C
		::System::Boolean IsAutoGetParam; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENVBUFFDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEnvBuffDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEnvBuffDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENVBUFFDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEnvBuffDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEnvBuffDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENVBUFFDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
