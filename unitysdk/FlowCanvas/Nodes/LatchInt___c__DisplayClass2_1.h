#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

#define FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE97A30)
#define FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1DE97A40)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatchInt___c__DisplayClass2_1_TypeDefinitionIndex = 29675;

	template <typename T>
	class LatchInt___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__REGISTERPORTS_B__1_OFFSET))(this, f);
		}
	};
}
