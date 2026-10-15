#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialClickBtn; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALCLICKBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC38FE0)
#define RPG_GAMECORE_TUTORIALCLICKBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC38FF0)
#define RPG_GAMECORE_TUTORIALCLICKBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC38FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialClickBtn_TypeDefinitionIndex = 24287;

	class TutorialClickBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NodeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLICKBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialClickBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialClickBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLICKBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialClickBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialClickBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLICKBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
