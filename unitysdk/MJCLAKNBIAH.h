#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHHPHPGCODJ;
class KGBHKDBKNLG;
class PGKLMPIIFFP;
class PMCOCABFEPG;
namespace ObservableCollections { template <typename T> class ObservableList_1; }

#define MJCLAKNBIAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9686F0)
#define MJCLAKNBIAH_GET_ATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0xB968690)
#define MJCLAKNBIAH_GET_ATTRIBUTERADAR_OFFSET UNITYSDK_OFFSET(0xB968670)
#define MJCLAKNBIAH_GET_INTEGRATIONBAR_OFFSET UNITYSDK_OFFSET(0xB9686D0)
#define MJCLAKNBIAH_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xB9686B0)
#define MJCLAKNBIAH_SET_ATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0xB9686A0)
#define MJCLAKNBIAH_SET_ATTRIBUTERADAR_OFFSET UNITYSDK_OFFSET(0xB968680)
#define MJCLAKNBIAH_SET_INTEGRATIONBAR_OFFSET UNITYSDK_OFFSET(0xB9686E0)
#define MJCLAKNBIAH_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xB9686C0)

	class MJCLAKNBIAH : public ::System::Object
	{
	public:
		::PMCOCABFEPG* _AttributeRadar_k__BackingField; // 0x10
		::PGKLMPIIFFP* _IntegrationBar_k__BackingField; // 0x18
		::ObservableCollections::ObservableList_1<::BHHPHPGCODJ*>* _AttributeLevels_k__BackingField; // 0x20
		::ObservableCollections::ObservableList_1<::KGBHKDBKNLG*>* _Traits_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_CTOR_OFFSET))(this);
		}

		::PMCOCABFEPG* get_AttributeRadar()
		{
			return ((::PMCOCABFEPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_GET_ATTRIBUTERADAR_OFFSET))(this);
		}

		::System::Void set_AttributeRadar(::PMCOCABFEPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMCOCABFEPG*))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_SET_ATTRIBUTERADAR_OFFSET))(this, a1);
		}

		::ObservableCollections::ObservableList_1<::BHHPHPGCODJ*>* get_AttributeLevels()
		{
			return ((::ObservableCollections::ObservableList_1<::BHHPHPGCODJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_GET_ATTRIBUTELEVELS_OFFSET))(this);
		}

		::System::Void set_AttributeLevels(::ObservableCollections::ObservableList_1<::BHHPHPGCODJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::BHHPHPGCODJ*>*))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_SET_ATTRIBUTELEVELS_OFFSET))(this, a1);
		}

		::ObservableCollections::ObservableList_1<::KGBHKDBKNLG*>* get_Traits()
		{
			return ((::ObservableCollections::ObservableList_1<::KGBHKDBKNLG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::ObservableCollections::ObservableList_1<::KGBHKDBKNLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::KGBHKDBKNLG*>*))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_SET_TRAITS_OFFSET))(this, a1);
		}

		::PGKLMPIIFFP* get_IntegrationBar()
		{
			return ((::PGKLMPIIFFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_GET_INTEGRATIONBAR_OFFSET))(this);
		}

		::System::Void set_IntegrationBar(::PGKLMPIIFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGKLMPIIFFP*))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_SET_INTEGRATIONBAR_OFFSET))(this, a1);
		}

	};
