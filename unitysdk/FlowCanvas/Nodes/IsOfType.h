#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System { class Type; }

#define FLOWCANVAS_NODES_ISOFTYPE_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1D5D0A00)
#define FLOWCANVAS_NODES_ISOFTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D0A20)
#define FLOWCANVAS_NODES_ISOFTYPE_SET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1D5D0A10)
#define FLOWCANVAS_NODES_ISOFTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0AC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IsOfType_TypeDefinitionIndex = 30647;

	class IsOfType
	{
	public:
		::System::Object* _OBJECT_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISOFTYPE__CTOR_OFFSET))(this);
		}

		::System::Object* get_OBJECT()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISOFTYPE_GET_OBJECT_OFFSET))(this);
		}

		::System::Void set_OBJECT(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISOFTYPE_SET_OBJECT_OFFSET))(this, value);
		}

		::System::Boolean Invoke(::System::Object* OBJECT, ::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISOFTYPE_INVOKE_OFFSET))(this, OBJECT, type);
		}
	};
}
