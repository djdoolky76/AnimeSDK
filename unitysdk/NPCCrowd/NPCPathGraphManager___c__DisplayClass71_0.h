#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { class NPCPathGraphManager; }

#define NPCCROWD_NPCPATHGRAPHMANAGER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFD3A5D0)
#define NPCCROWD_NPCPATHGRAPHMANAGER___C__DISPLAYCLASS71_0__HIDEGRAPHNPC_B__0_OFFSET UNITYSDK_OFFSET(0xFD3A5E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager___c__DisplayClass71_0_TypeDefinitionIndex = 71335;

	class NPCPathGraphManager___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::NPCCrowd::NPCPathGraphManager* __4__this; // 0x10
		::System::Int32 graphID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideGraphNpc_b__0(::System::UInt32 callbackEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___C__DISPLAYCLASS71_0__HIDEGRAPHNPC_B__0_OFFSET))(this, callbackEntityID);
		}
	};
}
