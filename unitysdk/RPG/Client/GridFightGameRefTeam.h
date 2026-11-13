#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameRefData_RoleExpiredStatus.h"
#include "unitysdk/System/Object.h"
class HAGHIKLEKGO;
class HBEFMKBPJMB;
class HEJJDLPNKMH;
class KKJMAOMDCAE_IGHHCHHPGFD;
class OBDNIEDPENN;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD41ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x1CD54DE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x1CD54C70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x1CD54B80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1CD56860)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x1CD544C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETGAMEREFTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1CD56930)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x1CD54A10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x1CD548E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x1CD54510)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x1CD545B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x1CD54560)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x1CD53E80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x1CD541B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x1CD55C60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0x1CD542B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETSEASONROLE_OFFSET UNITYSDK_OFFSET(0x1CD543C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1CD53CD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ACTIVATEDTRAITS_OFFSET UNITYSDK_OFFSET(0x1CD53A90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x1CD54EB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x1CD54E70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x1CD54600)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CD547B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x1CD54690)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x1CD54720)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x1CD54050)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0x1CD53E40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CD54F40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1CD53A70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1CD53C50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0x1CD53BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_REFDATA_OFFSET UNITYSDK_OFFSET(0x1CD54E30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1CD53C10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1CD53C90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1CD53A50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x1CD569C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0x1CD566E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CD547F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISSPOTLIGHTROLE_OFFSET UNITYSDK_OFFSET(0x1CD56770)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1CD53A80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_MAINROLES_OFFSET UNITYSDK_OFFSET(0x1CD53C00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1CD53A60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__INITROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1CD55A10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__REBUILDALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CD55A70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0x1CD55080)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0x1CD54F90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam_TypeDefinitionIndex = 66341;

	class GridFightGameRefTeam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _MainRoles_k__BackingField; // 0x10
		::RPG::Client::GridFightGameRefData* _Data; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x28
		::System::Collections::Generic::List_1<::HBEFMKBPJMB*>* _Rules; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x38
		::System::Void _ctor(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_TRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_ActivatedTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ACTIVATEDTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_MainRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_MAINROLES_OFFSET))(this);
		}

		::System::Void set_MainRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_MAINROLES_OFFSET))(this, a1);
		}

		::HEJJDLPNKMH* get_TeamRepository()
		{
			return ((::HEJJDLPNKMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::HAGHIKLEKGO* get_ItemRepository()
		{
			return ((::HAGHIKLEKGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::OBDNIEDPENN* get_TraitRepository()
		{
			return ((::OBDNIEDPENN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* GetRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonRole* GetSeasonRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETSEASONROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETNPCBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameRefData* get_RefData()
		{
			return ((::RPG::Client::GridFightGameRefData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_REFDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_DESC_OFFSET))(this);
		}

		::System::Void _InitRoleSwitchRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__INITROLESWITCHROLE_OFFSET))(this);
		}

		::System::Void _SyncTraits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTRAITS_OFFSET))(this);
		}

		::System::Void _SyncTeam(::KKJMAOMDCAE_IGHHCHHPGFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKJMAOMDCAE_IGHHCHHPGFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTEAM_OFFSET))(this, a1);
		}

		::System::Void _RebuildAllMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__REBUILDALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleMain(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEMAIN_OFFSET))(this, a1);
		}

		::System::Boolean IsSpotLightRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISSPOTLIGHTROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameRefData_RoleExpiredStatus GetFinalRoleExpiredStatus(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightGameRefData_RoleExpiredStatus(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameRefTrait* GetGameRefTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETGAMEREFTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}

	};
}
