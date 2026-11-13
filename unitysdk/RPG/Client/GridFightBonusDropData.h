#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJJIFGINJAJ.h"
#include "unitysdk/System/Object.h"
class AOHKKFHDALO;
class BCCONKJHDJL;
class PDDEGIKOPMA;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeConfig; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CLONEWITHNUM_OFFSET UNITYSDK_OFFSET(0x1D582E40)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D581C30)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D582E30)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETAUGMENT_OFFSET UNITYSDK_OFFSET(0x1D583970)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETCONSUMABLEDATA_OFFSET UNITYSDK_OFFSET(0x1D583510)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0x1D583D30)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETEQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1D583420)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETEQUIP_OFFSET UNITYSDK_OFFSET(0x1D5834C0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETFORGECONFIG_OFFSET UNITYSDK_OFFSET(0x1D5838D0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x1D583EA0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETITEMDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1D583700)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETITEM_OFFSET UNITYSDK_OFFSET(0x1D583380)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0x1D583BC0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETPRESENTER_OFFSET UNITYSDK_OFFSET(0x1D583A70)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETROLE_OFFSET UNITYSDK_OFFSET(0x1D583330)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0x1D582FF0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET UNITYSDK_OFFSET(0x1D582EF0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0x1D582ED0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISAUGMENT_OFFSET UNITYSDK_OFFSET(0x1D583150)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISCONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1D5831A0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0x1D583230)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISFORGE_OFFSET UNITYSDK_OFFSET(0x1D5832C0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISITEM_OFFSET UNITYSDK_OFFSET(0x1D583100)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISROLE_OFFSET UNITYSDK_OFFSET(0x1D5830B0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET UNITYSDK_OFFSET(0x1D582F10)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ROLESTAR_OFFSET UNITYSDK_OFFSET(0x1D582F30)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET UNITYSDK_OFFSET(0x1D582F00)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0x1D582EE0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET UNITYSDK_OFFSET(0x1D582F20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusDropData_TypeDefinitionIndex = 65881;

	class GridFightBonusDropData : public ::System::Object
	{
	public:
		::AOHKKFHDALO* _Param; // 0x10
		::MJJIFGINJAJ _DropType_k__BackingField; // 0x18
		::System::UInt32 _DropId_k__BackingField; // 0x1C
		::System::UInt32 _Num_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBonusDropData* Create(::BCCONKJHDJL* a1)
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::BCCONKJHDJL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::GridFightBonusDropData* CloneWithNum(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CLONEWITHNUM_OFFSET))(this, a1);
		}

		::MJJIFGINJAJ get_DropType()
		{
			return ((::MJJIFGINJAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET))(this);
		}

		::System::Void set_DropType(::MJJIFGINJAJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJJIFGINJAJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DropId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET))(this);
		}

		::System::Void set_DropId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ROLESTAR_OFFSET))(this);
		}

		::System::UInt32 get_DelayRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DELAYROUND_OFFSET))(this);
		}

		::System::Boolean get_IsRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISROLE_OFFSET))(this);
		}

		::System::Boolean get_IsItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISITEM_OFFSET))(this);
		}

		::System::Boolean get_IsAugment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISAUGMENT_OFFSET))(this);
		}

		::System::Boolean get_IsConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISCONSUMABLE_OFFSET))(this);
		}

		::System::Boolean get_IsEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISEQUIP_OFFSET))(this);
		}

		::System::Boolean get_IsForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISFORGE_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETROLE_OFFSET))(this);
		}

		::RPG::Client::GridFightItemConfig* GetItem()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETITEM_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* GetEquipConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETEQUIPCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetEquip()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETEQUIP_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableData()
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETCONSUMABLEDATA_OFFSET))(this);
		}

		::System::Object* GetItemDisplayData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETITEMDISPLAYDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightAugment* GetAugment()
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETAUGMENT_OFFSET))(this);
		}

		::RPG::Client::GridFightForgeConfig* GetForgeConfig()
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETFORGECONFIG_OFFSET))(this);
		}

		::PDDEGIKOPMA* GetPresenter()
		{
			return ((::PDDEGIKOPMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETPRESENTER_OFFSET))(this);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETDESC_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETICONPATH_OFFSET))(this);
		}

	};
}
