#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Port.h"

namespace FlowCanvas { class FlowNode; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FLOWCANVAS_VALUEINPUT_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1EF17A60)
#define FLOWCANVAS_VALUEINPUT_GET_SKIPSELFINSTANCEASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EF17E10)
#define FLOWCANVAS_VALUEINPUT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EF17D90)
#define FLOWCANVAS_VALUEINPUT_SETDEFAULTANDSERIALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1EF17DB0)
#define FLOWCANVAS_VALUEINPUT_SET_SKIPSELFINSTANCEASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EF17E20)
#define FLOWCANVAS_VALUEINPUT_SKIPSELFINSTANCEASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EF17E00)
#define FLOWCANVAS_VALUEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF17A50)

namespace FlowCanvas
{
	inline static constexpr unsigned int ValueInput_TypeDefinitionIndex = 30859;

	class ValueInput : public ::FlowCanvas::Port
	{
	public:
		::System::Boolean _skipSelfInstanceAssignment_k__BackingField; // 0x38

		::System::Void _ctor(::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEINPUT__CTOR_OFFSET))(this, parent, name, ID);
		}

		static ::FlowCanvas::ValueInput* CreateInstance_1(::System::Type* t, ::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID)
		{
			return ((::FlowCanvas::ValueInput*(*)(::System::Type*, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEINPUT_CREATEINSTANCE_1_OFFSET))(t, parent, name, ID);
		}

		::System::Object* get_value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEINPUT_GET_VALUE_OFFSET))(this);
		}

		::FlowCanvas::ValueInput* SetDefaultAndSerializedValue(::System::Object* v)
		{
			return ((::FlowCanvas::ValueInput*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEINPUT_SETDEFAULTANDSERIALIZEDVALUE_OFFSET))(this, v);
		}

		::FlowCanvas::ValueInput* SkipSelfInstanceAssignment(::System::Boolean skip)
		{
			return ((::FlowCanvas::ValueInput*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEINPUT_SKIPSELFINSTANCEASSIGNMENT_OFFSET))(this, skip);
		}

		::System::Boolean get_skipSelfInstanceAssignment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEINPUT_GET_SKIPSELFINSTANCEASSIGNMENT_OFFSET))(this);
		}

		::System::Void set_skipSelfInstanceAssignment(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEINPUT_SET_SKIPSELFINSTANCEASSIGNMENT_OFFSET))(this, value);
		}
	};
}
