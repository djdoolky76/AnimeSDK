#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/GraphLoadData.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS179_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF54F80)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS179_0__LOADOVERWRITE_B__0_OFFSET UNITYSDK_OFFSET(0x1EF54F90)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass179_0_TypeDefinitionIndex = 30027;

	class Graph___c__DisplayClass179_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Internal::GraphLoadData data; // 0x10
		::NodeCanvas::Framework::Graph* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS179_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadOverwrite_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS179_0__LOADOVERWRITE_B__0_OFFSET))(this);
		}
	};
}
