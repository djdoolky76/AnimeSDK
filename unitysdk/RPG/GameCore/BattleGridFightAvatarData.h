#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
class FNNMLBJJPBJ;
class JGOBLAHOHLB;
class JJHJCIAPADP;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF0428D0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xF042660)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_FULLEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xF0421D0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETROLECONFIG_OFFSET UNITYSDK_OFFSET(0xF0420C0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETTRAITLIST_OFFSET UNITYSDK_OFFSET(0xF042030)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ISBACKENDAVATAR_OFFSET UNITYSDK_OFFSET(0xF042600)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_POWER_GRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xF042430)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESETLOCATION_OFFSET UNITYSDK_OFFSET(0xF0425B0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESET_OFFSET UNITYSDK_OFFSET(0xF042610)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ROLEPRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF042140)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_SPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0xF041FD0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_HASEQUIP_OFFSET UNITYSDK_OFFSET(0xF042310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightAvatarData_TypeDefinitionIndex = 57505;

	class BattleGridFightAvatarData : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightManager* MgrRef; // 0x10
		::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* ActiveBackendEquipmentConfig; // 0x18
		::RPG::GameCore::GridFightRoleConfigRow* _RoleRow; // 0x20
		::FNNMLBJJPBJ* AdditionalPropertyMap; // 0x28
		::JJHJCIAPADP* BattleExtInfo; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* NormalEquip; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* ActiveBackendRankList; // 0x40
		::JGOBLAHOHLB* CustomValueMap; // 0x48
		::RPG::GameCore::FixPoint Power_Quality; // 0x50
		::System::UInt32 AvatarLocation; // 0x58
		::System::UInt32 UniqueID; // 0x5C
		::System::UInt32 AvatarID; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Power_Star; // 0x68
		::RPG::GameCore::FixPoint Power_Equip; // 0x70
		::RPG::GameCore::FixPoint Power_FormationPlace; // 0x78
		::RPG::GameCore::FixPoint Power_Trait; // 0x80
		::RPG::GameCore::FixPoint Power_SpotLight; // 0x88
		::System::UInt32 ID; // 0x90
		::System::UInt32 AvatarStar; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SpotLightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_SPOTLIGHTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetTraitList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETTRAITLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightRoleConfigRow* GetRoleConfig()
		{
			return ((::RPG::GameCore::GridFightRoleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GETROLECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_RolePresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ROLEPRESETTYPE_OFFSET))(this);
		}

		::System::Void FullEquipList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_FULLEQUIPLIST_OFFSET))(this, a1);
		}

		::System::Boolean HasEquip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_HASEQUIP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Power_GridFight()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_POWER_GRIDFIGHT_OFFSET))(this);
		}

		::System::UInt32 get_PresetLocation()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESETLOCATION_OFFSET))(this);
		}

		::System::Boolean get_IsBackendAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_ISBACKENDAVATAR_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_Preset()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_GET_PRESET_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightAvatarData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTAVATARDATA_DEEPCLONE_OFFSET))(this);
		}

	};
}
