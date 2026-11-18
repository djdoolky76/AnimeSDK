#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATMODULO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F2F8580)
#define FLOWCANVAS_NODES_FLOATMODULO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F8590)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatModulo_TypeDefinitionIndex = 30814;

	class FloatModulo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMODULO__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single value, ::System::Single mod)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMODULO_INVOKE_OFFSET))(this, value, mod);
		}
	};
}
