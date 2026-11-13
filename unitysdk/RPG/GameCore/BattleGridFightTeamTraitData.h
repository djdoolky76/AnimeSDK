#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSourceMask.h"
#include "unitysdk/System/Object.h"
class CPNNACGJFHC;
class FNNMLBJJPBJ;
class GHCEOIMHKJI;
class IHIDPEDODEN;
class MHFNFINKJKP;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE660B0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x1AE65C70)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0x1AE66260)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSID_OFFSET UNITYSDK_OFFSET(0x1AE66200)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0x1AE66120)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETROLEIDLISTBYSOURCE_OFFSET UNITYSDK_OFFSET(0x1AE65810)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1AE65B50)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTPARAMPHANIONUNIQUEINFO_OFFSET UNITYSDK_OFFSET(0x1AE66340)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTPARAMUPGRADEBASICEQUIPBEFOREBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1AE664C0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1AE65680)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x1AE656A0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNTEXCEPTDUMMY_OFFSET UNITYSDK_OFFSET(0x1AE656C0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE65630)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_RAWTRAITBONUSCROSSBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0x1AE65A90)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_HASROLE_OFFSET UNITYSDK_OFFSET(0x1AE659D0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SETUPELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1AE66640)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1AE65690)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x1AE656B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData_TypeDefinitionIndex = 57499;

	class BattleGridFightTeamTraitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MHFNFINKJKP*>* MemberList; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* _ElationEquipList_k__BackingField; // 0x18
		::FNNMLBJJPBJ* _ElationPropertyMap_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::IHIDPEDODEN*>* TraitEffectList; // 0x28
		::System::UInt32 ActiveLayer; // 0x30
		::System::UInt32 TeamTraitID; // 0x34
		::System::UInt32 LayerLimit; // 0x38
		::System::UInt32 SubTraitId; // 0x3C
		::RPG::GameCore::FixPoint TraitBonusCrossBattleCounter; // 0x40
		::System::UInt32 WhiteBoxActiveCount; // 0x48
		::System::UInt32 SubTraitLayer; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* get_ElationEquipList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONEQUIPLIST_OFFSET))(this);
		}

		::System::Void set_ElationEquipList(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONEQUIPLIST_OFFSET))(this, a1);
		}

		::FNNMLBJJPBJ* get_ElationPropertyMap()
		{
			return ((::FNNMLBJJPBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONPROPERTYMAP_OFFSET))(this);
		}

		::System::Void set_ElationPropertyMap(::FNNMLBJJPBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNNMLBJJPBJ*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONPROPERTYMAP_OFFSET))(this, a1);
		}

		::System::Int32 get_MemberCountExceptDummy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNTEXCEPTDUMMY_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::UInt32>* GetRoleIdListBySource(::RPG::GameCore::GridFightTraitSourceMask a1)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitSourceMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETROLEIDLISTBYSOURCE_OFFSET))(this, a1);
		}

		::System::Boolean HasRole(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitSourceMask a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitSourceMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_HASROLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint get_RawTraitBonusCrossBattleCounter()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_RAWTRAITBONUSCROSSBATTLECOUNTER_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_DEEPCLONE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetBattleCounter(::RPG::GameCore::GridFightTraitEffectType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETBATTLECOUNTER_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetAttachedTraitBonusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSID_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetAttachedTraitBonusEffect(::RPG::GameCore::GridFightTraitBonusType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightTraitBonusType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSEFFECT_OFFSET))(this, a1, a2);
		}

		::IHIDPEDODEN* GetTraitEffectInfo(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::IHIDPEDODEN*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET))(this, a1);
		}

		::GHCEOIMHKJI* GetTraitEffectParamPhanionUniqueInfo()
		{
			return ((::GHCEOIMHKJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTPARAMPHANIONUNIQUEINFO_OFFSET))(this);
		}

		::CPNNACGJFHC* GetTraitEffectParamUpgradeBasicEquipBeforeBattleInfo()
		{
			return ((::CPNNACGJFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTPARAMUPGRADEBASICEQUIPBEFOREBATTLEINFO_OFFSET))(this);
		}

		::System::Void SetupElationEquipList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SETUPELATIONEQUIPLIST_OFFSET))(this);
		}

	};
}
