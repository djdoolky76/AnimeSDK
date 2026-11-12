#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAGHIKLEKGO;
class HEJJDLPNKMH;
class OBDNIEDPENN;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEmptyDataContext; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDACB010)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xDACB000)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0xDACA580)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xDACA4A0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0xDACA4F0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xDAC9EF0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETHEROSHOWIDBYTRAITID_OFFSET UNITYSDK_OFFSET(0xDACA7D0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xDACA3E0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xDACA350)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xDAC9F40)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xDAC9FE0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xDAC9F90)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xDAC9E10)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xDAC9E60)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xDACA9E0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xDACA6F0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0xDACA660)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xDACA5D0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xDACA110)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xDACA2C0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xDACA1A0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xDACA230)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xDACA080)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xDACA740)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xDAC9CF0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xDAC9D90)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xDAC9D50)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xDAC9DD0)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0xDACA430)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xDACA030)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEmptyDataContext_TypeDefinitionIndex = 66062;

	class GridFightEmptyDataContext : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__TraitShowHeroIdByTraitID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightEmptyDataContext")->GetStaticField(0xCDB0);
		}

		static ::RPG::Client::GridFightEmptyDataContext** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightEmptyDataContext**)UnitySDK::FromName("RPG.Client", "GridFightEmptyDataContext")->GetStaticField(0xCDB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__HeroIDBySeasonID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightEmptyDataContext")->GetStaticField(0xCDC0);
		}

		static ::RPG::Client::GridFightEmptyDataContext** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::GridFightEmptyDataContext**)UnitySDK::FromName("RPG.Client", "GridFightEmptyDataContext")->GetStaticField(0xCDC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightEmptyDataContext* get_Instance()
		{
			return ((::RPG::Client::GridFightEmptyDataContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_INSTANCE_OFFSET))();
		}

		::HEJJDLPNKMH* get_TeamRepository()
		{
			return ((::HEJJDLPNKMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::HAGHIKLEKGO* get_ItemRepository()
		{
			return ((::HAGHIKLEKGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::OBDNIEDPENN* get_TraitRepository()
		{
			return ((::OBDNIEDPENN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETNPCBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETPROJBYID_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GET_ALLTRAITS_OFFSET))(this);
		}

		static ::System::UInt32 GetHeroShowIDByTraitID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETHEROSHOWIDBYTRAITID_OFFSET))(a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

	};
}
