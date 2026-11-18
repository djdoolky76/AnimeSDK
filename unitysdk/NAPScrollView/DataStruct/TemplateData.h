#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CHANGEPARENT_OFFSET UNITYSDK_OFFSET(0x105A8810)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x105A8C50)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CREATESCROLLVIEWITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x105A8340)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CREATESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x105A7EE0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x105A8AF0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_GETTEMPLATECELLSIZE_OFFSET UNITYSDK_OFFSET(0x105A7DB0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_RECYCLE_OFFSET UNITYSDK_OFFSET(0x105A8550)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_SETTEMPLATECELL_OFFSET UNITYSDK_OFFSET(0x105A7D60)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_TEMPRECYCLE_OFFSET UNITYSDK_OFFSET(0x105A8900)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__19_0_OFFSET UNITYSDK_OFFSET(0x105A8CB0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__19_1_OFFSET UNITYSDK_OFFSET(0x105A8D20)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x105A7B50)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x105A7BD0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x105A7C60)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x105A7CE0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x105A7AD0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int TemplateData_TypeDefinitionIndex = 57027;

	class TemplateData : public ::System::Object
	{
	public:
		::System::Func_2<::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* _easyCreateFunc; // 0x10
		::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewItemWidgetController*>* _freeList; // 0x18
		::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* _createFuncByIndex; // 0x20
		::System::Func_3<::MIKOMFIBMBN, ::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* _createFunc; // 0x28
		::MoleMole::UIControlReference* _templateCell; // 0x30
		::System::Func_2<::LIBOIKJGAIH, ::MoleMole::ScrollViewItemWidgetController*>* _binderCreateFunc; // 0x38
		::LIBOIKJGAIH _binderInfo; // 0x40
		::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewItemWidgetController*>* _tempFreeList; // 0x50
		::System::Nullable_1<::UnityEngine::Vector2> _cellSize; // 0x58
		::System::Byte _padding0[0x4];
		::System::Boolean _userBinder; // 0x64
		::System::Boolean _checkUseUIAnimCell; // 0x65
		::System::Byte _padding1[0x2];
		::MIKOMFIBMBN _ctrlId; // 0x68

		::System::Void _ctor(::MoleMole::UIControlReference* templateCell, ::MIKOMFIBMBN ctrlId, ::System::Func_3<::MIKOMFIBMBN, ::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* createFunc)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*, ::MIKOMFIBMBN, ::System::Func_3<::MIKOMFIBMBN, ::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_OFFSET))(this, templateCell, ctrlId, createFunc);
		}

		::System::Void _ctor_1(::MoleMole::UIControlReference* templateCell, ::System::Func_2<::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* createFunc)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*, ::System::Func_2<::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_1_OFFSET))(this, templateCell, createFunc);
		}

		::System::Void _ctor_2(::LIBOIKJGAIH& binderInfo, ::System::Func_2<::LIBOIKJGAIH, ::MoleMole::ScrollViewItemWidgetController*>* binderCreateFunc)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::System::Func_2<::LIBOIKJGAIH, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_2_OFFSET))(this, binderInfo, binderCreateFunc);
		}

		::System::Void _ctor_3(::System::Func_2<::LIBOIKJGAIH, ::MoleMole::ScrollViewItemWidgetController*>* binderCreateFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::LIBOIKJGAIH, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_3_OFFSET))(this, binderCreateFunc);
		}

		::System::Void _ctor_4(::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* createFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CTOR_4_OFFSET))(this, createFunc);
		}

		::System::Void SetTemplateCell(::MoleMole::UIControlReference* templateCell)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_SETTEMPLATECELL_OFFSET))(this, templateCell);
		}

		::UnityEngine::Vector2 GetTemplateCellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_GETTEMPLATECELLSIZE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItem(::MonoUITableScrollV2* tableScroll)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CREATESCROLLVIEWITEM_OFFSET))(this, tableScroll);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItemByIndex(::System::Int32 index, ::MonoUITableScrollV2* tableScroll)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CREATESCROLLVIEWITEMBYINDEX_OFFSET))(this, index, tableScroll);
		}

		::System::Void Recycle(::MoleMole::ScrollViewItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_RECYCLE_OFFSET))(this, item);
		}

		::System::Void ChangeParent(::MoleMole::ScrollViewItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CHANGEPARENT_OFFSET))(this, item);
		}

		::System::Void TempRecycle(::MoleMole::ScrollViewItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_TEMPRECYCLE_OFFSET))(this, item);
		}

		::System::Void FlushAllTempRecycleItemToRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA_CLEAR_OFFSET))(this);
		}

		::MoleMole::UIControlReference* _CreateScrollViewItem_b__19_0()
		{
			return ((::MoleMole::UIControlReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__19_0_OFFSET))(this);
		}

		::MoleMole::UIControlReference* _CreateScrollViewItem_b__19_1()
		{
			return ((::MoleMole::UIControlReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__19_1_OFFSET))(this);
		}
	};
}
