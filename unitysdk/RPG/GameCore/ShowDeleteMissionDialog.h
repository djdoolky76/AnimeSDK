#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowDeleteMissionDialog; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADA510)
#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADA520)
#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADA4E0)

namespace RPG::GameCore
{
	class ShowDeleteMissionDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAllCompleted; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowDeleteMissionDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowDeleteMissionDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowDeleteMissionDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowDeleteMissionDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
