#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddEntityToRelationGroup; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3868A0)
#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3868B0)
#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386870)

namespace RPG::GameCore
{
	class AddEntityToRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::EntityRelationMemberType MemberType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddEntityToRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddEntityToRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddEntityToRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddEntityToRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
