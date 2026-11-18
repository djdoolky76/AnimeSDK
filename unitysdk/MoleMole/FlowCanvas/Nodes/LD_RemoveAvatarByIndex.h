#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x162C3B30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x162C3BD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RemoveAvatarByIndex_TypeDefinitionIndex = 80935;

	class LD_RemoveAvatarByIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX_INVOKE_OFFSET))(this, index);
		}
	};
}
