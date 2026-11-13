#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"
class MHEGMHKHAAD;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandBookPetPal; }
namespace RPG::Client { class GridFightHandBookPetPalCategory; }
namespace RPG::Client { class GridFightHandBookPetPalGroup; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC54CC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC54D00)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__281_1_OFFSET UNITYSDK_OFFSET(0x1CC55600)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__180_0_OFFSET UNITYSDK_OFFSET(0x1CC54F00)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__180_2_OFFSET UNITYSDK_OFFSET(0x1CC54F60)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__266_0_OFFSET UNITYSDK_OFFSET(0x1CC55540)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAFFIXDATA_B__193_1_OFFSET UNITYSDK_OFFSET(0x1CC55220)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__189_1_OFFSET UNITYSDK_OFFSET(0x1CC550E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__189_2_OFFSET UNITYSDK_OFFSET(0x1CC55100)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__181_1_OFFSET UNITYSDK_OFFSET(0x1CC54F80)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__181_2_OFFSET UNITYSDK_OFFSET(0x1CC54FA0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPETPALDATA_B__194_1_OFFSET UNITYSDK_OFFSET(0x1CC55280)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPETPALDATA_B__194_2_OFFSET UNITYSDK_OFFSET(0x1CC552F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__191_1_OFFSET UNITYSDK_OFFSET(0x1CC55160)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLSPOTLIGHTDATA_B__192_1_OFFSET UNITYSDK_OFFSET(0x1CC551C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__190_1_OFFSET UNITYSDK_OFFSET(0x1CC55120)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__190_2_OFFSET UNITYSDK_OFFSET(0x1CC55140)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__182_0_OFFSET UNITYSDK_OFFSET(0x1CC54FD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__182_1_OFFSET UNITYSDK_OFFSET(0x1CC54FF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__179_1_OFFSET UNITYSDK_OFFSET(0x1CC54EE0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__200_0_OFFSET UNITYSDK_OFFSET(0x1CC55500)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__267_0_OFFSET UNITYSDK_OFFSET(0x1CC55560)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__202_0_OFFSET UNITYSDK_OFFSET(0x1CC55520)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_0_OFFSET UNITYSDK_OFFSET(0x1CC55400)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_1_OFFSET UNITYSDK_OFFSET(0x1CC55470)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_2_OFFSET UNITYSDK_OFFSET(0x1CC55380)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_3_OFFSET UNITYSDK_OFFSET(0x1CC553C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__184_0_OFFSET UNITYSDK_OFFSET(0x1CC55040)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__183_1_OFFSET UNITYSDK_OFFSET(0x1CC55010)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__185_0_OFFSET UNITYSDK_OFFSET(0x1CC55060)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__187_1_OFFSET UNITYSDK_OFFSET(0x1CC550B0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__186_0_OFFSET UNITYSDK_OFFSET(0x1CC55080)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__268_0_OFFSET UNITYSDK_OFFSET(0x1CC55580)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__399_0_OFFSET UNITYSDK_OFFSET(0x1CC55620)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__157_0_OFFSET UNITYSDK_OFFSET(0x1CC54D10)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__157_2_OFFSET UNITYSDK_OFFSET(0x1CC54DC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__157_3_OFFSET UNITYSDK_OFFSET(0x1CC54DE0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___TRYGETROLENAMESWICHNAMES_B__172_0_OFFSET UNITYSDK_OFFSET(0x1CC54E60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c_TypeDefinitionIndex = 66419;

	class GridFightModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MHEGMHKHAAD*, ::System::UInt32>** StaticGet___9__399_0()
		{
			return (::System::Func_2<::MHEGMHKHAAD*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72390);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>** StaticGet___9__172_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72398);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__266_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__187_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723A8);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>** StaticGet___9__194_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723B0);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__202_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723B8);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__182_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723C0);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__186_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723C8);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__281_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723D0);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__181_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723D8);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__183_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723E8);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__157_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723F0);
		}

		static ::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>** StaticGet___9__192_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x723F8);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__267_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72400);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__157_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72408);
		}

		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__189_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72410);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__268_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72418);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightHandBookPetPalCategory*>** StaticGet___9__197_2()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightHandBookPetPalCategory*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72420);
		}

		static ::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>** StaticGet___9__191_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72428);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__200_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72430);
		}

		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__189_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72438);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>** StaticGet___9__197_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72440);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>** StaticGet___9__181_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72448);
		}

		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__190_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72450);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__180_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72458);
		}

		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__190_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72460);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__184_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72468);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__179_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72470);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightHandBookPetPalGroup*>** StaticGet___9__197_3()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightHandBookPetPalGroup*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72478);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__157_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72480);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::UInt32>** StaticGet___9__193_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72488);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__180_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72490);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__182_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72498);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>** StaticGet___9__194_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x724A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__185_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x724A8);
		}

		static ::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>** StaticGet___9__197_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookPetPal*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x724B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortHandBookRoles_b__157_0(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__157_0_OFFSET))(this, a1);
		}

		::System::UInt32 __SortHandBookRoles_b__157_2(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__157_2_OFFSET))(this, a1);
		}

		::System::UInt32 __SortHandBookRoles_b__157_3(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__157_3_OFFSET))(this, a1);
		}

		::RPG::Client::TextID __TryGetRoleNameSwichNames_b__172_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___TRYGETROLENAMESWICHNAMES_B__172_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMonsterCampDataByTypeID_b__179_1(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__179_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllMonsterCampData_b__180_0(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__180_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAllMonsterCampData_b__180_2(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__180_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookEquipItemType _GetHandBookAllEquipItemData_b__181_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookEquipItemType(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__181_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllEquipItemData_b__181_2(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__181_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__182_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__182_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__182_1(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__182_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetHandBookConsumableEquipItemData_b__183_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__183_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookBaseEquipItemData_b__184_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__184_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookCraftableEquipItemData_b__185_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__185_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookSpecialEquipItemData_b__186_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__186_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetHandBookEquipItemData_b__187_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__187_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAllAugmentItemData_b__189_1(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__189_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllAugmentItemData_b__189_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__189_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAugmentItemDataByQuality_b__190_1(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__190_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAugmentItemDataByQuality_b__190_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__190_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllPortalData_b__191_1(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__191_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllSpotLightData_b__192_1(::RPG::Client::GridFightSpotLightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLSPOTLIGHTDATA_B__192_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllAffixData_b__193_1(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAFFIXDATA_B__193_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllPetPalData_b__194_1(::RPG::Client::GridFightHandBookPetPal* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPETPALDATA_B__194_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllPetPalData_b__194_2(::RPG::Client::GridFightHandBookPetPal* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPETPALDATA_B__194_2_OFFSET))(this, a1);
		}

		::System::Int32 __EnsureHandBookPetPalCache_b__197_2(::RPG::Client::GridFightHandBookPetPalCategory* a1, ::RPG::Client::GridFightHandBookPetPalCategory* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPalCategory*, ::RPG::Client::GridFightHandBookPetPalCategory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 __EnsureHandBookPetPalCache_b__197_3(::RPG::Client::GridFightHandBookPetPalGroup* a1, ::RPG::Client::GridFightHandBookPetPalGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPalGroup*, ::RPG::Client::GridFightHandBookPetPalGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_3_OFFSET))(this, a1, a2);
		}

		::System::UInt32 __EnsureHandBookPetPalCache_b__197_0(::RPG::Client::GridFightHandBookPetPal* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_0_OFFSET))(this, a1);
		}

		::System::UInt32 __EnsureHandBookPetPalCache_b__197_1(::RPG::Client::GridFightHandBookPetPal* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ENSUREHANDBOOKPETPALCACHE_B__197_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNewHandBookQuestIDsByQuestArr_b__200_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__200_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SetHandBookQuestSeenByQuestArr_b__202_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__202_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetFirstEquipItemListByRoleID_b__266_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__266_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondEquipItemListByRoleID_b__267_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__267_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __GetRecommendEquipListByRoleID_b__268_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__268_0_OFFSET))(this, a1);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__281_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__281_1_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGridFightUpdatePosScRsp_b__399_0(::MHEGMHKHAAD* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::MHEGMHKHAAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__399_0_OFFSET))(this, a1);
		}

	};
}
