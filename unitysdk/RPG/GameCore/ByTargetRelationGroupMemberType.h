#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetRelationGroupMemberType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E751770)
#define RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E7519C0)
#define RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E751990)
#define RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E751780)
#define RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E751740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetRelationGroupMemberType_TypeDefinitionIndex = 23254;

	class ByTargetRelationGroupMemberType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::EntityRelationType Relation; // 0x28
		::RPG::GameCore::EntityRelationMemberType MemberType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetRelationGroupMemberType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetRelationGroupMemberType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetRelationGroupMemberType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetRelationGroupMemberType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetRelationGroupMemberType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetRelationGroupMemberType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetRelationGroupMemberType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetRelationGroupMemberType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETRELATIONGROUPMEMBERTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
