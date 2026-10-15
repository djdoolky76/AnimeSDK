#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveEntityFromRelationGroup; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984F80)
#define RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984F90)
#define RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveEntityFromRelationGroup_TypeDefinitionIndex = 22829;

	class RemoveEntityFromRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEntityFromRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEntityFromRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEntityFromRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEntityFromRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
