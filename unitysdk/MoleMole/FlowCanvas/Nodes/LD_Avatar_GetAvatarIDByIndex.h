#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_GETAVATARIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x10D19F90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D19F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1A1D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Avatar_GetAvatarIDByIndex_TypeDefinitionIndex = 88084;

	class LD_Avatar_GetAvatarIDByIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 checkIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_INVOKE_OFFSET))(this, checkIndex);
		}

		static ::System::Int32 GetAvatarIDByIndex(::System::Int32 checkIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_GETAVATARIDBYINDEX_OFFSET))(checkIndex);
		}
	};
}
