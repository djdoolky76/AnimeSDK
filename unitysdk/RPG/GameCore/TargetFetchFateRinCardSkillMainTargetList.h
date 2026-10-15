#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchFateRinCardSkillMainTargetList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB34DB0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB34E40)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB34E20)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB34DC0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB34D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFateRinCardSkillMainTargetList_TypeDefinitionIndex = 24013;

	class TargetFetchFateRinCardSkillMainTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
