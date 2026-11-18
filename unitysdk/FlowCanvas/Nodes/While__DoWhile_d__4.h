#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class While; }

#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E3F4F10)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E3F5170)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E3F51D0)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E3F5180)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3F4F00)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F4EF0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int While__DoWhile_d__4_TypeDefinitionIndex = 30237;

	template <typename T1, typename T2, typename T3, typename T4>
	class While__DoWhile_d__4 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fUpdate; // 0x10
		::FlowCanvas::Flow f; // 0x18
		::System::Object* __8__1; // 0x40
		::FlowCanvas::Nodes::While* __4__this; // 0x48
		::FlowCanvas::ValueInput_1<::System::Boolean>* condition; // 0x50
		::System::Object* __2__current; // 0x58
		::FlowCanvas::FlowOutput* fFinish; // 0x60
		::System::Int32 __1__state; // 0x68

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
