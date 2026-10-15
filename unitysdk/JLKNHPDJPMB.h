#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class EKFMIDBJDIA;
class ELFJOFJPMJO;
class FEMILHDIIMK;
class OOCCBMLAELL;
class PMPCIBGILIE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLKNHPDJPMB_ADDMKADDNIH_OFFSET UNITYSDK_OFFSET(0xB24D880)
#define JLKNHPDJPMB_AFNGFCKDHFP_OFFSET UNITYSDK_OFFSET(0xB24EDA0)
#define JLKNHPDJPMB_AGLLIOOBPLN_OFFSET UNITYSDK_OFFSET(0xB24F600)
#define JLKNHPDJPMB_AOGIPHLNAAF_OFFSET UNITYSDK_OFFSET(0xB24F160)
#define JLKNHPDJPMB_AOKGEFACMEN_OFFSET UNITYSDK_OFFSET(0xB24EAE0)
#define JLKNHPDJPMB_CFKNLPJGJOA_OFFSET UNITYSDK_OFFSET(0xB24EE40)
#define JLKNHPDJPMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB24D550)
#define JLKNHPDJPMB_DEDMDHDGDOI_OFFSET UNITYSDK_OFFSET(0xB24DA80)
#define JLKNHPDJPMB_DLFINBJGAEJ_OFFSET UNITYSDK_OFFSET(0xB24E070)
#define JLKNHPDJPMB_EIIHDFPDHCP_OFFSET UNITYSDK_OFFSET(0xB24DDF0)
#define JLKNHPDJPMB_EILDNLMHCEO_OFFSET UNITYSDK_OFFSET(0xB24F030)
#define JLKNHPDJPMB_FPCFKLDGBBI_OFFSET UNITYSDK_OFFSET(0xB24EFB0)
#define JLKNHPDJPMB_GET_TOTALDAMAGETAKEN_OFFSET UNITYSDK_OFFSET(0xB24F830)
#define JLKNHPDJPMB_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xB24F810)
#define JLKNHPDJPMB_GET_TOTALHPRECOVER_OFFSET UNITYSDK_OFFSET(0xB24F850)
#define JLKNHPDJPMB_GET_TOTALMANAADD_OFFSET UNITYSDK_OFFSET(0xB24F7D0)
#define JLKNHPDJPMB_GET_TOTALMANACOST_OFFSET UNITYSDK_OFFSET(0xB24F7F0)
#define JLKNHPDJPMB_GET_TOTALSHIELDTAKEN_OFFSET UNITYSDK_OFFSET(0xB24F870)
#define JLKNHPDJPMB_GOFDPLJEFDG_OFFSET UNITYSDK_OFFSET(0xB24D630)
#define JLKNHPDJPMB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB24D830)
#define JLKNHPDJPMB_INEHELEEEIH_OFFSET UNITYSDK_OFFSET(0xB24E7B0)
#define JLKNHPDJPMB_LOLICMIIINM_OFFSET UNITYSDK_OFFSET(0xB24E5A0)
#define JLKNHPDJPMB_OPKHPKCENIL_1_OFFSET UNITYSDK_OFFSET(0xB24F460)
#define JLKNHPDJPMB_OPKHPKCENIL_OFFSET UNITYSDK_OFFSET(0xB24EF30)
#define JLKNHPDJPMB_PLJNDIAAAPK_OFFSET UNITYSDK_OFFSET(0xB24F2A0)
#define JLKNHPDJPMB_PMGDCCPGEDJ_OFFSET UNITYSDK_OFFSET(0xB24E0F0)
#define JLKNHPDJPMB_SET_TOTALDAMAGETAKEN_OFFSET UNITYSDK_OFFSET(0xB24F840)
#define JLKNHPDJPMB_SET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xB24F820)
#define JLKNHPDJPMB_SET_TOTALHPRECOVER_OFFSET UNITYSDK_OFFSET(0xB24F860)
#define JLKNHPDJPMB_SET_TOTALMANAADD_OFFSET UNITYSDK_OFFSET(0xB24F7E0)
#define JLKNHPDJPMB_SET_TOTALMANACOST_OFFSET UNITYSDK_OFFSET(0xB24F800)
#define JLKNHPDJPMB_SET_TOTALSHIELDTAKEN_OFFSET UNITYSDK_OFFSET(0xB24F880)

	class JLKNHPDJPMB : public ::System::Object
	{
	public:
		::OOCCBMLAELL* FKNBPKADNPA; // 0x10
		::FEMILHDIIMK* JAHNNKLJNLJ; // 0x18
		::System::Collections::Generic::List_1<::PMPCIBGILIE*>* FLIEIDMPOND; // 0x20
		::Il2CppArray<::System::UInt32>* NMNCGLDDHOF; // 0x28
		::System::UInt32 _TotalManaAdd_k__BackingField; // 0x30
		::System::UInt32 _TotalManaCost_k__BackingField; // 0x34
		::RPG::GameCore::FixPoint _TotalDamage_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _TotalDamageTaken_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _TotalHpRecover_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _TotalShieldTaken_k__BackingField; // 0x50
		// static const ::System::Object AGLNJGHIGMM; // 0x0
		// static const ::System::String* FOFCJEPKMAK; // 0x0
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void DEDMDHDGDOI(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_DEDMDHDGDOI_OFFSET))(this, a1);
		}

		::System::Void EIIHDFPDHCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_EIIHDFPDHCP_OFFSET))(this);
		}

		::System::Void DLFINBJGAEJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_DLFINBJGAEJ_OFFSET))(this, a1);
		}

		::System::Void PMGDCCPGEDJ(::BJHMBGLPOLB* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_PMGDCCPGEDJ_OFFSET))(this, a1, a2);
		}

		::System::Void LOLICMIIINM(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_LOLICMIIINM_OFFSET))(this, a1);
		}

		::System::Int32 INEHELEEEIH(::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_INEHELEEEIH_OFFSET))(this, a1, a2);
		}

		::System::Void GOFDPLJEFDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_GOFDPLJEFDG_OFFSET))(this);
		}

		::System::Void ADDMKADDNIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_ADDMKADDNIH_OFFSET))(this);
		}

		::System::Void AOKGEFACMEN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_AOKGEFACMEN_OFFSET))(this, a1);
		}

		::System::Void EILDNLMHCEO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_EILDNLMHCEO_OFFSET))(this, a1);
		}

		::System::Void AOGIPHLNAAF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_AOGIPHLNAAF_OFFSET))(this, a1);
		}

		::System::Void PLJNDIAAAPK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_PLJNDIAAAPK_OFFSET))(this, a1);
		}

		::System::Boolean CFKNLPJGJOA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_CFKNLPJGJOA_OFFSET))(this, a1);
		}

		::System::Boolean AFNGFCKDHFP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_AFNGFCKDHFP_OFFSET))(this, a1);
		}

		::PMPCIBGILIE* OPKHPKCENIL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::PMPCIBGILIE*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_OPKHPKCENIL_OFFSET))(this, a1);
		}

		::PMPCIBGILIE* OPKHPKCENIL_1(::System::UInt32 a1)
		{
			return ((::PMPCIBGILIE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_OPKHPKCENIL_1_OFFSET))(this, a1);
		}

		::ELFJOFJPMJO* FPCFKLDGBBI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::ELFJOFJPMJO*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_FPCFKLDGBBI_OFFSET))(this, a1);
		}

		::ELFJOFJPMJO* AGLLIOOBPLN(::System::UInt32 a1)
		{
			return ((::ELFJOFJPMJO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_AGLLIOOBPLN_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalManaAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_GET_TOTALMANAADD_OFFSET))(this);
		}

		::System::Void set_TotalManaAdd(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_SET_TOTALMANAADD_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalManaCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_GET_TOTALMANACOST_OFFSET))(this);
		}

		::System::Void set_TotalManaCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_SET_TOTALMANACOST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_GET_TOTALDAMAGE_OFFSET))(this);
		}

		::System::Void set_TotalDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_SET_TOTALDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalDamageTaken()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_GET_TOTALDAMAGETAKEN_OFFSET))(this);
		}

		::System::Void set_TotalDamageTaken(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_SET_TOTALDAMAGETAKEN_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalHpRecover()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_GET_TOTALHPRECOVER_OFFSET))(this);
		}

		::System::Void set_TotalHpRecover(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_SET_TOTALHPRECOVER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalShieldTaken()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_GET_TOTALSHIELDTAKEN_OFFSET))(this);
		}

		::System::Void set_TotalShieldTaken(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JLKNHPDJPMB_SET_TOTALSHIELDTAKEN_OFFSET))(this, a1);
		}

	};
