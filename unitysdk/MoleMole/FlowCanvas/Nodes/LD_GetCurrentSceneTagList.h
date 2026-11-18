#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTSCENETAGLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1430A690)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTSCENETAGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1430A7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetCurrentSceneTagList_TypeDefinitionIndex = 67070;

	class LD_GetCurrentSceneTagList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTSCENETAGLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Invoke(::System::Boolean containsDynamic)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTSCENETAGLIST_INVOKE_OFFSET))(this, containsDynamic);
		}
	};
}
