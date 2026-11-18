#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Macros { class CustomMacroEnumWrap; }

#define FLOWCANVAS_NODES_SWITCHMACROLOCALENUM___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBACBA0)
#define FLOWCANVAS_NODES_SWITCHMACROLOCALENUM___C__DISPLAYCLASS1_1__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EBACC60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchMacroLocalEnum___c__DisplayClass1_1_TypeDefinitionIndex = 30789;

	template <typename T>
	class SwitchMacroLocalEnum___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::Il2CppArray<::FlowCanvas::FlowOutput*>* cases; // 0x18
		::FlowCanvas::ValueInput_1<::FlowCanvas::Macros::CustomMacroEnumWrap*>* selector; // 0x20
		::FlowCanvas::FlowOutput* defaultCase; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHMACROLOCALENUM___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHMACROLOCALENUM___C__DISPLAYCLASS1_1__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
