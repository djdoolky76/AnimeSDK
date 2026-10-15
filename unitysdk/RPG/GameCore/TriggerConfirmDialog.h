#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerConfirmDialog; }

#define RPG_GAMECORE_TRIGGERCONFIRMDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC452E0)
#define RPG_GAMECORE_TRIGGERCONFIRMDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC452F0)
#define RPG_GAMECORE_TRIGGERCONFIRMDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC452B0)

namespace RPG::GameCore
{
	class TriggerConfirmDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextMapID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x30
		::RPG::Client::TextID ConfirmTextMapID; // 0x38
		::RPG::Client::TextID CancelTextMapID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCONFIRMDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerConfirmDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerConfirmDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCONFIRMDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerConfirmDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerConfirmDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCONFIRMDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
