#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E5C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5D30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_IsAgentOwnTalentCard_TypeDefinitionIndex = 70172;

	class LD_AbyssS2_IsAgentOwnTalentCard
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
