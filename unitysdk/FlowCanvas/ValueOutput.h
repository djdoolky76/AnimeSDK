#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Port.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueHandlerObject; }
namespace System { class String; }
namespace System { class Type; }

#define FLOWCANVAS_VALUEOUTPUT_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1F2FB200)
#define FLOWCANVAS_VALUEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FB1F0)

namespace FlowCanvas
{
	inline static constexpr unsigned int ValueOutput_TypeDefinitionIndex = 30860;

	class ValueOutput : public ::FlowCanvas::Port
	{
	public:
		::System::Void _ctor(::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEOUTPUT__CTOR_OFFSET))(this, parent, name, ID);
		}

		static ::FlowCanvas::ValueOutput* CreateInstance_1(::System::Type* t, ::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID, ::FlowCanvas::ValueHandlerObject* getter)
		{
			return ((::FlowCanvas::ValueOutput*(*)(::System::Type*, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*, ::FlowCanvas::ValueHandlerObject*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEOUTPUT_CREATEINSTANCE_1_OFFSET))(t, parent, name, ID, getter);
		}
	};
}
