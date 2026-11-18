#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System::Collections { class IList; }

#define FLOWCANVAS_NODES_GETLISTITEMINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5F440)
#define FLOWCANVAS_NODES_GETLISTITEMINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5F520)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetListItemIndex_TypeDefinitionIndex = 30558;

	class GetListItemIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETLISTITEMINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Collections::IList* list, ::System::Object* item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IList*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETLISTITEMINDEX_INVOKE_OFFSET))(this, list, item);
		}
	};
}
