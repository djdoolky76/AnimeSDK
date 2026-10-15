#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchTemplateEntityList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB664A0)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB66530)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB66510)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB664B0)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB66430)

namespace RPG::GameCore
{
	class TargetFetchTemplateEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
