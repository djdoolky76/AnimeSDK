#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollMeta.h"

class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUITABLESCROLLGROUP_ADDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x18F849A0)
#define MONOUITABLESCROLLGROUP_GET_SCROLLVIEWLIST_OFFSET UNITYSDK_OFFSET(0x18F845B0)
#define MONOUITABLESCROLLGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18F847B0)
#define MONOUITABLESCROLLGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18F845C0)
#define MONOUITABLESCROLLGROUP_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18F84C60)
#define MONOUITABLESCROLLGROUP_REMOVESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x18F84B00)
#define MONOUITABLESCROLLGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18F84DF0)

inline static constexpr unsigned int MonoUITableScrollGroup_TypeDefinitionIndex = 76459;

class MonoUITableScrollGroup : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* scrollViewList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLGROUP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MonoUITableScrollV2*>* get_ScrollViewList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MonoUITableScrollV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLGROUP_GET_SCROLLVIEWLIST_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLGROUP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLGROUP_ONDISABLE_OFFSET))(this);
	}

	::System::Void AddScrollView(::MonoUITableScrollV2* scrollView)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLGROUP_ADDSCROLLVIEW_OFFSET))(this, scrollView);
	}

	::System::Void RemoveScrollView(::MonoUITableScrollV2* scrollView)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLGROUP_REMOVESCROLLVIEW_OFFSET))(this, scrollView);
	}

	::System::Void OnScroll(::NAPScrollView::DataStruct::ScrollMeta scrollMeta)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollMeta))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLGROUP_ONSCROLL_OFFSET))(this, scrollMeta);
	}
};
