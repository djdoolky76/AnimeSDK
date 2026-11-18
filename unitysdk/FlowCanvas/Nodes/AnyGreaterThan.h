#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class IComparable; }

#define FLOWCANVAS_NODES_ANYGREATERTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDC3C70)
#define FLOWCANVAS_NODES_ANYGREATERTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC3D50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyGreaterThan_TypeDefinitionIndex = 29365;

	class AnyGreaterThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYGREATERTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::IComparable* a, ::System::IComparable* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IComparable*, ::System::IComparable*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYGREATERTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
