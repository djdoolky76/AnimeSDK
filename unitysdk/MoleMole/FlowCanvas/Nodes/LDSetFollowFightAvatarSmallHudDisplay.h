#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x16239B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x16239DA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetFollowFightAvatarSmallHudDisplay_TypeDefinitionIndex = 53341;

	class LDSetFollowFightAvatarSmallHudDisplay
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY_INVOKE_OFFSET))(this, enabled);
		}
	};
}
