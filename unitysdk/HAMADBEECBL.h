#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAMADBEECBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B84540)
#define HAMADBEECBL_GET_ORDERIDLIST_OFFSET UNITYSDK_OFFSET(0x15B84520)
#define HAMADBEECBL_SET_ORDERIDLIST_OFFSET UNITYSDK_OFFSET(0x15B84530)

inline static constexpr unsigned int HAMADBEECBL_TypeDefinitionIndex = 79671;

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
