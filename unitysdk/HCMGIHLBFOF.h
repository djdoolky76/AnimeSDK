#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DILIKOIGENM;
class LMJCAJNDODP;
namespace ObservableCollections { template <typename T> class ObservableList_1; }

#define HCMGIHLBFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1B5E0)
#define HCMGIHLBFOF_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x15C1B5C0)
#define HCMGIHLBFOF_GET_TOTALAMOUNT_OFFSET UNITYSDK_OFFSET(0x15C1B5A0)
#define HCMGIHLBFOF_GET_TOTALCURRENCY_OFFSET UNITYSDK_OFFSET(0x15C1B580)
#define HCMGIHLBFOF_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x15C1B5D0)
#define HCMGIHLBFOF_SET_TOTALAMOUNT_OFFSET UNITYSDK_OFFSET(0x15C1B5B0)
#define HCMGIHLBFOF_SET_TOTALCURRENCY_OFFSET UNITYSDK_OFFSET(0x15C1B590)

inline static constexpr unsigned int HCMGIHLBFOF_TypeDefinitionIndex = 79721;

	class HCMGIHLBFOF : public ::System::Object
	{
	public:
		::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>* _Items_k__BackingField; // 0x10
		::DILIKOIGENM* _TotalCurrency_k__BackingField; // 0x18
		::System::UInt32 _TotalAmount_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMGIHLBFOF_CTOR_OFFSET))(this);
		}

		::DILIKOIGENM* get_TotalCurrency()
		{
			return ((::DILIKOIGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMGIHLBFOF_GET_TOTALCURRENCY_OFFSET))(this);
		}

		::System::Void set_TotalCurrency(::DILIKOIGENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILIKOIGENM*))((::PBYTE)hIl2Cpp + HCMGIHLBFOF_SET_TOTALCURRENCY_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalAmount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMGIHLBFOF_GET_TOTALAMOUNT_OFFSET))(this);
		}

		::System::Void set_TotalAmount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCMGIHLBFOF_SET_TOTALAMOUNT_OFFSET))(this, a1);
		}

		::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>* get_Items()
		{
			return ((::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMGIHLBFOF_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>*))((::PBYTE)hIl2Cpp + HCMGIHLBFOF_SET_ITEMS_OFFSET))(this, a1);
		}

	};
