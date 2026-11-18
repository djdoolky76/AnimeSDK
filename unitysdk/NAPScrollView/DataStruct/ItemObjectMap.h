#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIAnimCell;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class ScrollViewItemIndexMap; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }

#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_BINDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x18C49510)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_BINDINDEX_OFFSET UNITYSDK_OFFSET(0x18C498A0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_BINDITEM_OFFSET UNITYSDK_OFFSET(0x18C49D60)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CLEARFAKEALPHA_OFFSET UNITYSDK_OFFSET(0x18C4B160)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CLEARINDEXMAPPINGS_OFFSET UNITYSDK_OFFSET(0x18C4A700)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C4BC30)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CONTAINSDATAINDEX_OFFSET UNITYSDK_OFFSET(0x18C4A830)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_ENABLEUSEUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x18C4B0E0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_READONLYITEMMAP_OFFSET UNITYSDK_OFFSET(0x18C49440)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_VISIBLEITEMCONTROLLERCOUNT_OFFSET UNITYSDK_OFFSET(0x18C494F0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_VISIBLEITEMCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x18C494A0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_VISIBLEITEMGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x18C49450)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_MOVEINDEX_OFFSET UNITYSDK_OFFSET(0x18C49DE0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_OFFSETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x18C4B280)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_REMOVEBYITEM_OFFSET UNITYSDK_OFFSET(0x18C49F60)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_REMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x18C4A4D0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_REMOVEINVALIDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x18C4B7A0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_SETFAKEALPHA_OFFSET UNITYSDK_OFFSET(0x18C4B200)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETCONTROLLER_1_OFFSET UNITYSDK_OFFSET(0x18C4ABB0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x18C4AB20)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x18C4ADC0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18C4A8E0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x18C4AF50)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4BDE0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ItemObjectMap_TypeDefinitionIndex = 46167;

	class ItemObjectMap : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _fakeAlpha; // 0x10
		::NAPScrollView::DataStruct::ScrollViewItemIndexMap* _gameObjectToDataIndex; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* _dataIndexToGameObject; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>* _gameObjectToController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>* get_ReadOnlyItemMap()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_READONLYITEMMAP_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* get_VisibleItemGameObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_VISIBLEITEMGAMEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewItemWidgetController*>* get_VisibleItemControllers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_VISIBLEITEMCONTROLLERS_OFFSET))(this);
		}

		::System::Int32 get_VisibleItemControllerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_GET_VISIBLEITEMCONTROLLERCOUNT_OFFSET))(this);
		}

		::System::Void BindController(::MoleMole::ScrollViewItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_BINDCONTROLLER_OFFSET))(this, item);
		}

		::System::Void BindIndex(::UnityEngine::GameObject* go, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_BINDINDEX_OFFSET))(this, go, dataIndex);
		}

		::System::Void BindItem(::System::Int32 dataIndex, ::UnityEngine::GameObject* go, ::MoleMole::ScrollViewItemWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_BINDITEM_OFFSET))(this, dataIndex, go, controller);
		}

		::System::Void MoveIndex(::UnityEngine::GameObject* go, ::System::Int32 oldDataIndex, ::System::Int32 newDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_MOVEINDEX_OFFSET))(this, go, oldDataIndex, newDataIndex);
		}

		::System::Void RemoveByItem(::MoleMole::ScrollViewItemWidgetController* item, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_REMOVEBYITEM_OFFSET))(this, item, dataIndex);
		}

		::System::Void RemoveIndex(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_REMOVEINDEX_OFFSET))(this, dataIndex);
		}

		::System::Void ClearIndexMappings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CLEARINDEXMAPPINGS_OFFSET))(this);
		}

		::System::Boolean ContainsDataIndex(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CONTAINSDATAINDEX_OFFSET))(this, dataIndex);
		}

		::System::Boolean TryGetGameObject(::System::Int32 dataIndex, ::UnityEngine::GameObject*& go)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETGAMEOBJECT_OFFSET))(this, dataIndex, go);
		}

		::System::Boolean TryGetController(::System::Int32 dataIndex, ::MoleMole::ScrollViewItemWidgetController*& item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETCONTROLLER_OFFSET))(this, dataIndex, item);
		}

		::System::Boolean TryGetController_1(::UnityEngine::GameObject* go, ::MoleMole::ScrollViewItemWidgetController*& item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETCONTROLLER_1_OFFSET))(this, go, item);
		}

		::System::Boolean TryGetDataIndex(::UnityEngine::GameObject* go, ::System::Int32& dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETDATAINDEX_OFFSET))(this, go, dataIndex);
		}

		::System::Boolean TryGetUIAnimCell(::UnityEngine::GameObject* go, ::MonoUIAnimCell*& cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::MonoUIAnimCell*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_TRYGETUIANIMCELL_OFFSET))(this, go, cell);
		}

		::System::Void EnableUseUIAnimCell(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_ENABLEUSEUIANIMCELL_OFFSET))(this, enable);
		}

		::System::Void ClearFakeAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CLEARFAKEALPHA_OFFSET))(this);
		}

		::System::Void SetFakeAlpha(::System::Int32 index, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_SETFAKEALPHA_OFFSET))(this, index, alpha);
		}

		::System::Void OffsetDataIndex(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_OFFSETDATAINDEX_OFFSET))(this, offset);
		}

		::System::Void RemoveInvalidDataIndex(::System::Int32 minInclusive, ::System::Int32 maxExclusive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_REMOVEINVALIDDATAINDEX_OFFSET))(this, minInclusive, maxExclusive);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMOBJECTMAP_CLEAR_OFFSET))(this);
		}
	};
}
