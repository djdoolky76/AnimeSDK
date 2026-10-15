#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_HHFABLMIEKL_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)

namespace RPG::Client
{
	struct alignas(4) WolfBroGunPlayTarget_RogueHP_HHFABLMIEKL
	{
		::System::Int32 EIAKNONOIHA; // 0x10
		::System::Int32 JODLKJEJKIO; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_HHFABLMIEKL_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
