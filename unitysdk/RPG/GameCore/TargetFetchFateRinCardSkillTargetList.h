#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchFateRinCardSkillTargetList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE11A00)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE11A90)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE11A70)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE11A10)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE11990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFateRinCardSkillTargetList_TypeDefinitionIndex = 24473;

	class TargetFetchFateRinCardSkillTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
