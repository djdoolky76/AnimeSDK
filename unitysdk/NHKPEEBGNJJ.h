#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"
class BMBCAILHNBB;
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHKPEEBGNJJ_AIMMJDEJNDD_OFFSET UNITYSDK_OFFSET(0xBBD2FC0)
#define NHKPEEBGNJJ_BIGAOMHIFFC_OFFSET UNITYSDK_OFFSET(0xBBD3AD0)
#define NHKPEEBGNJJ_BOKLAADBCMB_OFFSET UNITYSDK_OFFSET(0xBBD3700)
#define NHKPEEBGNJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD3C70)
#define NHKPEEBGNJJ_FAILFECMBPI_OFFSET UNITYSDK_OFFSET(0xBBD3BF0)
#define NHKPEEBGNJJ_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0xBBD36B0)
#define NHKPEEBGNJJ_IBPJKBHGOKA_OFFSET UNITYSDK_OFFSET(0xBBD33E0)
#define NHKPEEBGNJJ_KNFKFPGJGFK_OFFSET UNITYSDK_OFFSET(0xBBD38B0)
#define NHKPEEBGNJJ_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xBBD2A80)
#define NHKPEEBGNJJ_MKMFAJBLFOJ_OFFSET UNITYSDK_OFFSET(0xBBD2C80)
#define NHKPEEBGNJJ_NGLKBFKMKOM_OFFSET UNITYSDK_OFFSET(0xBBD3250)
#define NHKPEEBGNJJ___GETALLWEAPONLIST_B__1_0_OFFSET UNITYSDK_OFFSET(0xBBD3CB0)
#define NHKPEEBGNJJ___GETALLWEAPONLIST_B__1_1_OFFSET UNITYSDK_OFFSET(0xBBD3DD0)

	class NHKPEEBGNJJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HHJNBBEECAO; // 0x10
		::BMBCAILHNBB* PPIJFBECGNJ; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* DMEADPGDBKK; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CNONBLDGIHJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_CTOR_OFFSET))(this);
		}

		::System::Void LNGKNPJIOML(::RPG::GameCore::EvolveBuildGearManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_LNGKNPJIOML_OFFSET))(this, a1);
		}

		::System::Void AIMMJDEJNDD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_AIMMJDEJNDD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* NGLKBFKMKOM(::Il2CppArray<::RPG::GameCore::EvolveGearType>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EvolveGearType>*))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_NGLKBFKMKOM_OFFSET))(this, a1);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_GET_SORTLISTS_OFFSET))(this);
		}

		::System::Void MKMFAJBLFOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_MKMFAJBLFOJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* IBPJKBHGOKA(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_IBPJKBHGOKA_OFFSET))(this, a1);
		}

		::System::Void BOKLAADBCMB(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_BOKLAADBCMB_OFFSET))(this, a1, a2);
		}

		::System::Void KNFKFPGJGFK(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_KNFKFPGJGFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BIGAOMHIFFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_BIGAOMHIFFC_OFFSET))(this, a1);
		}

		::System::Void FAILFECMBPI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ_FAILFECMBPI_OFFSET))(this, a1, a2);
		}

		::System::Int32 __GetAllWeaponList_b__1_0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ___GETALLWEAPONLIST_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __GetAllWeaponList_b__1_1(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + NHKPEEBGNJJ___GETALLWEAPONLIST_B__1_1_OFFSET))(this, a1, a2);
		}

	};
