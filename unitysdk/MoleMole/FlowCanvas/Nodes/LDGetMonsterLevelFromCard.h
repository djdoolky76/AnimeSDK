#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x13569F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1356A2F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterLevelFromCard_TypeDefinitionIndex = 52039;

	class LDGetMonsterLevelFromCard
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 monsterCardId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD_INVOKE_OFFSET))(this, monsterCardId);
		}
	};
}
