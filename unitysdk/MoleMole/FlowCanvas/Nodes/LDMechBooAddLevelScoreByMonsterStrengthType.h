#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16237AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16237F20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMechBooAddLevelScoreByMonsterStrengthType_TypeDefinitionIndex = 70690;

	class LDMechBooAddLevelScoreByMonsterStrengthType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE_INVOKE_OFFSET))(this, monster);
		}
	};
}
