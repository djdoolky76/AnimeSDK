#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class IAJGGEMFOMB;
class NKIJFPHFJCO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLNGKAJHEEE_ADD_ONAPPENDED_OFFSET UNITYSDK_OFFSET(0x1583F6D0)
#define FLNGKAJHEEE_ADD_ONMANYREMOVED_OFFSET UNITYSDK_OFFSET(0x1583F9D0)
#define FLNGKAJHEEE_ADD_ONMOVED_OFFSET UNITYSDK_OFFSET(0x1583FAD0)
#define FLNGKAJHEEE_ADD_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1583FCD0)
#define FLNGKAJHEEE_ADD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1583F7D0)
#define FLNGKAJHEEE_ADD_ONROTATED_OFFSET UNITYSDK_OFFSET(0x1583FBD0)
#define FLNGKAJHEEE_ADD_ONSINGLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1583F8D0)
#define FLNGKAJHEEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1583FD90)
#define FLNGKAJHEEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15840780)
#define FLNGKAJHEEE_HAGLJMIHMPO_OFFSET UNITYSDK_OFFSET(0x158410F0)
#define FLNGKAJHEEE_IGHGMOADLBK_OFFSET UNITYSDK_OFFSET(0x158418B0)
#define FLNGKAJHEEE_KOEFFMGGNKB_OFFSET UNITYSDK_OFFSET(0x15840CE0)
#define FLNGKAJHEEE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158401E0)
#define FLNGKAJHEEE_LGDJFKCCCCH_OFFSET UNITYSDK_OFFSET(0x15840E60)
#define FLNGKAJHEEE_MOOPCHPLGGF_OFFSET UNITYSDK_OFFSET(0x15841250)
#define FLNGKAJHEEE_OFCHILBAJDI_OFFSET UNITYSDK_OFFSET(0x15840FD0)
#define FLNGKAJHEEE_PKCFHCHHDBK_OFFSET UNITYSDK_OFFSET(0x1583F690)
#define FLNGKAJHEEE_REMOVE_ONAPPENDED_OFFSET UNITYSDK_OFFSET(0x1583F750)
#define FLNGKAJHEEE_REMOVE_ONMANYREMOVED_OFFSET UNITYSDK_OFFSET(0x1583FA50)
#define FLNGKAJHEEE_REMOVE_ONMOVED_OFFSET UNITYSDK_OFFSET(0x1583FB50)
#define FLNGKAJHEEE_REMOVE_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1583FD30)
#define FLNGKAJHEEE_REMOVE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1583F850)
#define FLNGKAJHEEE_REMOVE_ONROTATED_OFFSET UNITYSDK_OFFSET(0x1583FC50)
#define FLNGKAJHEEE_REMOVE_ONSINGLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1583F950)

inline static constexpr unsigned int FLNGKAJHEEE_TypeDefinitionIndex = 79476;

	class FLNGKAJHEEE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IAJGGEMFOMB*>* CPDFNBLEPPM; // 0x10
		::System::Action* OnAppended; // 0x18
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x20
		::System::Action* OnRotated; // 0x28
		::System::Action* OnMoved; // 0x30
		::System::Action* OnOnlyOrderingChanged; // 0x38
		::System::Action* OnManyRemoved; // 0x40
		::System::Action* OnRemoved; // 0x48
		::System::Action* OnSingleRemoved; // 0x50
		::System::Void _ctor(::CCEIJBFAOAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>* PKCFHCHHDBK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IAJGGEMFOMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_PKCFHCHHDBK_OFFSET))(this);
		}

		::System::Void add_OnAppended(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONAPPENDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnAppended(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONAPPENDED_OFFSET))(this, a1);
		}

		::System::Void add_OnRemoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRemoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnSingleRemoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONSINGLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSingleRemoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONSINGLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnManyRemoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONMANYREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnManyRemoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONMANYREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnMoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnRotated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_ADD_ONROTATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRotated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE_REMOVE_ONROTATED_OFFSET))(this, a1);
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
