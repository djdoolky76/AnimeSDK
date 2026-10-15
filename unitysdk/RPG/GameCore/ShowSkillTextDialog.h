#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowSkillTextDialog; }

#define RPG_GAMECORE_SHOWSKILLTEXTDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE4F40)
#define RPG_GAMECORE_SHOWSKILLTEXTDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE4F50)
#define RPG_GAMECORE_SHOWSKILLTEXTDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE4F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSkillTextDialog_TypeDefinitionIndex = 22934;

	class ShowSkillTextDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID SkillName; // 0x18
		::System::Boolean IsDark; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SkillTextDialogType Type; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLTEXTDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSkillTextDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSkillTextDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLTEXTDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSkillTextDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSkillTextDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLTEXTDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
