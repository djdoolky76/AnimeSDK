#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CDEAABODKCP;
class DDAMEHEPOBD;
class FBFODNFGMKG;
class FPHPFJLAJDK;
class GGAKNLJJNEI;
class HKFECLCHBFJ;
class IGKKILFFNJK;
class MFNCDGPLHDC;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IGridFightTutorialData; }
namespace RPG::Client { template <typename T> class GridFightGridContainer_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET UNITYSDK_OFFSET(0x1E17F480)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1E17C9F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1E17CBF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET UNITYSDK_OFFSET(0x1E17CDF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET UNITYSDK_OFFSET(0x1E17F540)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET UNITYSDK_OFFSET(0x1E180610)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET UNITYSDK_OFFSET(0x1E17F240)
#define RPG_CLIENT_GRIDFIGHTTEAM_CANPLACEROLEONBOARD_OFFSET UNITYSDK_OFFSET(0x1D3C7A10)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0x1E15C1B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEONBOARD_OFFSET UNITYSDK_OFFSET(0x1E1837E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSUNIQUEROLEONBOARD_OFFSET UNITYSDK_OFFSET(0x1E183A00)
#define RPG_CLIENT_GRIDFIGHTTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E179870)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLNPCS_OFFSET UNITYSDK_OFFSET(0x1E183680)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLROLES_OFFSET UNITYSDK_OFFSET(0x1E183240)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLTRACKEDUNOWNEDROLES_OFFSET UNITYSDK_OFFSET(0x1D3C5C30)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBACKROLES_OFFSET UNITYSDK_OFFSET(0x1E182470)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLESNOTONBOARD_OFFSET UNITYSDK_OFFSET(0x1D3C5B80)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLES_OFFSET UNITYSDK_OFFSET(0x1E182A30)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1D3C6EE0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLE_OFFSET UNITYSDK_OFFSET(0x1D3C6E20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x1E17A2E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFRONTROLES_OFFSET UNITYSDK_OFFSET(0x1E182190)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1E183C20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0x1E17A490)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRID_OFFSET UNITYSDK_OFFSET(0x1E17A590)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x1E17B0F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x1E17AE60)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x1E17A370)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDNPCS_OFFSET UNITYSDK_OFFSET(0x1E1833A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDROLES_OFFSET UNITYSDK_OFFSET(0x1E182750)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETOVERCROWDROLES_OFFSET UNITYSDK_OFFSET(0x1E182D10)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x1E15ACD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x1E17A400)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYIDANDSTAR_OFFSET UNITYSDK_OFFSET(0x1E182FF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x1E167960)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEPOPULATION_OFFSET UNITYSDK_OFFSET(0x1D3C7860)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x1E16CBD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0x1E17A210)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x1E17A8E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E184F20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E17AAF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x1E17A990)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x1E17AA40)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x1E17A830)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BACKMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1E185B90)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1E185C10)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E184940)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0x1E17AE20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_FRONTROLECOUNT_OFFSET UNITYSDK_OFFSET(0x1E185210)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBENCHFULL_OFFSET UNITYSDK_OFFSET(0x1E185950)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBOARDFULL_OFFSET UNITYSDK_OFFSET(0x1E1858A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISONBOARDOVER_OFFSET UNITYSDK_OFFSET(0x1E1857F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISOVERCROWD_OFFSET UNITYSDK_OFFSET(0x1E185500)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1E1848C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E184630)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_OVERCROWDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E184C30)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x1E17ADE0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEXPERTROLES_OFFSET UNITYSDK_OFFSET(0x1E1859E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__FORGES_OFFSET UNITYSDK_OFFSET(0x1D3C8230)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__NPCS_OFFSET UNITYSDK_OFFSET(0x1D3C8240)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PLAYER_OFFSET UNITYSDK_OFFSET(0x1D3C8260)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x1D3C8250)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__ROLES_OFFSET UNITYSDK_OFFSET(0x1D3C8220)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0x1D3C8360)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E17F680)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E17E090)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISEXPERTUNLOCK_OFFSET UNITYSDK_OFFSET(0x1E1820D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISPROJECTIONIDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1E15AC10)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1E17A760)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUSEPOPULATION_OFFSET UNITYSDK_OFFSET(0x1D3C7800)
#define RPG_CLIENT_GRIDFIGHTTEAM_MOVEGRIDITEMTO_OFFSET UNITYSDK_OFFSET(0x1E183CC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1E181AD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEFORGE_OFFSET UNITYSDK_OFFSET(0x1E1816B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVENPC_OFFSET UNITYSDK_OFFSET(0x1E1819F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET UNITYSDK_OFFSET(0x1E181860)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1E181300)
#define RPG_CLIENT_GRIDFIGHTTEAM_REPORTALLROLELUCHCHANCE_OFFSET UNITYSDK_OFFSET(0x1D3C7A90)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1E17B150)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETTEAMFACTORY_OFFSET UNITYSDK_OFFSET(0x1E17E040)
#define RPG_CLIENT_GRIDFIGHTTEAM_SUMMONPORJECTION_OFFSET UNITYSDK_OFFSET(0x1E184560)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEEXCPETEDROLEIDS_OFFSET UNITYSDK_OFFSET(0x1E17A6D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET UNITYSDK_OFFSET(0x1E1813E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET UNITYSDK_OFFSET(0x1E181940)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET UNITYSDK_OFFSET(0x1E181790)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLEOPTION_OFFSET UNITYSDK_OFFSET(0x1E1806D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x1E181250)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKEXPERTID_OFFSET UNITYSDK_OFFSET(0x1E1815A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKPROJECTIONID_OFFSET UNITYSDK_OFFSET(0x1E181490)
#define RPG_CLIENT_GRIDFIGHTTEAM__APPLYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1E17DE60)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETDELAYSTATE_OFFSET UNITYSDK_OFFSET(0x1E17DCB0)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0x1E17A4E0)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYUID_OFFSET UNITYSDK_OFFSET(0x1E183ED0)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITCONTAINERS_OFFSET UNITYSDK_OFFSET(0x1E179CC0)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITGRIDS_OFFSET UNITYSDK_OFFSET(0x1E179B30)
#define RPG_CLIENT_GRIDFIGHTTEAM__ONMODIFIERCHANGE_OFFSET UNITYSDK_OFFSET(0x1E17D000)
#define RPG_CLIENT_GRIDFIGHTTEAM__REMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0x1E185D90)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0x1E1844A0)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTSWAPGRIDITEM_OFFSET UNITYSDK_OFFSET(0x1E184140)
#define RPG_CLIENT_GRIDFIGHTTEAM__RESET_OFFSET UNITYSDK_OFFSET(0x1E17EEB0)
#define RPG_CLIENT_GRIDFIGHTTEAM__UPDATEGRIDITEM_OFFSET UNITYSDK_OFFSET(0x1E185C90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_TypeDefinitionIndex = 66850;

	class GridFightTeam : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>* __Forges_k__BackingField; // 0x10
		::System::Action* _OnRoleNumberModifierChange; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedProjectionIDs; // 0x20
		::MFNCDGPLHDC* _TeamFactory; // 0x28
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>* __NPCs_k__BackingField; // 0x30
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>* __Roles_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightGridData*>* _GridByPos; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedExpertRoleIDs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _OptionRoleMap; // 0x50
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>* __Projections_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _ExceptedRoleIDs; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLESBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRole(::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETNPCBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* GetGridByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* GetGrid(::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>* a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRID_OFFSET))(this, a1);
		}

		::System::Void UpdateExcpetedRoleIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEEXCPETEDROLEIDS_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_ExceptedRoleIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_EXCEPTEDROLEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1, ::FBFODNFGMKG* a2, ::FBFODNFGMKG* a3, ::FBFODNFGMKG* a4)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*, ::FBFODNFGMKG*, ::FBFODNFGMKG*, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddMemberCollectionChangedHandler(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET))(this, a1);
		}

		::System::Void AddMemberPropertyChangedHandler(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET))(this, a1);
		}

		::System::Void AddModifierHandler(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET))(this, a1);
		}

		::System::Void _OnModifierChange(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__ONMODIFIERCHANGE_OFFSET))(this, a1);
		}

		::System::Void _ApplyModifier(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__APPLYMODIFIER_OFFSET))(this, a1);
		}

		static ::System::ValueTuple_2<::System::Boolean, ::System::UInt32> _GetDelayState(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__GETDELAYSTATE_OFFSET))(a1);
		}

		::System::Void SetTeamFactory(::MFNCDGPLHDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFNCDGPLHDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SETTEAMFACTORY_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Collections::Generic::IList_1<::CDEAABODKCP*>* a1, ::System::Collections::Generic::IList_1<::DDAMEHEPOBD*>* a2, ::System::Collections::Generic::IList_1<::GGAKNLJJNEI*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::CDEAABODKCP*>*, ::System::Collections::Generic::IList_1<::DDAMEHEPOBD*>*, ::System::Collections::Generic::IList_1<::GGAKNLJJNEI*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Initialize_1(::HKFECLCHBFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKFECLCHBFJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET))(this, a1);
		}

		::System::Void UpdateRoleOption(::System::Collections::Generic::IList_1<::IGKKILFFNJK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::IGKKILFFNJK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLEOPTION_OFFSET))(this, a1);
		}

		::System::Void AddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET))(this, a1);
		}

		::System::Void RemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void AddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET))(this, a1);
		}

		::System::Boolean IsProjectionIDUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISPROJECTIONIDUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void UpdateUnlockProjectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKPROJECTIONID_OFFSET))(this, a1);
		}

		::System::Void UpdateUnlockExpertID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKEXPERTID_OFFSET))(this, a1);
		}

		::System::Void RemoveForge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEFORGE_OFFSET))(this, a1);
		}

		::System::Void AddNPC(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET))(this, a1);
		}

		::System::Void AddProjection(::FPHPFJLAJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET))(this, a1);
		}

		::System::Void UpdateProjection(::FPHPFJLAJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET))(this, a1);
		}

		::System::Void RemoveProjection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET))(this, a1);
		}

		::System::Void UpdateNPC(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET))(this, a1);
		}

		::System::Void RemoveNPC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVENPC_OFFSET))(this, a1);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Boolean IsExpertUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISEXPERTUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetFrontRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETFRONTROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetBackRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETBACKROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetOnBoardRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetBenchRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetOvercrowdRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETOVERCROWDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetRoleByIDAndStar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYIDANDSTAR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetAllRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* GetOnBoardNPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* GetAllNPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETALLNPCS_OFFSET))(this);
		}

		::System::Boolean ContainsRoleID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEID_OFFSET))(this, a1);
		}

		::System::Boolean ContainsRoleOnBoard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEONBOARD_OFFSET))(this, a1);
		}

		::System::Boolean ContainsUniqueRoleOnBoard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSUNIQUEROLEONBOARD_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* GetGridByPlacementIndex(::RPG::Client::GridFightPlacementType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::RPG::Client::GridFightPlacementType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPLACEMENTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void MoveGridItemTo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_MOVEGRIDITEMTO_OFFSET))(this, a1, a2);
		}

		::System::Void SummonPorjection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SUMMONPORJECTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_OnBoardMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_OnBoardMemberCountLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNTLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_BenchMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_OvercrowdMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_OVERCROWDMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_FrontRoleCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_FRONTROLECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsOvercrowd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ISOVERCROWD_OFFSET))(this);
		}

		::System::Boolean get_IsOnBoardOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ISONBOARDOVER_OFFSET))(this);
		}

		::System::Boolean get_IsBoardFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBOARDFULL_OFFSET))(this);
		}

		::System::Boolean get_IsBenchFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBENCHFULL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_UnlockExpertRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEXPERTROLES_OFFSET))(this);
		}

		::System::UInt32 get_BackMemberCountLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_BACKMEMBERCOUNTLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_BenchMemberCountLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNTLIMIT_OFFSET))(this);
		}

		::System::Void _RequestMoveGridItem(::RPG::Client::GridFightGridMember* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REQUESTMOVEGRIDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestSwapGridItem(::RPG::Client::GridFightGridMember* a1, ::RPG::Client::GridFightGridMember* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REQUESTSWAPGRIDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _InitGrids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__INITGRIDS_OFFSET))(this);
		}

		::System::Void _InitContainers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__INITCONTAINERS_OFFSET))(this);
		}

		::System::Void _UpdateGridItem(::RPG::Client::GridFightGridMember* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__UPDATEGRIDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveGridItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REMOVEGRIDITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* _GetGridByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* _GetGridByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYUID_OFFSET))(this, a1);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__RESET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetBenchRolesNotOnBoard()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLESNOTONBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetAllTrackedUnownedRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETALLTRACKEDUNOWNEDROLES_OFFSET))(this);
		}

		::System::UInt32 GetCurOptionRole(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLE_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurOptionRoleByAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLEBYAVATARID_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUsePopulation(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUSEPOPULATION_OFFSET))(this, a1);
		}

		::System::UInt32 GetRolePopulation(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLEPOPULATION_OFFSET))(this, a1);
		}

		::System::Boolean CanPlaceRoleOnBoard(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CANPLACEROLEONBOARD_OFFSET))(this, a1);
		}

		::System::Void ReportAllRoleLuchChance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REPORTALLROLELUCHCHANCE_OFFSET))(this);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>* get__Roles()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__ROLES_OFFSET))(this);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>* get__Forges()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__FORGES_OFFSET))(this);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>* get__NPCs()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__NPCS_OFFSET))(this);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>* get__Projections()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__PROJECTIONS_OFFSET))(this);
		}

		::RPG::Client::GridFightPlayer* get__Player()
		{
			return ((::RPG::Client::GridFightPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__PLAYER_OFFSET))(this);
		}

		::RPG::Client::IGridFightTutorialData* get__TutorialData()
		{
			return ((::RPG::Client::IGridFightTutorialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__TUTORIALDATA_OFFSET))(this);
		}

	};
}
