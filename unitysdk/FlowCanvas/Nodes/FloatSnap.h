#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATSNAP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D475600)
#define FLOWCANVAS_NODES_FLOATSNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4756C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatSnap_TypeDefinitionIndex = 29563;

	class FloatSnap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATSNAP__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Single value, ::System::Int32 interval)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATSNAP_INVOKE_OFFSET))(this, value, interval);
		}
	};
}
