#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightGameFormation; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define BLOHPFEHNPK_ADD_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xBA7CCB0)
#define BLOHPFEHNPK_ADD_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xBA7CBF0)
#define BLOHPFEHNPK_BFEJPECNMFJ_OFFSET UNITYSDK_OFFSET(0xBA7DC80)
#define BLOHPFEHNPK_CJNMJGBBEBJ_OFFSET UNITYSDK_OFFSET(0xBA7D360)
#define BLOHPFEHNPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7D030)
#define BLOHPFEHNPK_DDPIDCAGLJL_OFFSET UNITYSDK_OFFSET(0xBA7CE80)
#define BLOHPFEHNPK_EFJNHEPHDJM_OFFSET UNITYSDK_OFFSET(0xBA7D0C0)
#define BLOHPFEHNPK_GET__ITEMS_OFFSET UNITYSDK_OFFSET(0xBA7D020)
#define BLOHPFEHNPK_GKDLADLIMKE_OFFSET UNITYSDK_OFFSET(0xBA7E620)
#define BLOHPFEHNPK_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xBA7CD70)
#define BLOHPFEHNPK_HJLNEOKFCNG_OFFSET UNITYSDK_OFFSET(0xBA7E030)
#define BLOHPFEHNPK_HMLBHPCLHKJ_OFFSET UNITYSDK_OFFSET(0xBA7E110)
#define BLOHPFEHNPK_HPEFIADHNJK_OFFSET UNITYSDK_OFFSET(0xBA7D680)
#define BLOHPFEHNPK_IFNCPHGCFJL_OFFSET UNITYSDK_OFFSET(0xBA7D590)
#define BLOHPFEHNPK_JLGCEHDJBEE_OFFSET UNITYSDK_OFFSET(0xBA7DAE0)
#define BLOHPFEHNPK_KAMNNCGAMII_OFFSET UNITYSDK_OFFSET(0xBA7D860)
#define BLOHPFEHNPK_KBGKLDLKILA_OFFSET UNITYSDK_OFFSET(0xBA7E6A0)
#define BLOHPFEHNPK_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xBA7D4D0)
#define BLOHPFEHNPK_NCGNACLNJMF_OFFSET UNITYSDK_OFFSET(0xBA7D1B0)
#define BLOHPFEHNPK_NLGNOCMMKOC_OFFSET UNITYSDK_OFFSET(0xBA7E510)
#define BLOHPFEHNPK_PACMIIDEABC_OFFSET UNITYSDK_OFFSET(0xBA7CEF0)
#define BLOHPFEHNPK_PILPMEMFIAK_OFFSET UNITYSDK_OFFSET(0xBA7E3A0)
#define BLOHPFEHNPK_PJDPODCEDJC_OFFSET UNITYSDK_OFFSET(0xBA7CE00)
#define BLOHPFEHNPK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBA7E5A0)
#define BLOHPFEHNPK_PLLNJDKMOEF_OFFSET UNITYSDK_OFFSET(0xBA7E230)
#define BLOHPFEHNPK_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0xBA7CFB0)
#define BLOHPFEHNPK_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xBA7CD10)
#define BLOHPFEHNPK_REMOVE_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xBA7CC50)

inline static constexpr unsigned int BLOHPFEHNPK_TypeDefinitionIndex = 64684;

	class BLOHPFEHNPK : public ::System::Object
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* OnRoleCollectionChanged; // 0x10
		::System::ComponentModel::PropertyChangedEventHandler* OnRolePropertyChanged; // 0x18
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>* __Items_k__BackingField; // 0x20
		::RPG::Client::GridFightGameFormation* AGMGDGGDAAG; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_CTOR_OFFSET))(this, a1);
		}

		::System::Void add_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_ADD_ONROLEPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_REMOVE_ONROLEPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_ADD_ONROLECOLLECTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>* PJDPODCEDJC()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_PJDPODCEDJC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* DDPIDCAGLJL()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_DDPIDCAGLJL_OFFSET))(this);
		}

		::System::Void PACMIIDEABC(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_PACMIIDEABC_OFFSET))(this, a1);
		}

		::System::String* PNLLINHJDJF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_PNLLINHJDJF_OFFSET))(this);
		}

		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>* get__Items()
		{
			return ((::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_GET__ITEMS_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationRole* EFJNHEPHDJM(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_EFJNHEPHDJM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* NCGNACLNJMF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_NCGNACLNJMF_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightFormationRole* CJNMJGBBEBJ(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_CJNMJGBBEBJ_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean IFNCPHGCFJL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_IFNCPHGCFJL_OFFSET))(this, a1);
		}

		::System::Boolean HPEFIADHNJK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_HPEFIADHNJK_OFFSET))(this, a1);
		}

		::System::Void KAMNNCGAMII(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_KAMNNCGAMII_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLGCEHDJBEE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_JLGCEHDJBEE_OFFSET))(this, a1, a2);
		}

		::System::Void BFEJPECNMFJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_BFEJPECNMFJ_OFFSET))(this, a1, a2);
		}

		::System::Void HJLNEOKFCNG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_HJLNEOKFCNG_OFFSET))(this, a1, a2);
		}

		::System::Void HMLBHPCLHKJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_HMLBHPCLHKJ_OFFSET))(this, a1, a2);
		}

		::System::Void PLLNJDKMOEF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_PLLNJDKMOEF_OFFSET))(this, a1, a2);
		}

		::System::Boolean PILPMEMFIAK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_PILPMEMFIAK_OFFSET))(this, a1, a2);
		}

		::System::Void NLGNOCMMKOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_NLGNOCMMKOC_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void GKDLADLIMKE(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_GKDLADLIMKE_OFFSET))(this, a1, a2);
		}

		::System::Void KBGKLDLKILA(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK_KBGKLDLKILA_OFFSET))(this, a1, a2);
		}

	};
