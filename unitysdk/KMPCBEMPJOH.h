#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NABFBNBJNKK;
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMPCBEMPJOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB575560)
#define KMPCBEMPJOH_GET_FOCUSENTERCOUNT_OFFSET UNITYSDK_OFFSET(0xB575370)
#define KMPCBEMPJOH_GET_INITIALFOCUSITEM_OFFSET UNITYSDK_OFFSET(0xB575550)
#define KMPCBEMPJOH_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xB575350)
#define KMPCBEMPJOH_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB575360)
#define KMPCBEMPJOH_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB575540)
#define KMPCBEMPJOH_JKHIHPBHEEP_OFFSET UNITYSDK_OFFSET(0xB575380)

	class KMPCBEMPJOH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NABFBNBJNKK*>* _Items_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::Boolean>* _IsFocused_k__BackingField; // 0x18
		::R3::ReactiveProperty_1<::System::Boolean>* _IsSelected_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::NABFBNBJNKK*>* _InitialFocusItem_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::System::Int32>* _FocusEnterCount_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH_CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsFocused()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH_GET_ISFOCUSED_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsSelected()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH_GET_ISSELECTED_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* get_FocusEnterCount()
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH_GET_FOCUSENTERCOUNT_OFFSET))(this);
		}

		::R3::Observable* JKHIHPBHEEP()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH_JKHIHPBHEEP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NABFBNBJNKK*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::NABFBNBJNKK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH_GET_ITEMS_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::NABFBNBJNKK*>* get_InitialFocusItem()
		{
			return ((::R3::ReactiveProperty_1<::NABFBNBJNKK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH_GET_INITIALFOCUSITEM_OFFSET))(this);
		}

	};
