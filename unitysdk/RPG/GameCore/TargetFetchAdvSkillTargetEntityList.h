#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvSkillTargetEntityList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5E7F0)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5E880)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5E860)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5E800)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5E780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvSkillTargetEntityList_TypeDefinitionIndex = 23867;

	class TargetFetchAdvSkillTargetEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
