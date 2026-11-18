#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERMODULO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9C79D0)
#define FLOWCANVAS_NODES_INTEGERMODULO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C79E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerModulo_TypeDefinitionIndex = 29735;

	class IntegerModulo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERMODULO__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 value, ::System::Int32 mod)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERMODULO_INVOKE_OFFSET))(this, value, mod);
		}
	};
}
