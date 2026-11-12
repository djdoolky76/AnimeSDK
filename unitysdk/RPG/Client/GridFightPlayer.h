#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGNKDLAHAGH.h"
#include "unitysdk/KMJNPEMPNMC.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class FBCIJONDIJE;
class FBFODNFGMKG;
class FGHOCLEKGFK;
class GMBMNFLMKPI;
class NIHNGPKHEPC;
class OMLCKBHONFL;
class PIHKLPJGEPM;
namespace RPG::Client { class GridFightCostContext; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGamePlayResConfig; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightUnlockReasonProvider; }
namespace RPG::Client { class GridFightVictoryCountRule; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightPlayerLevelConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER_BUYEXP_OFFSET UNITYSDK_OFFSET(0xDC2A810)
#define RPG_CLIENT_GRIDFIGHTPLAYER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC2F2B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC2F090)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ENTERPREPARATION_OFFSET UNITYSDK_OFFSET(0xDC2B610)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xDC2BD90)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDSPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC2C9A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDC2C600)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETLEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0xDC2D590)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETVICTORYRULES_OFFSET UNITYSDK_OFFSET(0xDC2CC10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETWILLGAININTEREST_OFFSET UNITYSDK_OFFSET(0xDC2D4A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_APPLIEDGAMEREFSHARECODE_OFFSET UNITYSDK_OFFSET(0xDC2DED0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BANROLEIDS_OFFSET UNITYSDK_OFFSET(0xDC2EC80)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLECOINADD_OFFSET UNITYSDK_OFFSET(0xDC2EA10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLEEXPADD_OFFSET UNITYSDK_OFFSET(0xDC2EB60)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BLOCKED_OFFSET UNITYSDK_OFFSET(0xDC2E500)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPCOSTCONTEXT_OFFSET UNITYSDK_OFFSET(0xDC2DB80)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPCOST_OFFSET UNITYSDK_OFFSET(0xDC2DAF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPGAIN_OFFSET UNITYSDK_OFFSET(0xDC2E1D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPHPCOST_OFFSET UNITYSDK_OFFSET(0xDC2DB30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_CURPLAYER_OFFSET UNITYSDK_OFFSET(0xDC27600)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXPRESID_OFFSET UNITYSDK_OFFSET(0xDC276F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXP_OFFSET UNITYSDK_OFFSET(0xDC2DA30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_GENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xDC2E070)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_GOLD_OFFSET UNITYSDK_OFFSET(0xDC2DA70)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_HPRESID_OFFSET UNITYSDK_OFFSET(0xDC27A20)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_HP_OFFSET UNITYSDK_OFFSET(0xDC2D970)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_INBATTLELOCK_OFFSET UNITYSDK_OFFSET(0xDC2E660)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_INPENDINGLOCK_OFFSET UNITYSDK_OFFSET(0xDC2E5E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDC2E0C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINCNT_OFFSET UNITYSDK_OFFSET(0xDC2DD90)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINGOLD_OFFSET UNITYSDK_OFFSET(0xDC2E3B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0xDC2E130)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDC2D9F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKREASON_OFFSET UNITYSDK_OFFSET(0xDC2DD50)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKTYPE_OFFSET UNITYSDK_OFFSET(0xDC2DD00)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBACKROLENUM_OFFSET UNITYSDK_OFFSET(0xDC2DDD0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBENCHROLENUM_OFFSET UNITYSDK_OFFSET(0xDC2DE10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xDC2D9B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXINTERESTNUM_OFFSET UNITYSDK_OFFSET(0xDC2DE50)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDC2DF10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXTRACKTRAITNUM_OFFSET UNITYSDK_OFFSET(0xDC2E4E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_PLAYERLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xDC2DE90)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_PREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0xDC2E550)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_REFRESHRESID_OFFSET UNITYSDK_OFFSET(0xDC27800)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_ROLEMAXNUM_OFFSET UNITYSDK_OFFSET(0xDC2DAB0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_SHOWBATTLEREWARD_OFFSET UNITYSDK_OFFSET(0xDC2E6D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_SPOTLIGHTFREEREFRESHRESID_OFFSET UNITYSDK_OFFSET(0xDC27B30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_SPOTLIGHTREFRESHRESID_OFFSET UNITYSDK_OFFSET(0xDC27910)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKEDTRAITNUM_OFFSET UNITYSDK_OFFSET(0xDC2E490)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKTRAITS_OFFSET UNITYSDK_OFFSET(0xDC2A5C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_UNLOCKREASONPROVIDER_OFFSET UNITYSDK_OFFSET(0xDC2EF20)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_WILLGAININTEREST_OFFSET UNITYSDK_OFFSET(0xDC2E2C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET__BUYEXPCOSTMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC2EF30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET__DEFAULTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDC2DF60)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET__LEVELUPEXPMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC2D630)
#define RPG_CLIENT_GRIDFIGHTPLAYER_HASGUIDERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xDC2B980)
#define RPG_CLIENT_GRIDFIGHTPLAYER_HASGUIDERECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDC2C2A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_INIT_OFFSET UNITYSDK_OFFSET(0xDC27F80)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISFIRSTENTERCURSECTIONPREPARETION_OFFSET UNITYSDK_OFFSET(0xDC2AFB0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISINACTIVITYMODULE_OFFSET UNITYSDK_OFFSET(0xDC2D790)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISROLEUNRELEASED_OFFSET UNITYSDK_OFFSET(0xDC2D8E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACKROLE_OFFSET UNITYSDK_OFFSET(0xDC2ACF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACK_OFFSET UNITYSDK_OFFSET(0xDC2AC30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISVICTORYRULEUNLOCK_OFFSET UNITYSDK_OFFSET(0xDC2D2B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_NEEDWARNINGROLENOTENOUGH_OFFSET UNITYSDK_OFFSET(0xDC2B470)
#define RPG_CLIENT_GRIDFIGHTPLAYER_NOTWARNINGROLENOTENOUGHTTHISSESSION_OFFSET UNITYSDK_OFFSET(0xDC2B2D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xDC28190)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xDC282C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0xDC283F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xDC27C40)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0xDC28520)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_APPLIEDGAMEREFSHARECODE_OFFSET UNITYSDK_OFFSET(0xDC29850)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPCOST_OFFSET UNITYSDK_OFFSET(0xDC29460)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPHPCOST_OFFSET UNITYSDK_OFFSET(0xDC294F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_EXP_OFFSET UNITYSDK_OFFSET(0xDC28FA0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_GOLD_OFFSET UNITYSDK_OFFSET(0xDC29080)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_HP_OFFSET UNITYSDK_OFFSET(0xDC291D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_KEEPWINCNT_OFFSET UNITYSDK_OFFSET(0xDC296A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDC29010)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKREASON_OFFSET UNITYSDK_OFFSET(0xDC29610)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKTYPE_OFFSET UNITYSDK_OFFSET(0xDC29580)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBACKROLENUM_OFFSET UNITYSDK_OFFSET(0xDC29730)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBENCHROLENUM_OFFSET UNITYSDK_OFFSET(0xDC297C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xDC29240)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXINTERESTNUM_OFFSET UNITYSDK_OFFSET(0xDC292B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXTRACKTRAITNUM_OFFSET UNITYSDK_OFFSET(0xDC2E4F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_PLAYERLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xDC293D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_ROLEMAXNUM_OFFSET UNITYSDK_OFFSET(0xDC28F10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_TRACKTRAITS_OFFSET UNITYSDK_OFFSET(0xDC29340)
#define RPG_CLIENT_GRIDFIGHTPLAYER_TRACKTRAIT_OFFSET UNITYSDK_OFFSET(0xDC2A9D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UNTRACKTRAIT_OFFSET UNITYSDK_OFFSET(0xDC2AB00)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOSTGLOBALHP_OFFSET UNITYSDK_OFFSET(0xDC29F00)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOST_OFFSET UNITYSDK_OFFSET(0xDC29E50)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATECOINNUM_OFFSET UNITYSDK_OFFSET(0xDC299C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEEXPLEVEL_OFFSET UNITYSDK_OFFSET(0xDC29A10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEHP_OFFSET UNITYSDK_OFFSET(0xDC29BF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEINTERESTMAX_OFFSET UNITYSDK_OFFSET(0xDC29DA0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEKEEPWINCNT_OFFSET UNITYSDK_OFFSET(0xDC2A600)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATELOCK_OFFSET UNITYSDK_OFFSET(0xDC29FB0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBACKROLENUM_OFFSET UNITYSDK_OFFSET(0xDC2A6B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBENCHROLENUM_OFFSET UNITYSDK_OFFSET(0xDC2A760)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0xDC29CF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATETRACKTRAIT_OFFSET UNITYSDK_OFFSET(0xDC2A130)
#define RPG_CLIENT_GRIDFIGHTPLAYER__GETMODULEBANROLEIDS_OFFSET UNITYSDK_OFFSET(0xDC2ECD0)
#define RPG_CLIENT_GRIDFIGHTPLAYER__GET_KEEPWINGOLD_B__122_0_OFFSET UNITYSDK_OFFSET(0xDC2F340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer_TypeDefinitionIndex = 66738;

	class GridFightPlayer : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TrackTraits; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightVictoryCountRule*>* _VictoryRules; // 0x20
		::System::String* _AppliedRefShareCode; // 0x28
		::System::Collections::Generic::IList_1<::System::UInt32>* _ActivityModuleIDs; // 0x30
		::RPG::GameCore::GridFightPlayerLevelConfigRow* _ConfigRow; // 0x38
		::RPG::Client::GridFightUnlockReasonProvider* _UnlockReasonProvider_k__BackingField; // 0x40
		::System::UInt32 _Level; // 0x48
		::System::UInt32 _MaxTrackTraitNum_k__BackingField; // 0x4C
		::System::UInt32 _PlayerLevelLimit; // 0x50
		::System::UInt32 _KeepWinCnt; // 0x54
		::System::UInt32 _MaxInterestNum; // 0x58
		::KMJNPEMPNMC _LockReason; // 0x5C
		::System::Int32 _CurHP; // 0x60
		::System::UInt32 _BuyExpCost; // 0x64
		::System::UInt32 _MaxRoleNum; // 0x68
		::System::UInt32 _Exp; // 0x6C
		::System::UInt32 _MaxBenchRoleNum; // 0x70
		::System::UInt32 _MaxBackRoleNum; // 0x74
		::System::Int32 _GoldNum; // 0x78
		::System::UInt32 _MaxHP; // 0x7C
		::GGNKDLAHAGH _LockType; // 0x80
		::System::UInt32 _BuyExpHpCost; // 0x84
		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_ExpResConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)UnitySDK::FromName("RPG.Client", "GridFightPlayer")->GetStaticField(0xD330);
		}

		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_SpotLightRefreshResConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)UnitySDK::FromName("RPG.Client", "GridFightPlayer")->GetStaticField(0xD338);
		}

		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_HpResConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)UnitySDK::FromName("RPG.Client", "GridFightPlayer")->GetStaticField(0xD340);
		}

		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_SpotLightFreeRefreshResConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)UnitySDK::FromName("RPG.Client", "GridFightPlayer")->GetStaticField(0xD348);
		}

		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_RefreshResConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)UnitySDK::FromName("RPG.Client", "GridFightPlayer")->GetStaticField(0xD350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPlayer* get_CurPlayer()
		{
			return ((::RPG::Client::GridFightPlayer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_CURPLAYER_OFFSET))();
		}

		static ::System::UInt32 get_ExpResID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXPRESID_OFFSET))();
		}

		static ::System::UInt32 get_RefreshResID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_REFRESHRESID_OFFSET))();
		}

		static ::System::UInt32 get_SpotLightRefreshResID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_SPOTLIGHTREFRESHRESID_OFFSET))();
		}

		static ::System::UInt32 get_HpResID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_HPRESID_OFFSET))();
		}

		static ::System::UInt32 get_SpotLightFreeRefreshResID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_SPOTLIGHTFREEREFRESHRESID_OFFSET))();
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_INIT_OFFSET))(this, a1);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void OnModifierUpdate(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERUPDATE_OFFSET))(this, a1);
		}

		::System::Void SetData(::NIHNGPKHEPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIHNGPKHEPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SETDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateCoinNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATECOINNUM_OFFSET))(this, a1);
		}

		::System::Void UpdateExpLevel(::PIHKLPJGEPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHKLPJGEPM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEEXPLEVEL_OFFSET))(this, a1);
		}

		::System::Void UpdateHP(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEHP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMaxRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXROLENUM_OFFSET))(this, a1);
		}

		::System::Void UpdateInterestMax(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEINTERESTMAX_OFFSET))(this, a1);
		}

		::System::Void UpdateBuyExpCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOST_OFFSET))(this, a1);
		}

		::System::Void UpdateBuyExpCostGlobalHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOSTGLOBALHP_OFFSET))(this, a1);
		}

		::System::Void UpdateLock(::GMBMNFLMKPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBMNFLMKPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATELOCK_OFFSET))(this, a1);
		}

		::System::Void UpdateTrackTrait(::FBCIJONDIJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBCIJONDIJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATETRACKTRAIT_OFFSET))(this, a1);
		}

		::System::Void UpdateKeepWinCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEKEEPWINCNT_OFFSET))(this, a1);
		}

		::System::Void UpdateMaxBackRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBACKROLENUM_OFFSET))(this, a1);
		}

		::System::Void UpdateMaxBenchRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBENCHROLENUM_OFFSET))(this, a1);
		}

		::System::Void BuyExp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_BUYEXP_OFFSET))(this);
		}

		::System::Void TrackTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_TRACKTRAIT_OFFSET))(this, a1);
		}

		::System::Void UntrackTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UNTRACKTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsTraitTrack(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACK_OFFSET))(this, a1);
		}

		::System::Boolean IsTraitTrackRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACKROLE_OFFSET))(this, a1);
		}

		::System::Boolean IsFirstEnterCurSectionPreparetion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISFIRSTENTERCURSECTIONPREPARETION_OFFSET))(this);
		}

		::System::Void NotWarningRoleNotEnoughtThisSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_NOTWARNINGROLENOTENOUGHTTHISSESSION_OFFSET))(this);
		}

		::System::Boolean NeedWarningRoleNotEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_NEEDWARNINGROLENOTENOUGH_OFFSET))(this);
		}

		::System::Void EnterPreparation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ENTERPREPARATION_OFFSET))(this);
		}

		::System::Boolean HasGuideRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_HASGUIDERECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Boolean HasGuideRecommendSpotLight(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_HASGUIDERECOMMENDSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideRecommendSpotLight(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* GetGuideRecommendSpotLightConfigs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDSPOTLIGHTCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightVictoryCountRule*>* GetVictoryRules()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightVictoryCountRule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETVICTORYRULES_OFFSET))(this);
		}

		::System::Boolean IsVictoryRuleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISVICTORYRULEUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 GetWillGainInterest(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETWILLGAININTEREST_OFFSET))(this, a1);
		}

		::System::UInt32 GetLevelUpNeedExp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETLEVELUPNEEDEXP_OFFSET))(this, a1);
		}

		::System::Boolean IsInActivityModule(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISINACTIVITYMODULE_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUnreleased(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISROLEUNRELEASED_OFFSET))(this, a1);
		}

		::System::Int32 get_HP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_HP_OFFSET))(this);
		}

		::System::Void set_HP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_HP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_EXP_OFFSET))(this, a1);
		}

		::System::Int32 get_Gold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_GOLD_OFFSET))(this);
		}

		::System::Void set_Gold(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_GOLD_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleMaxNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_ROLEMAXNUM_OFFSET))(this);
		}

		::System::Void set_RoleMaxNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_ROLEMAXNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyExpCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPCOST_OFFSET))(this);
		}

		::System::Void set_BuyExpCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyExpHpCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPHPCOST_OFFSET))(this);
		}

		::System::Void set_BuyExpHpCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPHPCOST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightCostContext* get_BuyExpCostContext()
		{
			return ((::RPG::Client::GridFightCostContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPCOSTCONTEXT_OFFSET))(this);
		}

		::GGNKDLAHAGH get_LockType()
		{
			return ((::GGNKDLAHAGH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKTYPE_OFFSET))(this);
		}

		::System::Void set_LockType(::GGNKDLAHAGH a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGNKDLAHAGH))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKTYPE_OFFSET))(this, a1);
		}

		::KMJNPEMPNMC get_LockReason()
		{
			return ((::KMJNPEMPNMC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKREASON_OFFSET))(this);
		}

		::System::Void set_LockReason(::KMJNPEMPNMC a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMJNPEMPNMC))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKREASON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TrackTraits()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKTRAITS_OFFSET))(this);
		}

		::System::Void set_TrackTraits(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_TRACKTRAITS_OFFSET))(this, a1);
		}

		::System::UInt32 get_KeepWinCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINCNT_OFFSET))(this);
		}

		::System::Void set_KeepWinCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_KEEPWINCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBackRoleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBACKROLENUM_OFFSET))(this);
		}

		::System::Void set_MaxBackRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBACKROLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBenchRoleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBENCHROLENUM_OFFSET))(this);
		}

		::System::Void set_MaxBenchRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBENCHROLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxInterestNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXINTERESTNUM_OFFSET))(this);
		}

		::System::Void set_MaxInterestNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXINTERESTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerLevelLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_PLAYERLEVELLIMIT_OFFSET))(this);
		}

		::System::Void set_PlayerLevelLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_PLAYERLEVELLIMIT_OFFSET))(this, a1);
		}

		::System::String* get_AppliedGameRefShareCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_APPLIEDGAMEREFSHARECODE_OFFSET))(this);
		}

		::System::Void set_AppliedGameRefShareCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_APPLIEDGAMEREFSHARECODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_GeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_GENERALPROPERTYLIST_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpNeedExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVELUPNEEDEXP_OFFSET))(this);
		}

		::System::UInt32 get_BuyExpGain()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPGAIN_OFFSET))(this);
		}

		::System::UInt32 get_WillGainInterest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_WILLGAININTEREST_OFFSET))(this);
		}

		::System::UInt32 get_KeepWinGold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINGOLD_OFFSET))(this);
		}

		::System::Int32 get_TrackedTraitNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKEDTRAITNUM_OFFSET))(this);
		}

		::System::UInt32 get_MaxTrackTraitNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXTRACKTRAITNUM_OFFSET))(this);
		}

		::System::Void set_MaxTrackTraitNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXTRACKTRAITNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_Blocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BLOCKED_OFFSET))(this);
		}

		::System::Boolean get_InPendingLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_INPENDINGLOCK_OFFSET))(this);
		}

		::System::Boolean get_InBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_INBATTLELOCK_OFFSET))(this);
		}

		::RPG::Client::PlayerPreparationState get_PreparationState()
		{
			return ((::RPG::Client::PlayerPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_PREPARATIONSTATE_OFFSET))(this);
		}

		::System::Boolean get_ShowBattleReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_SHOWBATTLEREWARD_OFFSET))(this);
		}

		::System::UInt32 get_BattleCoinAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLECOINADD_OFFSET))(this);
		}

		::System::UInt32 get_BattleExpAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLEEXPADD_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_BanRoleIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BANROLEIDS_OFFSET))(this);
		}

		::RPG::Client::GridFightUnlockReasonProvider* get_UnlockReasonProvider()
		{
			return ((::RPG::Client::GridFightUnlockReasonProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_UNLOCKREASONPROVIDER_OFFSET))(this);
		}

		::FGHOCLEKGFK* get__LevelUpExpModifier()
		{
			return ((::FGHOCLEKGFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET__LEVELUPEXPMODIFIER_OFFSET))(this);
		}

		::OMLCKBHONFL* get__BuyExpCostModifier()
		{
			return ((::OMLCKBHONFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET__BUYEXPCOSTMODIFIER_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* _GetModuleBanRoleIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER__GETMODULEBANROLEIDS_OFFSET))(this);
		}

		::System::UInt32 get__DefaultMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET__DEFAULTMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean _get_KeepWinGold_b__122_0(::RPG::Client::GridFightVictoryCountRule* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightVictoryCountRule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER__GET_KEEPWINGOLD_B__122_0_OFFSET))(this, a1);
		}

	};
}
