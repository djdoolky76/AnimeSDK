#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
class HKGJBAGOHFH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGGLMOFICJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6974B0)
#define LGGLMOFICJK_GET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xB696A60)
#define LGGLMOFICJK_GET_CARID_OFFSET UNITYSDK_OFFSET(0xB696960)
#define LGGLMOFICJK_GET_CARNUM_OFFSET UNITYSDK_OFFSET(0xB696980)
#define LGGLMOFICJK_GET_DEVELOPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB696A20)
#define LGGLMOFICJK_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xB6969A0)
#define LGGLMOFICJK_GET_EQUIPPEDPAINTID_OFFSET UNITYSDK_OFFSET(0xB696A40)
#define LGGLMOFICJK_GET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB696A00)
#define LGGLMOFICJK_GET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xB6969C0)
#define LGGLMOFICJK_GET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xB6969E0)
#define LGGLMOFICJK_GNNODLOCPEM_OFFSET UNITYSDK_OFFSET(0xB697410)
#define LGGLMOFICJK_HNHPPHNAIBJ_OFFSET UNITYSDK_OFFSET(0xB696A80)
#define LGGLMOFICJK_SET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xB696A70)
#define LGGLMOFICJK_SET_CARID_OFFSET UNITYSDK_OFFSET(0xB696970)
#define LGGLMOFICJK_SET_CARNUM_OFFSET UNITYSDK_OFFSET(0xB696990)
#define LGGLMOFICJK_SET_DEVELOPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB696A30)
#define LGGLMOFICJK_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xB6969B0)
#define LGGLMOFICJK_SET_EQUIPPEDPAINTID_OFFSET UNITYSDK_OFFSET(0xB696A50)
#define LGGLMOFICJK_SET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB696A10)
#define LGGLMOFICJK_SET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xB6969D0)
#define LGGLMOFICJK_SET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xB6969F0)

	class LGGLMOFICJK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _TargetStatTiers_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _DevelopedPartIDs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _StatValues_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _EquippedPartIDs_k__BackingField; // 0x28
		::System::UInt32 _DriverID_k__BackingField; // 0x30
		::System::UInt32 _CarID_k__BackingField; // 0x34
		::System::UInt32 _CarNum_k__BackingField; // 0x38
		::System::UInt32 _EquippedPaintID_k__BackingField; // 0x3C
		::System::UInt32 _ActiveSkillExp_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_CARID_OFFSET))(this);
		}

		::System::Void set_CarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_CARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_CARNUM_OFFSET))(this);
		}

		::System::Void set_CarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_CARNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_DriverID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_DRIVERID_OFFSET))(this);
		}

		::System::Void set_DriverID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_DRIVERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_StatValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_STATVALUES_OFFSET))(this);
		}

		::System::Void set_StatValues(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_STATVALUES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_TargetStatTiers()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_TARGETSTATTIERS_OFFSET))(this);
		}

		::System::Void set_TargetStatTiers(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_TARGETSTATTIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EquippedPartIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_EQUIPPEDPARTIDS_OFFSET))(this);
		}

		::System::Void set_EquippedPartIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_EQUIPPEDPARTIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DevelopedPartIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_DEVELOPEDPARTIDS_OFFSET))(this);
		}

		::System::Void set_DevelopedPartIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_DEVELOPEDPARTIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquippedPaintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_EQUIPPEDPAINTID_OFFSET))(this);
		}

		::System::Void set_EquippedPaintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_EQUIPPEDPAINTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveSkillExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GET_ACTIVESKILLEXP_OFFSET))(this);
		}

		::System::Void set_ActiveSkillExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGLMOFICJK_SET_ACTIVESKILLEXP_OFFSET))(this, a1);
		}

		::System::Void HNHPPHNAIBJ(::HKGJBAGOHFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKGJBAGOHFH*))((::PBYTE)hIl2Cpp + LGGLMOFICJK_HNHPPHNAIBJ_OFFSET))(this, a1);
		}

		::System::Void GNNODLOCPEM(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + LGGLMOFICJK_GNNODLOCPEM_OFFSET))(this, a1);
		}

	};
