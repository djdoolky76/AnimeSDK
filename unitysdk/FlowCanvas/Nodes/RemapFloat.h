#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_REMAPFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9564B0)
#define FLOWCANVAS_NODES_REMAPFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E956510)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RemapFloat_TypeDefinitionIndex = 30288;

	class RemapFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REMAPFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single current, ::System::Single iMin, ::System::Single iMax, ::System::Single oMin, ::System::Single oMax)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REMAPFLOAT_INVOKE_OFFSET))(this, current, iMin, iMax, oMin, oMax);
		}
	};
}
