#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1357A540)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1357A670)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RemovePartnerAvatarByID_TypeDefinitionIndex = 79739;

	class LD_RemovePartnerAvatarByID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID_INVOKE_OFFSET))(this, avatarID);
		}
	};
}
