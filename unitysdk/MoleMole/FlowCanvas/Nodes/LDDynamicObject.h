#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDYNAMICOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D83C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x180D8770)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDynamicObject_TypeDefinitionIndex = 85384;

	class LDDynamicObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDYNAMICOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::System::String*>* ObjectKey, ::System::Boolean On)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDYNAMICOBJECT_INVOKE_OFFSET))(this, ObjectKey, On);
		}
	};
}
