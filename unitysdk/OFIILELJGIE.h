#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKGAOHNOIA;
class DBPFECFIKOM;
class DHHMOPOLKBF;
class FCNLPLHOACB;
class JEBPFBNCALB;
class PAHNGJAHJKI;
class POIONNNNCMJ;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OFIILELJGIE_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1C578760)
#define OFIILELJGIE_BKJNMLNGLAH_OFFSET UNITYSDK_OFFSET(0x1C579290)
#define OFIILELJGIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5794B0)
#define OFIILELJGIE_DMILLHBGPDM_OFFSET UNITYSDK_OFFSET(0x1C578FE0)
#define OFIILELJGIE_FKOBEAMLGJI_OFFSET UNITYSDK_OFFSET(0x1C578620)
#define OFIILELJGIE_GEKKKHNBNJL_OFFSET UNITYSDK_OFFSET(0x1C579400)
#define OFIILELJGIE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C5786C0)
#define OFIILELJGIE_GET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x1C578740)
#define OFIILELJGIE_GET_OBSERVABLEISALLREQUIREDMET_OFFSET UNITYSDK_OFFSET(0x1C578410)
#define OFIILELJGIE_GET_OPTIONALCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578700)
#define OFIILELJGIE_GET_REQUIREDCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578720)
#define OFIILELJGIE_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1C5786E0)
#define OFIILELJGIE_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1C5786B0)
#define OFIILELJGIE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C578820)
#define OFIILELJGIE_NJLLIFIJEJD_OFFSET UNITYSDK_OFFSET(0x1C578430)
#define OFIILELJGIE_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1C5787C0)
#define OFIILELJGIE_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C5786D0)
#define OFIILELJGIE_SET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x1C578750)
#define OFIILELJGIE_SET_OBSERVABLEISALLREQUIREDMET_OFFSET UNITYSDK_OFFSET(0x1C578420)
#define OFIILELJGIE_SET_OPTIONALCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578710)
#define OFIILELJGIE_SET_REQUIREDCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578730)
#define OFIILELJGIE_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1C5786F0)

inline static constexpr unsigned int OFIILELJGIE_TypeDefinitionIndex = 41824;

	class OFIILELJGIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>* _RequiredConstraints_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>* _OptionalConstraints_k__BackingField; // 0x18
		::DBPFECFIKOM* _Traits_k__BackingField; // 0x20
		::FCNLPLHOACB* _Attributes_k__BackingField; // 0x28
		::AEKGAOHNOIA* _Validity_k__BackingField; // 0x30
		::R3::Observable_1<::System::Boolean>* _ObservableIsAllRequiredMet_k__BackingField; // 0x38
		::System::Action* OnMaybeChanged; // 0x40
		::DHHMOPOLKBF* _Integration_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* get_ObservableIsAllRequiredMet()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GET_OBSERVABLEISALLREQUIREDMET_OFFSET))(this);
		}

		::System::Void set_ObservableIsAllRequiredMet(::R3::Observable_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Observable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OFIILELJGIE_SET_OBSERVABLEISALLREQUIREDMET_OFFSET))(this, a1);
		}

		::System::Boolean NJLLIFIJEJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_NJLLIFIJEJD_OFFSET))(this);
		}

		::AEKGAOHNOIA* get_Validity()
		{
			return ((::AEKGAOHNOIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GET_VALIDITY_OFFSET))(this);
		}

		::FCNLPLHOACB* get_Attributes()
		{
			return ((::FCNLPLHOACB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::FCNLPLHOACB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCNLPLHOACB*))((::PBYTE)hIl2Cpp + OFIILELJGIE_SET_ATTRIBUTES_OFFSET))(this, a1);
		}

		::DBPFECFIKOM* get_Traits()
		{
			return ((::DBPFECFIKOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::DBPFECFIKOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBPFECFIKOM*))((::PBYTE)hIl2Cpp + OFIILELJGIE_SET_TRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>* get_OptionalConstraints()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GET_OPTIONALCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_OptionalConstraints(::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>*))((::PBYTE)hIl2Cpp + OFIILELJGIE_SET_OPTIONALCONSTRAINTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>* get_RequiredConstraints()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GET_REQUIREDCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_RequiredConstraints(::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>*))((::PBYTE)hIl2Cpp + OFIILELJGIE_SET_REQUIREDCONSTRAINTS_OFFSET))(this, a1);
		}

		::DHHMOPOLKBF* get_Integration()
		{
			return ((::DHHMOPOLKBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GET_INTEGRATION_OFFSET))(this);
		}

		::System::Void set_Integration(::DHHMOPOLKBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHHMOPOLKBF*))((::PBYTE)hIl2Cpp + OFIILELJGIE_SET_INTEGRATION_OFFSET))(this, a1);
		}

		::System::Void add_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OFIILELJGIE_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OFIILELJGIE_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::PAHNGJAHJKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAHNGJAHJKI*))((::PBYTE)hIl2Cpp + OFIILELJGIE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>* DMILLHBGPDM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_DMILLHBGPDM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>* FKOBEAMLGJI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_FKOBEAMLGJI_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>* GEKKKHNBNJL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_GEKKKHNBNJL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>* BKJNMLNGLAH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::JEBPFBNCALB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE_BKJNMLNGLAH_OFFSET))(this);
		}

	};
