#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/DummyEnd.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/CreateDummyParams.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ScrollViewDummyItem; }
namespace NAPScrollView::DataStruct { class DummyItemMap; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x12FD2D90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x12FD1CE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CREATEDUMMY_1_OFFSET UNITYSDK_OFFSET(0x12FD1F70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0x12FD1EF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_DESTROYALLDUMMIESFORSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x12FD2C10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_DESTROYDUMMYPOOL_OFFSET UNITYSDK_OFFSET(0x12FD2A90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12FD1E90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GET_POOLCOUNT_OFFSET UNITYSDK_OFFSET(0x12FD1BA0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GET_USINGCOUNT_OFFSET UNITYSDK_OFFSET(0x12FD1B30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GET_USINGDUMMIES_OFFSET UNITYSDK_OFFSET(0x12FD1BD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_ISENDFULL_OFFSET UNITYSDK_OFFSET(0x12FD1C30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_MAXDATAINDEXINCLUDEDUMMY_OFFSET UNITYSDK_OFFSET(0x12FD34E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_MINDATAINDEXINCLUDEDUMMY_OFFSET UNITYSDK_OFFSET(0x12FD3120)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_OFFSETDUMMYINDICES_OFFSET UNITYSDK_OFFSET(0x12FD2E50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_PREPAREDUMMYFORPOOL_OFFSET UNITYSDK_OFFSET(0x12FD38A0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_RECYCLEALLDUMMIES_OFFSET UNITYSDK_OFFSET(0x12FD29F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_RECYCLEDUMMY_1_OFFSET UNITYSDK_OFFSET(0x12FD2940)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_RECYCLEDUMMY_OFFSET UNITYSDK_OFFSET(0x12FD2890)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_REPLACEDUMMYINDEX_OFFSET UNITYSDK_OFFSET(0x12FD2DE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_SHIFTDUMMIESBY_OFFSET UNITYSDK_OFFSET(0x12FD2EB0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_TRYGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12FD1E20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_TRYGET_OFFSET UNITYSDK_OFFSET(0x12FD1D80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD1B20)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleDummyService_TypeDefinitionIndex = 84250;

	class NotSimpleDummyService : public ::System::Object
	{
	public:
		// static const ::System::Int32 DummyLimitPerEnd = 0x3; // 0x0
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10
		::NAPScrollView::DataStruct::DummyItemMap* _dummyItems; // 0x18

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services, ::NAPScrollView::DataStruct::DummyItemMap* dummyItems)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*, ::NAPScrollView::DataStruct::DummyItemMap*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE__CTOR_OFFSET))(this, services, dummyItems);
		}

		::System::Int32 get_UsingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GET_USINGCOUNT_OFFSET))(this);
		}

		::System::Int32 get_PoolCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GET_POOLCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewDummyItem*>* get_UsingDummies()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewDummyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GET_USINGDUMMIES_OFFSET))(this);
		}

		::System::Boolean IsEndFull(::NAPScrollView::DataStruct::DummyEnd end)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::DummyEnd))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_ISENDFULL_OFFSET))(this, end);
		}

		::System::Boolean Contains(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CONTAINS_OFFSET))(this, dataIndex);
		}

		::System::Boolean TryGet(::System::Int32 dataIndex, ::MoleMole::ScrollViewDummyItem*& dummy)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewDummyItem*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_TRYGET_OFFSET))(this, dataIndex, dummy);
		}

		::System::Boolean TryGetDataIndex(::UnityEngine::GameObject* go, ::System::Int32& dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_TRYGETDATAINDEX_OFFSET))(this, go, dataIndex);
		}

		::UnityEngine::RectTransform* GetTransform(::System::Int32 dataIndex)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_GETTRANSFORM_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewDummyItem* CreateDummy(::NAPScrollView::DataStruct::CreateDummyParams createParams)
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID, ::NAPScrollView::DataStruct::CreateDummyParams))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CREATEDUMMY_OFFSET))(this, createParams);
		}

		::MoleMole::ScrollViewDummyItem* CreateDummy_1(::NAPScrollView::DataStruct::CreateDummyParams createParams, ::UnityEngine::Vector2& shiftedAwaySize)
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID, ::NAPScrollView::DataStruct::CreateDummyParams, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CREATEDUMMY_1_OFFSET))(this, createParams, shiftedAwaySize);
		}

		::System::Boolean RecycleDummy(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_RECYCLEDUMMY_OFFSET))(this, dataIndex);
		}

		::System::Void RecycleDummy_1(::MoleMole::ScrollViewDummyItem* dummy)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_RECYCLEDUMMY_1_OFFSET))(this, dummy);
		}

		::System::Void RecycleAllDummies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_RECYCLEALLDUMMIES_OFFSET))(this);
		}

		::System::Void DestroyDummyPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_DESTROYDUMMYPOOL_OFFSET))(this);
		}

		::System::Void DestroyAllDummiesForShutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_DESTROYALLDUMMIESFORSHUTDOWN_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_CLEAR_OFFSET))(this);
		}

		::System::Boolean ReplaceDummyIndex(::System::Int32 oldDataIndex, ::System::Int32 newDataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_REPLACEDUMMYINDEX_OFFSET))(this, oldDataIndex, newDataIndex);
		}

		::System::Void OffsetDummyIndices(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_OFFSETDUMMYINDICES_OFFSET))(this, offset);
		}

		::System::Void ShiftDummiesBy(::System::Int32 delta, ::System::Int32 rawDataCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_SHIFTDUMMIESBY_OFFSET))(this, delta, rawDataCount);
		}

		::System::Int32 MinDataIndexIncludeDummy(::System::Int32 fallback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_MINDATAINDEXINCLUDEDUMMY_OFFSET))(this, fallback);
		}

		::System::Int32 MaxDataIndexIncludeDummy(::System::Int32 fallback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_MAXDATAINDEXINCLUDEDUMMY_OFFSET))(this, fallback);
		}

		::System::Void PrepareDummyForPool(::MoleMole::ScrollViewDummyItem* dummy)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDUMMYSERVICE_PREPAREDUMMYFORPOOL_OFFSET))(this, dummy);
		}
	};
}
