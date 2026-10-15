#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class IAJGGEMFOMB;
class NKIJFPHFJCO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLNGKAJHEEE_ADD_ONAPPENDED_OFFSET UNITYSDK_OFFSET(0x15833A10)
#define FLNGKAJHEEE_ADD_ONMANYREMOVED_OFFSET UNITYSDK_OFFSET(0x15833D10)
#define FLNGKAJHEEE_ADD_ONMOVED_OFFSET UNITYSDK_OFFSET(0x15833E10)
#define FLNGKAJHEEE_ADD_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x15834010)
#define FLNGKAJHEEE_ADD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x15833B10)
#define FLNGKAJHEEE_ADD_ONROTATED_OFFSET UNITYSDK_OFFSET(0x15833F10)
#define FLNGKAJHEEE_ADD_ONSINGLEREMOVED_OFFSET UNITYSDK_OFFSET(0x15833C10)
#define FLNGKAJHEEE_CTOR_OFFSET UNITYSDK_OFFSET(0x158340D0)
#define FLNGKAJHEEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15834AC0)
#define FLNGKAJHEEE_HAGLJMIHMPO_OFFSET UNITYSDK_OFFSET(0x15835430)
#define FLNGKAJHEEE_IGHGMOADLBK_OFFSET UNITYSDK_OFFSET(0x15835BF0)
#define FLNGKAJHEEE_KOEFFMGGNKB_OFFSET UNITYSDK_OFFSET(0x15835020)
#define FLNGKAJHEEE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15834520)
#define FLNGKAJHEEE_LGDJFKCCCCH_OFFSET UNITYSDK_OFFSET(0x158351A0)
#define FLNGKAJHEEE_MOOPCHPLGGF_OFFSET UNITYSDK_OFFSET(0x15835590)
#define FLNGKAJHEEE_OFCHILBAJDI_OFFSET UNITYSDK_OFFSET(0x15835310)
#define FLNGKAJHEEE_PKCFHCHHDBK_OFFSET UNITYSDK_OFFSET(0x158339D0)
#define FLNGKAJHEEE_REMOVE_ONAPPENDED_OFFSET UNITYSDK_OFFSET(0x15833A90)
#define FLNGKAJHEEE_REMOVE_ONMANYREMOVED_OFFSET UNITYSDK_OFFSET(0x15833D90)
#define FLNGKAJHEEE_REMOVE_ONMOVED_OFFSET UNITYSDK_OFFSET(0x15833E90)
#define FLNGKAJHEEE_REMOVE_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x15834070)
#define FLNGKAJHEEE_REMOVE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x15833B90)
#define FLNGKAJHEEE_REMOVE_ONROTATED_OFFSET UNITYSDK_OFFSET(0x15833F90)
#define FLNGKAJHEEE_REMOVE_ONSINGLEREMOVED_OFFSET UNITYSDK_OFFSET(0x15833C90)

inline static constexpr unsigned int FLNGKAJHEEE_TypeDefinitionIndex = 79475;

	class FLNGKAJHEEE : public ::System::Object
	{
	public:
		::System::Action_1<::IAJGGEMFOMB*>* OnRotated; // 0x10
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x18
		::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>*>* OnManyRemoved; // 0x20
		::System::Collections::Generic::List_1<::IAJGGEMFOMB*>* CPDFNBLEPPM; // 0x28
		::System::Action_1<::IAJGGEMFOMB*>* OnAppended; // 0x30
		::System::Action* OnOnlyOrderingChanged; // 0x38
		::System::Action_1<::IAJGGEMFOMB*>* OnSingleRemoved; // 0x40
		::System::Action_1<::IAJGGEMFOMB*>* OnMoved; // 0x48
		::System::Action_1<::IAJGGEMFOMB*>* OnRemoved; // 0x50
		::System::Void _ctor(::CCEIJBFAOAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>* PKCFHCHHDBK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_PKCFHCHHDBK_OFFSET))(this);
		}

		::System::Void add_OnAppended(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONAPPENDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnAppended(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONAPPENDED_OFFSET))(this, a1);
		}

		::System::Void add_OnRemoved(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRemoved(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnSingleRemoved(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONSINGLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSingleRemoved(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONSINGLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnManyRemoved(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONMANYREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnManyRemoved(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONMANYREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnMoved(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMoved(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnRotated(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONROTATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRotated(::System::Action_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONROTATED_OFFSET))(this, a1);
		}

		::System::Void add_OnOnlyOrderingChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnOnlyOrderingChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_DISPOSE_OFFSET))(this);
		}

		::System::Void KOEFFMGGNKB(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_KOEFFMGGNKB_OFFSET))(this, a1);
		}

		::System::Void LGDJFKCCCCH(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_LGDJFKCCCCH_OFFSET))(this, a1);
		}

		::System::Void OFCHILBAJDI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_OFCHILBAJDI_OFFSET))(this, a1);
		}

		::System::Void HAGLJMIHMPO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_HAGLJMIHMPO_OFFSET))(this, a1);
		}

		::System::Void MOOPCHPLGGF(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_MOOPCHPLGGF_OFFSET))(this, a1);
		}

		::System::Void IGHGMOADLBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_IGHGMOADLBK_OFFSET))(this);
		}

	};
