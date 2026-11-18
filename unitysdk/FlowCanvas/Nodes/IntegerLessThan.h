#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERLESSTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7AA650)
#define FLOWCANVAS_NODES_INTEGERLESSTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA660)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerLessThan_TypeDefinitionIndex = 30674;

	class IntegerLessThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERLESSTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERLESSTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
