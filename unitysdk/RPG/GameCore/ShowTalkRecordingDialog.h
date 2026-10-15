#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTalkRecordingDialog; }

#define RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8220)
#define RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8230)
#define RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB81E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTalkRecordingDialog_TypeDefinitionIndex = 21936;

	class ShowTalkRecordingDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTalkRecordingDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTalkRecordingDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTalkRecordingDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTalkRecordingDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
