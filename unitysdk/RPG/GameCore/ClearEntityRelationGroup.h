#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearEntityRelationGroup; }

#define RPG_GAMECORE_CLEARENTITYRELATIONGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B6320)
#define RPG_GAMECORE_CLEARENTITYRELATIONGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B6330)
#define RPG_GAMECORE_CLEARENTITYRELATIONGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B62F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityRelationGroup_TypeDefinitionIndex = 22827;

	class ClearEntityRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYRELATIONGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYRELATIONGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYRELATIONGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
