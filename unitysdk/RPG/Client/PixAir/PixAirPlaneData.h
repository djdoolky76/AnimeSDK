#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirPlaneStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirPlaneData; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D823CE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASEHP_OFFSET UNITYSDK_OFFSET(0x1D823DC0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASELIFE_OFFSET UNITYSDK_OFFSET(0x1D823DA0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0x1D823EC0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0x1D823EE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D823E20)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1D824140)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0x1D823E40)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1D823DE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D823E00)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0x1D823EA0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0x1D823E60)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x1D823E80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1D823D60)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1D824030)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMID_OFFSET UNITYSDK_OFFSET(0x1D823F20)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D823D80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x1D823F00)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETNOTOBTAINED_OFFSET UNITYSDK_OFFSET(0x1D81D430)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1D81FB40)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASEHP_OFFSET UNITYSDK_OFFSET(0x1D823DD0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASELIFE_OFFSET UNITYSDK_OFFSET(0x1D823DB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0x1D823ED0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0x1D823EF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D823E30)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1D824150)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0x1D823E50)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1D823DF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D823E10)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0x1D823EB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0x1D823E70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x1D823E90)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1D823D70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D823D90)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x1D823F10)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1D823AE0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneData_TypeDefinitionIndex = 82146;

	class PixAirPlaneData : public ::System::Object
	{
	public:
		::System::String* _OwnerIconPath_k__BackingField; // 0x10
		::System::String* _ModelPath_k__BackingField; // 0x18
		::System::String* _LargePlaneIconPath_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _EquipIDList_k__BackingField; // 0x28
		::System::String* _IconPath_k__BackingField; // 0x30
		::RPG::Client::TextID _OwnerDesc_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _BaseHP_k__BackingField; // 0x48
		::RPG::Client::TextID _OwnerName_k__BackingField; // 0x50
		::RPG::Client::TextID _Name_k__BackingField; // 0x60
		::System::UInt32 _CoreEquipID_k__BackingField; // 0x70
		::System::Boolean _IsSelectable_k__BackingField; // 0x74
		::System::Byte _padding0[0x3];
		::System::Int32 _BaseLife_k__BackingField; // 0x78
		::System::UInt32 _UnLockScore_k__BackingField; // 0x7C
		::RPG::Client::PixAir::PixAirPlaneStatus _Status_k__BackingField; // 0x80
		::System::UInt32 _PlaneID_k__BackingField; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirPlaneData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirPlaneData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_TRYCREATE_OFFSET))(a1);
		}

		::System::Void SetNotObtained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETNOTOBTAINED_OFFSET))(this);
		}

		::System::Void SetUnlocked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_PLANEID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneStatus get_Status()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::PixAir::PixAirPlaneStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_BaseLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASELIFE_OFFSET))(this);
		}

		::System::Void set_BaseLife(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASELIFE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASEHP_OFFSET))(this);
		}

		::System::Void set_BaseHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASEHP_OFFSET))(this, a1);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_MODELPATH_OFFSET))(this);
		}

		::System::Void set_ModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_MODELPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_LargePlaneIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_LARGEPLANEICONPATH_OFFSET))(this);
		}

		::System::Void set_LargePlaneIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_LARGEPLANEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_OwnerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERICONPATH_OFFSET))(this);
		}

		::System::Void set_OwnerIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERNAME_OFFSET))(this);
		}

		::System::Void set_OwnerName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnerDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERDESC_OFFSET))(this);
		}

		::System::Void set_OwnerDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoreEquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_COREEQUIPID_OFFSET))(this);
		}

		::System::Void set_CoreEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_COREEQUIPID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_EquipIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_EQUIPIDLIST_OFFSET))(this);
		}

		::System::Void set_EquipIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_EQUIPIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnLockScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_UNLOCKSCORE_OFFSET))(this);
		}

		::System::Void set_UnLockScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_UNLOCKSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PurchaseItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMID_OFFSET))(this);
		}

		::System::UInt32 get_PurchaseItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ISSELECTABLE_OFFSET))(this);
		}

		::System::Void set_IsSelectable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ISSELECTABLE_OFFSET))(this, a1);
		}

	};
}
