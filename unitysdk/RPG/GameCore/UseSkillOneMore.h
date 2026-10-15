#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UseSkillOneMore; }

#define RPG_GAMECORE_USESKILLONEMORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC796F0)
#define RPG_GAMECORE_USESKILLONEMORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC79710)
#define RPG_GAMECORE_USESKILLONEMORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC796B0)

namespace RPG::GameCore
{
	class UseSkillOneMore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ControlSkillType SkillType; // 0x18
		::System::Boolean ClearUltraSkillEffect; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 ChildSkillIndex; // 0x20
		::System::Boolean RefreshActionType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSkillOneMore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSkillOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSkillOneMore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSkillOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLONEMORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
