#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAMADBEECBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B8FF70)
#define HAMADBEECBL_GET_ORDERIDLIST_OFFSET UNITYSDK_OFFSET(0x15B8FF50)
#define HAMADBEECBL_SET_ORDERIDLIST_OFFSET UNITYSDK_OFFSET(0x15B8FF60)

inline static constexpr unsigned int HAMADBEECBL_TypeDefinitionIndex = 79672;

	class HAMADBEECBL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OrderIDList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMADBEECBL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_OrderIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMADBEECBL_GET_ORDERIDLIST_OFFSET))(this);
		}

		::System::Void set_OrderIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HAMADBEECBL_SET_ORDERIDLIST_OFFSET))(this, a1);
		}

	};
