#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchContextDialogueTalkTrigger; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB61610)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB616C0)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61680)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB61620)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61580)

namespace RPG::GameCore
{
	class TargetFetchContextDialogueTalkTrigger : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
