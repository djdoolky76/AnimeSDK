#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityRelationGroup; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYRELATIONGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB14E0)
#define RPG_GAMECORE_SETENTITYRELATIONGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB14F0)
#define RPG_GAMECORE_SETENTITYRELATIONGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB14B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityRelationGroup_TypeDefinitionIndex = 22826;

	class SetEntityRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* MainTargets; // 0x20
		::RPG::GameCore::TargetEvaluator* SubTargets; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYRELATIONGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYRELATIONGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYRELATIONGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
