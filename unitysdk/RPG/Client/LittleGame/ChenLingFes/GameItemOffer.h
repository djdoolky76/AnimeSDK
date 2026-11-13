#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/GameItemOfferChangeReason.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class AAMGDIOHCFG;
class BMEBMENDJGA;
class NNEIOFDLLMI;
class OFGLEOIIJBD;
namespace RPG::GameCore { class ChenLingFesItemRuleGroupRow; }
namespace System { class Object; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1334F0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CHARGEDAYITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E131890)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E130730)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x1E132150)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130EC0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_LASTITEMIDSCHANGEREASON_OFFSET UNITYSDK_OFFSET(0x1E132170)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130C80)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALEXPANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130D70)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALRANDOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130EE0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_HASITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E1313A0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_ONAWARD_OFFSET UNITYSDK_OFFSET(0x1E130DF0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_RECORDOPCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130F00)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E1318F0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REROLL_OFFSET UNITYSDK_OFFSET(0x1E131400)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTADJUST_OFFSET UNITYSDK_OFFSET(0x1E130CA0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTEXPAND_OFFSET UNITYSDK_OFFSET(0x1E130D90)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETITEMUSED_OFFSET UNITYSDK_OFFSET(0x1E131080)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1E130BA0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x1E132160)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130A60)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_LASTITEMIDSCHANGEREASON_OFFSET UNITYSDK_OFFSET(0x1E132180)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E1309C0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALEXPANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130920)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALRANDOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1E130B00)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SKIP_OFFSET UNITYSDK_OFFSET(0x1E131750)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTADJUST_OFFSET UNITYSDK_OFFSET(0x1E130C10)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTEXPAND_OFFSET UNITYSDK_OFFSET(0x1E130D00)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1E132DE0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDOCCUPIEDCOUNTBYITEMID_OFFSET UNITYSDK_OFFSET(0x1E1331D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__FILTERCANDIDATESBYMAXPUTDOWN_OFFSET UNITYSDK_OFFSET(0x1E131A60)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__HASANYITEMUSED_OFFSET UNITYSDK_OFFSET(0x1E1320F0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x1E1330D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTINT_OFFSET UNITYSDK_OFFSET(0x1E131970)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMBYRAREWEIGHT_OFFSET UNITYSDK_OFFSET(0x1E132190)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMDISTINCTFROMLIST_OFFSET UNITYSDK_OFFSET(0x1E131D80)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__REFRESHITEMSFORSELECTED_OFFSET UNITYSDK_OFFSET(0x1E131500)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__UPDATEITEMS_OFFSET UNITYSDK_OFFSET(0x1E131110)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int GameItemOffer_TypeDefinitionIndex = 80476;

	class GameItemOffer : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Random* _Rng; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemIDs_k__BackingField; // 0x20
		::NNEIOFDLLMI* _GameLoopInstance; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemIDs; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UsedItemIDs; // 0x38
		::AAMGDIOHCFG* ManualAdjustOPCount; // 0x40
		::AAMGDIOHCFG* ItemRefreshOPCount; // 0x48
		::AAMGDIOHCFG* ManualExpandOPCount; // 0x50
		::AAMGDIOHCFG* ManualRandomOPCount; // 0x58
		::System::Int32 _ManualAdjustCount; // 0x60
		::System::Int32 _ManualRandomCount; // 0x64
		::System::Int32 _ItemRefreshCount; // 0x68
		::System::Int32 _ManualExpandCount; // 0x6C
		::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason _LastItemIDsChangeReason_k__BackingField; // 0x70
		static ::Il2CppArray<::RPG::GameCore::ChenLingFesItemRare>** StaticGet__Rarities()
		{
			return (::Il2CppArray<::RPG::GameCore::ChenLingFesItemRare>**)UnitySDK::FromName("RPG.Client.LittleGame.ChenLingFes", "GameItemOffer")->GetStaticField(0x3E7C0);
		}

		static ::System::Boolean* StaticGet_DebugEnableAllItem()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGame.ChenLingFes", "GameItemOffer")->GetStaticField(0xC820);
		}

		// static const ::System::Object _MinTargetCount; // 0x0
		// static const ::System::Object _MaxTargetCount; // 0x0
		::System::Void _ctor(::NNEIOFDLLMI* a1, ::OFGLEOIIJBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NNEIOFDLLMI*, ::OFGLEOIIJBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CCTOR_OFFSET))();
		}

		::System::Void SetRandomSeed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETRANDOMSEED_OFFSET))(this, a1);
		}

		::System::Boolean TryCostAdjust()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTADJUST_OFFSET))(this);
		}

		::System::Void RevertCostAdjust()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTADJUST_OFFSET))(this);
		}

		::System::Boolean TryCostExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTEXPAND_OFFSET))(this);
		}

		::System::Void RevertCostExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTEXPAND_OFFSET))(this);
		}

		::System::Void OnAward(::BMEBMENDJGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMEBMENDJGA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_ONAWARD_OFFSET))(this, a1);
		}

		::System::Void RecordOPCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_RECORDOPCOUNT_OFFSET))(this);
		}

		::System::Void SetItemUsed(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETITEMUSED_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasItemRefreshCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_HASITEMREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void Reroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REROLL_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SKIP_OFFSET))(this);
		}

		::System::Void ChargeDayItemRefreshCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CHARGEDAYITEMREFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::Void Refresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _RefreshItemsForSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__REFRESHITEMSFORSELECTED_OFFSET))(this);
		}

		::System::Void _UpdateItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__UPDATEITEMS_OFFSET))(this);
		}

		::System::Boolean _HasAnyItemUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__HASANYITEMUSED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMIDS_OFFSET))(this);
		}

		::System::Void set_ItemIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMIDS_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason get_LastItemIDsChangeReason()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_LASTITEMIDSCHANGEREASON_OFFSET))(this);
		}

		::System::Void set_LastItemIDsChangeReason(::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_LASTITEMIDSCHANGEREASON_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemRefreshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemRefreshCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMREFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ManualRandomCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALRANDOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ManualRandomCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALRANDOMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ManualAdjustCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALADJUSTCOUNT_OFFSET))(this);
		}

		::System::Void set_ManualAdjustCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALADJUSTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ManualExpandCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALEXPANDCOUNT_OFFSET))(this);
		}

		::System::Void set_ManualExpandCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALEXPANDCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _RandomByRareWeight(::RPG::GameCore::ChenLingFesItemRuleGroupRow* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMBYRAREWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _BuildCandidates(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDCANDIDATES_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _FilterCandidatesByMaxPutDown(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__FILTERCANDIDATESBYMAXPUTDOWN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BuildOccupiedCountByItemID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDOCCUPIEDCOUNTBYITEMID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _RandomDistinctFromList(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMDISTINCTFROMLIST_OFFSET))(this, a1, a2);
		}

		::System::Int32 _NextInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTINT_OFFSET))(this, a1, a2);
		}

		::System::Single _NextFloat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTFLOAT_OFFSET))(this, a1, a2);
		}

	};
}
