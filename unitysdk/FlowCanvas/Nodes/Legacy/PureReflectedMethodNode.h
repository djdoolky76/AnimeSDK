#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueInput; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE_CALLMETHOD_OFFSET UNITYSDK_OFFSET(0x1EA57F70)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EA57400)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA583D0)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedMethodNode_TypeDefinitionIndex = 30179;

	class PureReflectedMethodNode : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput*>* paramsInputs; // 0x10
		::System::Object* instance; // 0x18
		::FlowCanvas::ValueInput* instanceInput; // 0x20
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput*>* inputs; // 0x28
		::Il2CppArray<::System::Object*>* args; // 0x30
		::System::Type* paramsArrayType; // 0x38
		::System::Object* returnValue; // 0x40
		::System::Reflection::MethodInfo* method; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node, ::System::Reflection::MethodInfo* method, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE_REGISTERPORTS_OFFSET))(this, node, method, options);
		}

		::System::Object* CallMethod()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE_CALLMETHOD_OFFSET))(this);
		}
	};
}
