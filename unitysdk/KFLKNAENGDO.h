#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/System/Object.h"
class KFLKNAENGDO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFLKNAENGDO_AMCAJNIJFED_OFFSET UNITYSDK_OFFSET(0x17702A20)
#define KFLKNAENGDO_BCMPLKMFKFN_OFFSET UNITYSDK_OFFSET(0x17701D50)
#define KFLKNAENGDO_BOIHMBFKEIO_OFFSET UNITYSDK_OFFSET(0x177027E0)
#define KFLKNAENGDO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17701B90)
#define KFLKNAENGDO_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x17701C90)
#define KFLKNAENGDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x177030C0)
#define KFLKNAENGDO_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0x17701C50)
#define KFLKNAENGDO_CIDFJOKIJOC_OFFSET UNITYSDK_OFFSET(0x17702840)
#define KFLKNAENGDO_CTOR_OFFSET UNITYSDK_OFFSET(0x17701BF0)
#define KFLKNAENGDO_DIHGGIAGHDP_OFFSET UNITYSDK_OFFSET(0x17702C10)
#define KFLKNAENGDO_DKFJGFCNLJO_OFFSET UNITYSDK_OFFSET(0x177022D0)
#define KFLKNAENGDO_EOLLHFJOKME_OFFSET UNITYSDK_OFFSET(0x17702110)
#define KFLKNAENGDO_GET_ISBOSSPANEL_OFFSET UNITYSDK_OFFSET(0x177030A0)
#define KFLKNAENGDO_GIJAMDCBEJM_OFFSET UNITYSDK_OFFSET(0x177026D0)
#define KFLKNAENGDO_HLIMPJACJAB_OFFSET UNITYSDK_OFFSET(0x17702920)
#define KFLKNAENGDO_HMDHPCNEJEA_OFFSET UNITYSDK_OFFSET(0x17701C00)
#define KFLKNAENGDO_IHHGGKNKBPJ_OFFSET UNITYSDK_OFFSET(0x177024E0)
#define KFLKNAENGDO_JHPEMIJGELL_OFFSET UNITYSDK_OFFSET(0x177028A0)
#define KFLKNAENGDO_LAOLOGLMGHC_OFFSET UNITYSDK_OFFSET(0x17702B50)
#define KFLKNAENGDO_LCCJMCOICOA_OFFSET UNITYSDK_OFFSET(0x177020B0)
#define KFLKNAENGDO_LNDLIGOOJAN_OFFSET UNITYSDK_OFFSET(0x177021C0)
#define KFLKNAENGDO_MDMKHFEDNGE_OFFSET UNITYSDK_OFFSET(0x17702550)
#define KFLKNAENGDO_MLFPFCGKLGK_OFFSET UNITYSDK_OFFSET(0x17702410)
#define KFLKNAENGDO_MMFIIDHFJAO_OFFSET UNITYSDK_OFFSET(0x17701F30)
#define KFLKNAENGDO_MONAKKCBAHM_OFFSET UNITYSDK_OFFSET(0x17701E30)
#define KFLKNAENGDO_MPALCJACMDJ_OFFSET UNITYSDK_OFFSET(0x177025C0)
#define KFLKNAENGDO_NADEGEHEGBH_OFFSET UNITYSDK_OFFSET(0x17702EA0)
#define KFLKNAENGDO_NBKNAPLPACI_OFFSET UNITYSDK_OFFSET(0x17702030)
#define KFLKNAENGDO_NDLJKMAIEDI_OFFSET UNITYSDK_OFFSET(0x17701ED0)
#define KFLKNAENGDO_NDOEOMLKGAN_OFFSET UNITYSDK_OFFSET(0x17702F30)
#define KFLKNAENGDO_NJKPFDOIKLJ_OFFSET UNITYSDK_OFFSET(0x17701D00)
#define KFLKNAENGDO_PFFLDBAIJJK_OFFSET UNITYSDK_OFFSET(0x17701FB0)
#define KFLKNAENGDO_PMOBKGBBLIL_OFFSET UNITYSDK_OFFSET(0x177029A0)
#define KFLKNAENGDO_SET_ISBOSSPANEL_OFFSET UNITYSDK_OFFSET(0x177030B0)

inline static constexpr unsigned int KFLKNAENGDO_TypeDefinitionIndex = 73790;

	class KFLKNAENGDO : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0x20
		::System::Boolean _IsBossPanel_k__BackingField; // 0x28
		static ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterWeaknessSpecialType>** StaticGet_AJNDMKNCKHE()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::MonsterWeaknessSpecialType>**)UnitySDK::FromName("", "KFLKNAENGDO")->GetStaticField(0x46AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLKNAENGDO_CCTOR_OFFSET))();
		}

		static ::KFLKNAENGDO* BPLPBPMEODA(::RPG::GameCore::LevelUIComponent* a1)
		{
			return ((::KFLKNAENGDO*(*)(::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + KFLKNAENGDO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HMDHPCNEJEA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFLKNAENGDO_HMDHPCNEJEA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_CGDNPIJGNNK_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFLKNAENGDO_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void NJKPFDOIKLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_NJKPFDOIKLJ_OFFSET))(this);
		}

		::System::Boolean BCMPLKMFKFN(::RPG::GameCore::AliveStateMask a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + KFLKNAENGDO_BCMPLKMFKFN_OFFSET))(this, a1);
		}

		::System::Boolean MONAKKCBAHM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFLKNAENGDO_MONAKKCBAHM_OFFSET))(this, a1);
		}

		::System::Boolean NDLJKMAIEDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_NDLJKMAIEDI_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType MMFIIDHFJAO()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_MMFIIDHFJAO_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType PFFLDBAIJJK()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_PFFLDBAIJJK_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType NBKNAPLPACI()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_NBKNAPLPACI_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType LCCJMCOICOA()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_LCCJMCOICOA_OFFSET))(this);
		}

		::System::Void EOLLHFJOKME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_EOLLHFJOKME_OFFSET))(this);
		}

		::RPG::GameCore::WeaknessState LNDLIGOOJAN()
		{
			return ((::RPG::GameCore::WeaknessState(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_LNDLIGOOJAN_OFFSET))(this);
		}

		::RPG::GameCore::WeaknessState DKFJGFCNLJO(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::RPG::GameCore::WeaknessState(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KFLKNAENGDO_DKFJGFCNLJO_OFFSET))(this, a1);
		}

		::System::Boolean MLFPFCGKLGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_MLFPFCGKLGK_OFFSET))(this);
		}

		::System::Boolean IHHGGKNKBPJ(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KFLKNAENGDO_IHHGGKNKBPJ_OFFSET))(this, a1);
		}

		::System::Boolean MDMKHFEDNGE(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KFLKNAENGDO_MDMKHFEDNGE_OFFSET))(this, a1);
		}

		::System::Boolean MPALCJACMDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_MPALCJACMDJ_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GIJAMDCBEJM(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KFLKNAENGDO_GIJAMDCBEJM_OFFSET))(this, a1, a2);
		}

		::System::Int32 BOIHMBFKEIO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_BOIHMBFKEIO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CIDFJOKIJOC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_CIDFJOKIJOC_OFFSET))(this);
		}

		::System::Boolean JHPEMIJGELL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFLKNAENGDO_JHPEMIJGELL_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType HLIMPJACJAB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFLKNAENGDO_HLIMPJACJAB_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType PMOBKGBBLIL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFLKNAENGDO_PMOBKGBBLIL_OFFSET))(this, a1);
		}

		::System::Boolean AMCAJNIJFED(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFLKNAENGDO_AMCAJNIJFED_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType LAOLOGLMGHC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KFLKNAENGDO_LAOLOGLMGHC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AttackDamageType DIHGGIAGHDP()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_DIHGGIAGHDP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>* NADEGEHEGBH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_NADEGEHEGBH_OFFSET))(this);
		}

		::System::Boolean NDOEOMLKGAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_NDOEOMLKGAN_OFFSET))(this);
		}

		::System::Boolean get_IsBossPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLKNAENGDO_GET_ISBOSSPANEL_OFFSET))(this);
		}

		::System::Void set_IsBossPanel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFLKNAENGDO_SET_ISBOSSPANEL_OFFSET))(this, a1);
		}

	};
