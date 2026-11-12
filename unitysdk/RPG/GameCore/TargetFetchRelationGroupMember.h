#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchRelationGroupMember; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE14990)
#define RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE14AD0)
#define RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE14AA0)
#define RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE149A0)
#define RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE14960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchRelationGroupMember_TypeDefinitionIndex = 24475;

	class TargetFetchRelationGroupMember : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x10
		::RPG::GameCore::EntityRelationMemberType MemberType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchRelationGroupMember* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchRelationGroupMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchRelationGroupMember* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchRelationGroupMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRelationGroupMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRelationGroupMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRelationGroupMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRelationGroupMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHRELATIONGROUPMEMBER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
