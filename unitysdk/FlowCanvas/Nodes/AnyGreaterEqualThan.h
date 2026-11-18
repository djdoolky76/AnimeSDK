#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class IComparable; }

#define FLOWCANVAS_NODES_ANYGREATEREQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE964F0)
#define FLOWCANVAS_NODES_ANYGREATEREQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE96600)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyGreaterEqualThan_TypeDefinitionIndex = 29403;

	class AnyGreaterEqualThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYGREATEREQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::IComparable* a, ::System::IComparable* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IComparable*, ::System::IComparable*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYGREATEREQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
