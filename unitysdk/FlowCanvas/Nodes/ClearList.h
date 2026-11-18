#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections { class IList; }

#define FLOWCANVAS_NODES_CLEARLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE96FA0)
#define FLOWCANVAS_NODES_CLEARLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE97070)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ClearList_TypeDefinitionIndex = 30686;

	class ClearList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CLEARLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::IList* Invoke(::System::Collections::IList* list)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CLEARLIST_INVOKE_OFFSET))(this, list);
		}
	};
}
