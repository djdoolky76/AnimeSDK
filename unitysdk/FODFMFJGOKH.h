#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FODFMFJGOKH_CLEAR_OFFSET UNITYSDK_OFFSET(0x158DA0A0)
#define FODFMFJGOKH_CTOR_OFFSET UNITYSDK_OFFSET(0x158DA2C0)
#define FODFMFJGOKH_GETALLSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x158D9DC0)
#define FODFMFJGOKH_GETLOCKEDUNITS_OFFSET UNITYSDK_OFFSET(0x158D9D60)
#define FODFMFJGOKH_GETSLOTUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0x158D9E20)
#define FODFMFJGOKH_GETSLOTUNITUID_OFFSET UNITYSDK_OFFSET(0x158D9F50)
#define FODFMFJGOKH_GET_BASICPOWER_OFFSET UNITYSDK_OFFSET(0x158D9BE0)
#define FODFMFJGOKH_GET_EFFECTTYPES_OFFSET UNITYSDK_OFFSET(0x158D9D00)
#define FODFMFJGOKH_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0x158D9B80)
#define FODFMFJGOKH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x158D9B30)
#define FODFMFJGOKH_GET_LIMITRANGETYPE_OFFSET UNITYSDK_OFFSET(0x158D9CA0)
#define FODFMFJGOKH_GET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x158D9AE0)
#define FODFMFJGOKH_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0x158D9C40)
#define FODFMFJGOKH_IAMKCPLNCLK_OFFSET UNITYSDK_OFFSET(0x158DA1E0)
#define FODFMFJGOKH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158DA140)

inline static constexpr unsigned int FODFMFJGOKH_TypeDefinitionIndex = 67427;

	class FODFMFJGOKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::RPG::Client::RogueMagicUnitDataItem*>* PCDLLMCECHI; // 0x10
		::RPG::Client::RogueMagicScepterDataItem* FEDGNIEMJNP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ScepterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GET_SCEPTERID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GET_LEVEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicScepterFuncType get_FuncType()
		{
			return ((::RPG::GameCore::RogueMagicScepterFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BasicPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GET_BASICPOWER_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GET_STYLETYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicRangeType get_LimitRangeType()
		{
			return ((::RPG::GameCore::RogueMagicRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GET_LIMITRANGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* get_EffectTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GET_EFFECTTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetLockedUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GETLOCKEDUNITS_OFFSET))(this);
		}

		::System::UInt32 GetAllSlotCount(::RPG::GameCore::RogueMagicMountType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GETALLSLOTCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicUnitDataItem* GetSlotUnitDataItem(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GETSLOTUNITDATAITEM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSlotUnitUID(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + FODFMFJGOKH_GETSLOTUNITUID_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODFMFJGOKH_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + FODFMFJGOKH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void IAMKCPLNCLK(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2, ::RPG::Client::RogueMagicUnitDataItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + FODFMFJGOKH_IAMKCPLNCLK_OFFSET))(this, a1, a2, a3);
		}

	};
