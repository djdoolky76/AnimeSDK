#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UIController; }

#define RPG_CLIENT_UI3DLINKREGISTRY_ENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)

namespace RPG::Client
{
	struct alignas(8) UI3DLinkRegistry_Entry
	{
		::RPG::Client::IUI3DController* UI3D; // 0x10
		::RPG::Client::UIController* UI2D; // 0x18
		::System::Void _ctor(::RPG::Client::IUI3DController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_ENTRY_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
