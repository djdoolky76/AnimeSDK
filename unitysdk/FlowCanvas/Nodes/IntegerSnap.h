#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERSNAP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA56CC0)
#define FLOWCANVAS_NODES_INTEGERSNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56D80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerSnap_TypeDefinitionIndex = 29844;

	class IntegerSnap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERSNAP__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 value, ::System::Int32 interval)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERSNAP_INVOKE_OFFSET))(this, value, interval);
		}
	};
}
