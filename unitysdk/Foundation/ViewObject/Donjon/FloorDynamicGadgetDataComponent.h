#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_GET_LIMITEDVOIDLIST_OFFSET UNITYSDK_OFFSET(0x156DFE70)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_GET_LIMITEDZKREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x156DFE90)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_GET_MAXNUM_OFFSET UNITYSDK_OFFSET(0x156DFE50)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x156DFEB0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_SET_LIMITEDVOIDLIST_OFFSET UNITYSDK_OFFSET(0x156DFE80)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_SET_LIMITEDZKREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x156DFEA0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_SET_MAXNUM_OFFSET UNITYSDK_OFFSET(0x156DFE60)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x156DFF00)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorDynamicGadgetDataComponent_TypeDefinitionIndex = 82152;

	class FloorDynamicGadgetDataComponent
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _LimitedVOIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _LimitedZKRewardIDList_k__BackingField; // 0x28
		::System::Int32 _MaxNum_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_GET_MAXNUM_OFFSET))(this);
		}

		::System::Void set_MaxNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_SET_MAXNUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_LimitedVOIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_GET_LIMITEDVOIDLIST_OFFSET))(this);
		}

		::System::Void set_LimitedVOIDList(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_SET_LIMITEDVOIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_LimitedZKRewardIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_GET_LIMITEDZKREWARDIDLIST_OFFSET))(this);
		}

		::System::Void set_LimitedZKRewardIDList(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_SET_LIMITEDZKREWARDIDLIST_OFFSET))(this, value);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORDYNAMICGADGETDATACOMPONENT_ONRECYCLE_OFFSET))(this);
		}
	};
}
