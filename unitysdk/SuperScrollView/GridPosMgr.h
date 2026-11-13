#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector2.h"
class LPKIKHMONOF;
namespace SuperScrollView { class FlexibleGridConfData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SUPERSCROLLVIEW_GRIDPOSMGR_CLEARROWS_OFFSET UNITYSDK_OFFSET(0x1AC5C620)
#define SUPERSCROLLVIEW_GRIDPOSMGR_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5CD90)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC5CB60)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC5C960)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWINDEXBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1AC5CCA0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWITEMPOS_OFFSET UNITYSDK_OFFSET(0x1AC5CAD0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWPREFABINDEXS_OFFSET UNITYSDK_OFFSET(0x1AC5C9B0)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x1AC5CA40)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GETROWWIDTHANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC5CC00)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GET_ISINIT_OFFSET UNITYSDK_OFFSET(0x1AC5C140)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GET_MAXCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC5C120)
#define SUPERSCROLLVIEW_GRIDPOSMGR_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC5C160)
#define SUPERSCROLLVIEW_GRIDPOSMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1AC5C170)
#define SUPERSCROLLVIEW_GRIDPOSMGR_SETITEMINDEXLIST_OFFSET UNITYSDK_OFFSET(0x1AC5C210)
#define SUPERSCROLLVIEW_GRIDPOSMGR_SET_ISINIT_OFFSET UNITYSDK_OFFSET(0x1AC5C150)
#define SUPERSCROLLVIEW_GRIDPOSMGR_SET_MAXCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC5C130)
#define SUPERSCROLLVIEW_GRIDPOSMGR__ADDROW_OFFSET UNITYSDK_OFFSET(0x1AC5C6C0)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridPosMgr_TypeDefinitionIndex = 48666;

	class GridPosMgr : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridConfData*>* _PrefabConfDatas; // 0x10
		::System::Collections::Generic::List_1<::LPKIKHMONOF*>* _GridRows; // 0x18
		::System::Boolean _IsInit_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector4 _Padding; // 0x24
		::System::Int32 _MaxColumnCount_k__BackingField; // 0x34
		::System::Single _itemSpacing; // 0x38
		::System::Single _ContentWidth; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxColumnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GET_MAXCOLUMNCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxColumnCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_SET_MAXCOLUMNCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GET_ISINIT_OFFSET))(this);
		}

		::System::Void set_IsInit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_SET_ISINIT_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GET_WIDTH_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridConfData*>* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridConfData*>*, ::System::Single, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetItemIndexList(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_SETITEMINDEXLIST_OFFSET))(this, a1);
		}

		::System::Void _AddRow(::LPKIKHMONOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPKIKHMONOF*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR__ADDROW_OFFSET))(this, a1);
		}

		::System::Int32 GetRowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetRowPrefabIndexs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWPREFABINDEXS_OFFSET))(this, a1);
		}

		::System::Int32 GetRowStartIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWSTARTINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetRowItemPos(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWITEMPOS_OFFSET))(this, a1);
		}

		::System::Int32 GetRowColumnCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWCOLUMNCOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetRowWidthAndHeight(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWWIDTHANDHEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 GetRowIndexByItemIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_GETROWINDEXBYITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void ClearRows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDPOSMGR_CLEARROWS_OFFSET))(this);
		}

	};
}
