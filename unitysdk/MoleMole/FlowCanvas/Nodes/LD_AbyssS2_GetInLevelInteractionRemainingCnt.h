#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE4680)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE47F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetInLevelInteractionRemainingCnt_TypeDefinitionIndex = 84245;

	class LD_AbyssS2_GetInLevelInteractionRemainingCnt
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT_INVOKE_OFFSET))(this, entity);
		}
	};
}
