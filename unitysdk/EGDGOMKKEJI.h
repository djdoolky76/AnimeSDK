#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class BPHJOOGJPKD;
class HBAHBGCOOML;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGDGOMKKEJI_AKPBOOEELBC_OFFSET UNITYSDK_OFFSET(0x1C5FE190)
#define EGDGOMKKEJI_BHEMCMFHINL_OFFSET UNITYSDK_OFFSET(0x1C5FDF20)
#define EGDGOMKKEJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5FE5D0)
#define EGDGOMKKEJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DBAD0)
#define EGDGOMKKEJI_EFKCHBJPNCE_OFFSET UNITYSDK_OFFSET(0x1C5FCCC0)
#define EGDGOMKKEJI_ENNKDANHLCH_OFFSET UNITYSDK_OFFSET(0x1C5FDAC0)
#define EGDGOMKKEJI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C5E8D20)
#define EGDGOMKKEJI_GET_ABILITYTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1C5FC5F0)
#define EGDGOMKKEJI_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C5FC5C0)
#define EGDGOMKKEJI_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1C5FC5D0)
#define EGDGOMKKEJI_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C5FC5E0)
#define EGDGOMKKEJI_HFDHNPKKBBJ_OFFSET UNITYSDK_OFFSET(0x1C5FDE00)
#define EGDGOMKKEJI_KKILBCEMLOI_OFFSET UNITYSDK_OFFSET(0x1C5FCFD0)
#define EGDGOMKKEJI_LFOCGKOJIGB_OFFSET UNITYSDK_OFFSET(0x1C5FC810)
#define EGDGOMKKEJI_LGICBGOHKNE_OFFSET UNITYSDK_OFFSET(0x1C5FDE90)
#define EGDGOMKKEJI_LOHICDMHPBJ_OFFSET UNITYSDK_OFFSET(0x1C5FD820)
#define EGDGOMKKEJI_MAMCGFMOFIK_OFFSET UNITYSDK_OFFSET(0x1C5FD470)
#define EGDGOMKKEJI_NAFJICONCNI_OFFSET UNITYSDK_OFFSET(0x1C5EDD20)
#define EGDGOMKKEJI_NHIILBAILML_OFFSET UNITYSDK_OFFSET(0x1C5FDD70)
#define EGDGOMKKEJI_PHCOMCAIDOL_OFFSET UNITYSDK_OFFSET(0x1C5FD500)
#define EGDGOMKKEJI_PMNNDDAPAPB_OFFSET UNITYSDK_OFFSET(0x1C5FC610)
#define EGDGOMKKEJI_SET_ABILITYTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1C5FC600)

	class EGDGOMKKEJI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>* ADGCHLFGGGB; // 0x10
		::IJFIHJJPHNA* _AbilityTargetEntity_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x20
		::BPHJOOGJPKD* _Instance_k__BackingField; // 0x28
		::IJFIHJJPHNA* _Owner_k__BackingField; // 0x30
		static ::RPG::GameCore::StringHash* StaticGet_MDOAJGBBOOI()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C50);
		}

		static ::RPG::GameCore::StringHash* StaticGet_AEMNJPLONOB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C54);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GOFPMAECICK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C58);
		}

		static ::RPG::GameCore::StringHash* StaticGet_ONHCEJLJHAC()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C5C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_DOLMNCLFKIE()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C60);
		}

		static ::RPG::GameCore::StringHash* StaticGet_LBNKCOEFJKG()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C64);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GMBCFNFKDLK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C68);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KBHKLKIMAOH()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C6C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_PMHDIGAKEEN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C70);
		}

		static ::RPG::GameCore::StringHash* StaticGet_BOLHCIBPOMG()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EGDGOMKKEJI")->GetStaticField(0x13C74);
		}

		::System::Void _ctor(::BPHJOOGJPKD* a1, ::IJFIHJJPHNA* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BPHJOOGJPKD*, ::IJFIHJJPHNA*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDGOMKKEJI_CCTOR_OFFSET))();
		}

		::BPHJOOGJPKD* get_Instance()
		{
			return ((::BPHJOOGJPKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_GET_INSTANCE_OFFSET))(this);
		}

		::IJFIHJJPHNA* get_Owner()
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_GET_OWNER_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_GET_PARAMLIST_OFFSET))(this);
		}

		::IJFIHJJPHNA* get_AbilityTargetEntity()
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_GET_ABILITYTARGETENTITY_OFFSET))(this);
		}

		::System::Void set_AbilityTargetEntity(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_SET_ABILITYTARGETENTITY_OFFSET))(this, a1);
		}

		::System::Void PMNNDDAPAPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_PMNNDDAPAPB_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LFOCGKOJIGB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_LFOCGKOJIGB_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EFKCHBJPNCE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_EFKCHBJPNCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KKILBCEMLOI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_KKILBCEMLOI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MAMCGFMOFIK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_MAMCGFMOFIK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PHCOMCAIDOL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_PHCOMCAIDOL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LOHICDMHPBJ()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_LOHICDMHPBJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ENNKDANHLCH()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_ENNKDANHLCH_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NHIILBAILML()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_NHIILBAILML_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint HFDHNPKKBBJ()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_HFDHNPKKBBJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LGICBGOHKNE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_LGICBGOHKNE_OFFSET))(this);
		}

		::System::Boolean BHEMCMFHINL(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_BHEMCMFHINL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint AKPBOOEELBC(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_AKPBOOEELBC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_EVALUATE_OFFSET))(this, a1);
		}

		::HBAHBGCOOML* NAFJICONCNI()
		{
			return ((::HBAHBGCOOML*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDGOMKKEJI_NAFJICONCNI_OFFSET))(this);
		}

	};
