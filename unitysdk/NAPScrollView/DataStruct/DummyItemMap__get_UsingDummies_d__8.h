#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewDummyItem; }
namespace NAPScrollView::DataStruct { class DummyItemMap; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18F8F6F0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_SCROLLVIEWDUMMYITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18F8FEA0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_SCROLLVIEWDUMMYITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18F8FE30)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18F8FF20)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18F8FE90)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18F8FE40)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F8F3B0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8F390)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18F8F530)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x18F8F610)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int DummyItemMap__get_UsingDummies_d__8_TypeDefinitionIndex = 63136;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class DummyItemMap__get_UsingDummies_d__8 : public ::System::Object
	{
	public:
		::MoleMole::ScrollViewDummyItem* __2__current; // 0x10
		::NAPScrollView::DataStruct::DummyItemMap* __4__this; // 0x18
		::System::Collections::Generic::IEnumerator_1<::MoleMole::ScrollViewDummyItem*>* __7__wrap1; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8___M__FINALLY2_OFFSET))(this);
		}

		::MoleMole::ScrollViewDummyItem* System_Collections_Generic_IEnumerator_MoleMole_ScrollViewDummyItem__get_Current()
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_SCROLLVIEWDUMMYITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MoleMole::ScrollViewDummyItem*>* System_Collections_Generic_IEnumerable_MoleMole_ScrollViewDummyItem__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::ScrollViewDummyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_SCROLLVIEWDUMMYITEM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__GET_USINGDUMMIES_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
