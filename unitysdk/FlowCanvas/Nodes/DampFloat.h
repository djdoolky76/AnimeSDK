#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_DAMPFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE97540)
#define FLOWCANVAS_NODES_DAMPFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE975B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DampFloat_TypeDefinitionIndex = 29626;

	class DampFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DAMPFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single current, ::System::Single target, ::System::Single damp)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DAMPFLOAT_INVOKE_OFFSET))(this, current, target, damp);
		}
	};
}
