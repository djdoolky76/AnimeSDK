#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class IComparable; }

#define FLOWCANVAS_NODES_ANYLESSTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBAA3B0)
#define FLOWCANVAS_NODES_ANYLESSTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAA490)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyLessThan_TypeDefinitionIndex = 30877;

	class AnyLessThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYLESSTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::IComparable* a, ::System::IComparable* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IComparable*, ::System::IComparable*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYLESSTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
