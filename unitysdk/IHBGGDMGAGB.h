#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetupPropagateBeingAttackInTeam; }
namespace RPG::GameCore { class TaskContext; }

#define IHBGGDMGAGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1640A430)
#define IHBGGDMGAGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1640A460)

inline static constexpr unsigned int IHBGGDMGAGB_TypeDefinitionIndex = 55270;

	class IHBGGDMGAGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + IHBGGDMGAGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBGGDMGAGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
