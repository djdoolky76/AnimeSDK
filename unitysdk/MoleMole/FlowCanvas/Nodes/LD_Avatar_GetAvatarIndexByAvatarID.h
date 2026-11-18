#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_GETAVATARINDEXBYAVATARID_OFFSET UNITYSDK_OFFSET(0x12B3EC00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3EBB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3EFB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Avatar_GetAvatarIndexByAvatarID_TypeDefinitionIndex = 76223;

	class LD_Avatar_GetAvatarIndexByAvatarID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 avatarID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_INVOKE_OFFSET))(this, avatarID);
		}

		static ::System::Int32 GetAvatarIndexByAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_GETAVATARINDEXBYAVATARID_OFFSET))(avatarID);
		}
	};
}
