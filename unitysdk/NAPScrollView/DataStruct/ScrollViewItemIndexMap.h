#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIAnimCell;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_CLEAR_OFFSET UNITYSDK_OFFSET(0x13B552F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_ENABLEUSEUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x13B54F40)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_REMOVE_OFFSET UNITYSDK_OFFSET(0x13B55050)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_SET_OFFSET UNITYSDK_OFFSET(0x13B54D90)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_TRYGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x13B54F90)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_TRYGETUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x13B550E0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x13B55400)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewItemIndexMap_TypeDefinitionIndex = 66486;

	class ScrollViewItemIndexMap : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MonoUIAnimCell*>* _goInstanceIdToUIAnimCell; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _goInstanceIdToDataIndex; // 0x18
		::System::Boolean _useUIAnimCell; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP__CTOR_OFFSET))(this);
		}

		::System::Void Set(::UnityEngine::GameObject* go, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_SET_OFFSET))(this, go, dataIndex);
		}

		::System::Void EnableUseUIAnimCell(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_ENABLEUSEUIANIMCELL_OFFSET))(this, enable);
		}

		::System::Boolean TryGetDataIndex(::UnityEngine::GameObject* go, ::System::Int32& dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_TRYGETDATAINDEX_OFFSET))(this, go, dataIndex);
		}

		::System::Void Remove(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_REMOVE_OFFSET))(this, go);
		}

		::System::Boolean TryGetUIAnimCell(::UnityEngine::GameObject* go, ::MonoUIAnimCell*& cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::MonoUIAnimCell*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_TRYGETUIANIMCELL_OFFSET))(this, go, cell);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWITEMINDEXMAP_CLEAR_OFFSET))(this);
		}
	};
}
