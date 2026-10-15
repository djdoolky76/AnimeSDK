#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECDNGOHAPMA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKNKCGLEMFF_BEKPFIIEKJI_OFFSET UNITYSDK_OFFSET(0xF885510)
#define DKNKCGLEMFF_CTOR_OFFSET UNITYSDK_OFFSET(0xF885720)
#define DKNKCGLEMFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF885360)
#define DKNKCGLEMFF_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0xF8853D0)
#define DKNKCGLEMFF_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xF885700)
#define DKNKCGLEMFF_KMLOFBPPIEC_OFFSET UNITYSDK_OFFSET(0xF885480)
#define DKNKCGLEMFF_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xF885710)

inline static constexpr unsigned int DKNKCGLEMFF_TypeDefinitionIndex = 72224;

	class DKNKCGLEMFF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* _Items_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNKCGLEMFF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNKCGLEMFF_DISPOSE_OFFSET))(this);
		}

		::System::Void FIPDBFMPEKH(::ECDNGOHAPMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECDNGOHAPMA*))((::PBYTE)hIl2Cpp + DKNKCGLEMFF_FIPDBFMPEKH_OFFSET))(this, a1);
		}

		::System::Boolean KMLOFBPPIEC(::ECDNGOHAPMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECDNGOHAPMA*))((::PBYTE)hIl2Cpp + DKNKCGLEMFF_KMLOFBPPIEC_OFFSET))(this, a1);
		}

		::System::Int32 BEKPFIIEKJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNKCGLEMFF_BEKPFIIEKJI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::ECDNGOHAPMA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNKCGLEMFF_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ECDNGOHAPMA*>*))((::PBYTE)hIl2Cpp + DKNKCGLEMFF_SET_ITEMS_OFFSET))(this, a1);
		}

	};
