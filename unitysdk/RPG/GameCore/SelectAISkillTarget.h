#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class SelectAISkillTarget; }
namespace System { class String; }

#define RPG_GAMECORE_SELECTAISKILLTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8BC30)
#define RPG_GAMECORE_SELECTAISKILLTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8BC40)
#define RPG_GAMECORE_SELECTAISKILLTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8BC00)

namespace RPG::GameCore
{
	class SelectAISkillTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::System::Boolean UseDefault; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::AISelector* Selector; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTAISKILLTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectAISkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectAISkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTAISKILLTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectAISkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectAISkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTAISKILLTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
