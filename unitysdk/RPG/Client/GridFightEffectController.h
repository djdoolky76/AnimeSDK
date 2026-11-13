#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlyType.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DIJLKOGNMAF;
class ICIMFKPDDMD_CEHBLMGKHHN;
class IONGFDBBCIF;
namespace RPG::Client { class GridFightAhaGrowthUpEffect; }
namespace RPG::Client { class GridFightAnimEffect; }
namespace RPG::Client { class GridFightBonfireOrbFlyEffect; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightMemberLinkEffect; }
namespace RPG::Client { class GridFightParticleEffect; }
namespace RPG::Client { class GridFightRoleTraitEffect; }
namespace RPG::Client { class GridFightStarEffect; }
namespace RPG::Client { class GridFightUnlockParticleEffect; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CANCELAHAGROWTHFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AF940)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CANCELAHAGROWTHUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AF5A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CANCELSHOPRANKUPENTRANCE_OFFSET UNITYSDK_OFFSET(0x1D5AF0C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CREATEEFFECTPOOLCONFIG_OFFSET UNITYSDK_OFFSET(0x1D5A60A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B4130)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DESPAWNALLBONFIREORBFLYEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D5AA150)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DESTROYUNPOOLEDEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5A65C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5A9330)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D5A6560)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1D5A6C40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D5A6CC0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEROOT_OFFSET UNITYSDK_OFFSET(0x1D5A6C80)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1D5A6D20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEALLSTAREFFECTS_OFFSET UNITYSDK_OFFSET(0x1D5B03B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEATTACHEDUIEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B1000)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEMEMBERLINKEFFECTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1D5B3AD0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEMEMBERLINKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B3940)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEMEMBERLINKROLETRAITEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D5B31F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDESTAREFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B0280)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1D5A6D70)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_ISSTAREFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1D5B1180)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D5AA2D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAHAGROWTHFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AF6D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAHAGROWTHUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AF220)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISCARDEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AC1B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISLVUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AC610)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISSHOPTOASTEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5ABEF0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISTIEREFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AC400)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAVATARUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5ADC40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAVATARUNLOCKUPGRADEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AE170)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYBONFIREORBFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AB9A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCLARAENHANCEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AD0B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCONSUMEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B2330)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B1F90)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AA490)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYENHANCECHOOSEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AE480)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_1_OFFSET UNITYSDK_OFFSET(0x1D5B29D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B2780)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B2410)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B2BA0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFEIXIAOGROWUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5ACC40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_1_OFFSET UNITYSDK_OFFSET(0x1D5AA900)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_2_OFFSET UNITYSDK_OFFSET(0x1D5AAD60)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AA7F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFORGEFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AB3B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNCHARACTERBUFFEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AE330)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AE1E0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGROWUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AC9B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYHACKCOPYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AD7D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYMEMBERLINKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B35D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYMEMBERLINKROLETRAITEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D5B2F60)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYMOONGAMEGOLDTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B07C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYORBFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AB610)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYPARTNERBLACKHOLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B2130)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYPERSISTENTEQUIPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AE590)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYRANDOMFLY_OFFSET UNITYSDK_OFFSET(0x1D5AB180)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B2CF0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRANSFEREFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AD9F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPHIDEGOODSBLACKHOLE_OFFSET UNITYSDK_OFFSET(0x1D5AECA0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPRANKUPENTRANCE_OFFSET UNITYSDK_OFFSET(0x1D5AEE20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPROLEREPLACE_OFFSET UNITYSDK_OFFSET(0x1D5AEB20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSPOTLIGHTINFECTIONEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5ACE70)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSTARADDRING_OFFSET UNITYSDK_OFFSET(0x1D5B05D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAILENHANCEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AD2F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAITACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5ABBA0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5A5CE0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_1_OFFSET UNITYSDK_OFFSET(0x1D5B15C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_2_OFFSET UNITYSDK_OFFSET(0x1D5B1D00)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B1210)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B1D80)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_RETURNUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5A6140)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETPARTICLEPERSPECTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1D5AA320)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETSTARRINGLOOPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D5B06E0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SHOWATTACHEDUIEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B0A30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SHOWSTAREFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AF9D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SHOWULTRASTAREFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AFF80)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_STOPPERSISTENTEQUIPEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AEA20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_STOPUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5A5F90)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SWITCHSTARCOLORTOULTRA_OFFSET UNITYSDK_OFFSET(0x1D5B0010)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__ATTACHTOPARENT_OFFSET UNITYSDK_OFFSET(0x1D5B0F10)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__CREATEFLYANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x1D5AA700)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__DISPOSEEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D5A93F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__DISPOSEUNLOCKEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D5A6320)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__DISPOSEUNPOOLEDEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D5A68B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETEQUIPACTIVEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1D5B2950)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETFLYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1D5AAC60)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__ONMEMBERPOSINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x1D5B3BF0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYAVATARUNLOCKUPGRADEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5ADF40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYMEMBERLINKROLETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B3390)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYTRAILENDEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AB840)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYUPGRADEREFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0x1D5B1B20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SETNODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D5B2710)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SHOWSTAREFFECT_OFFSET UNITYSDK_OFFSET(0x1D5AFA60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController_TypeDefinitionIndex = 65965;

	class GridFightEffectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::Client::GridFightUnlockParticleEffect*>* _UnlockEffects; // 0x18
		::System::Boolean _IsDisposing; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::UIPrefabLoader* _UnpooledPrefabLoader; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::DIJLKOGNMAF*>* _UnpooledEffects; // 0x30
		::UnityEngine::Transform* _PerspectiveRoot; // 0x38
		::UnityEngine::Camera* _PrespectiveCamera; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightTrailLayerQuality, ::System::String*>* _TraitLayerQualityToPath; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GridFightRoleChangeType, ::System::String*>* _RoleChangePath; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GridFightFlyType, ::System::String*>* _FlyEffectByType; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _TraitShowEffectByType; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _GrowUpEffectByRank; // 0x68
		::IONGFDBBCIF* _PoolMgr; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightParticleEffect*>* _ActivePersistentEquipEffects; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireOrbFlyEffect*>* _ActiveBonfireOrbFlyEffects; // 0x80
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::Client::GridFightAnimEffect*>* _ActiveShopRankUpEntrances; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightStarEffect*>* _ActiveStarEffects; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _ActiveStarPaths; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAhaGrowthUpEffect*>* _ActiveAhaGrowthUpEffects; // 0xA0
		::RPG::Client::GridFightFlyEffect* _ActiveAhaGrowthFlyEffect; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* _ActiveAttachedUIEffects; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::String*>* _RegisteredAttachedUIEffectPaths; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightMemberLinkEffect*>* _ActiveMemberLinkEffects; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleTraitEffect*>*>* _ActiveMemberLinkRoleTraitEffects; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _MemberLinkUIDsByTraitEffect; // 0xD0
		::System::Boolean _IsInitialized; // 0xD8
		// static const ::System::String* UnlockEffectPath; // 0x0
		// static const ::System::String* BONFIRE_ORB_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* BUY_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* EQUIP_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* GOLD_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* FAST_GOLD_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_PATH; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK1; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK2; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK3; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK4; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK5; // 0x0
		// static const ::System::String* ASTROPOLIS_TIER_EFFECT_PATH; // 0x0
		// static const ::System::String* ASTROPOLIS_LVUP_EFFECT_PATH; // 0x0
		// static const ::System::String* ASTROPOLIS_SHOP_TOAST_EFFECT_PATH; // 0x0
		// static const ::System::String* ASTROPOLIS_CARD_EFFECT_PATH; // 0x0
		// static const ::System::String* ASTROPOLIS_SHOP_BUTTON_ACTIVE_EVENT; // 0x0
		// static const ::System::String* _AstropolisShopToastFinishedEvent; // 0x0
		// static const ::System::String* UPGRADE_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* UPGRADE_1_STAR_REFRESH_EFFECT_PATH; // 0x0
		// static const ::System::String* UPGRADE_2_STAR_REFRESH_EFFECT_PATH; // 0x0
		// static const ::System::String* UPGRADE_3_STAR_REFRESH_EFFECT_PATH; // 0x0
		// static const ::System::String* UPGRADE_4_STAR_REFRESH_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_1_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_2_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_3_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_4_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_5_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_6_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_CYRENE_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_UPGRADE_EFFECT_PATH; // 0x0
		// static const ::System::String* GRID_PUTDOWN_EFFECT; // 0x0
		// static const ::System::String* CHARACTER_BUFF_PUTDOWN_EFFECT; // 0x0
		// static const ::System::String* EQUIP_ACTIVE_PATH; // 0x0
		// static const ::System::String* EQUIP_ACTIVE_MINI_PATH; // 0x0
		// static const ::System::String* EQUIP_UNLOCK_EFFECT_PATH; // 0x0
		// static const ::System::String* CORE_ROLE_BY_EQUIP_EFFECT_PATH; // 0x0
		// static const ::System::String* CORE_ROLE_EFFECT_PATH; // 0x0
		// static const ::System::String* BACK_STRENGTHEN_FRONT_EFFECT_PATH; // 0x0
		// static const ::System::String* COUNTER_KING_EFFECT_PATH; // 0x0
		// static const ::System::String* ENHANCE_CHOOSE_EFFECT_PATH; // 0x0
		// static const ::System::String* SILVERWolf_PANDORA_EQUIP_EFFECT_PATH; // 0x0
		// static const ::System::String* CYRENE_ACTIVE_EFFECT_PATH; // 0x0
		// static const ::System::String* BAND_ROLE_ACTIVE_EFFECT_PATH; // 0x0
		// static const ::System::String* MEMBER_LINK_ACTIVE_EFFECT_PATH; // 0x0
		// static const ::System::String* MEMBER_LINK_ACTIVE_EFFECT_NAME; // 0x0
		// static const ::System::String* BAND_ROLE_EFFECT_PATH; // 0x0
		// static const ::System::String* ROLE_GROWUP_BLUE_PATH; // 0x0
		// static const ::System::String* ROLE_GROWUP_YELLOW_PATH; // 0x0
		// static const ::System::String* ROLE_GROWUP_COLORFUL_PATH; // 0x0
		// static const ::System::String* FEIXIAO_GROWUP_EFFECT_PATH; // 0x0
		// static const ::System::String* ROLE_CHANGE_PATH; // 0x0
		// static const ::System::String* ROLE_CHANGE_TO_MEMORY; // 0x0
		// static const ::System::String* ROLE_CHANGE_NORMAL; // 0x0
		// static const ::System::String* ROLE_CHANGE_RARITY; // 0x0
		// static const ::System::String* AVATAR_UNLOCK_TRAIL_EFFECT_PATH; // 0x0
		// static const ::System::String* AVATAR_UNLOCK_UPGRADE_EFFECT_PATH; // 0x0
		// static const ::System::String* HACK_COPY_ROLE_EFFECT_PATH; // 0x0
		// static const ::System::String* ROLE_SHOP_REPLACE; // 0x0
		// static const ::System::String* SHOP_RANK_UP_ENTRANCE_PATH; // 0x0
		// static const ::System::String* AHA_COSTUP_SWEEP_PATH; // 0x0
		// static const ::System::String* AHA_COSTUP_PATH; // 0x0
		// static const ::System::String* SHOP_HIDE_GOODS_BLACK_HOLE; // 0x0
		// static const ::System::String* STAR_EFFECT_PATH; // 0x0
		// static const ::System::String* STAR_ULTRA_EFFECT_PATH; // 0x0
		// static const ::System::String* MOON_GAME_GOLD_EFFECT_PATH; // 0x0
		// static const ::System::String* MEMBER_LINK_LINE_EFFECT_PATH; // 0x0
		// static const ::System::String* SPOTLIGHT_INFECTION_EFFECT_PATH; // 0x0
		// static const ::System::String* CLARA_ENHANCE_EFFECT_PATH; // 0x0
		// static const ::System::String* TRAIL_ENHANCE_EFFECT_PATH; // 0x0
		// static const ::System::String* TRAIL_END_EFFECT_PATH; // 0x0
		// static const ::System::String* PARTNER_BLACK_HOLE_EFFECT_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void PlayUnlockEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUNLOCKEFFECT_OFFSET))(this, a1);
		}

		::System::Void StopUnlockEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_STOPUNLOCKEFFECT_OFFSET))(this, a1);
		}

		::System::Void ReturnUnlockEffect(::RPG::Client::GridFightUnlockParticleEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightUnlockParticleEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_RETURNUNLOCKEFFECT_OFFSET))(this, a1);
		}

		::System::Void _DisposeUnlockEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__DISPOSEUNLOCKEFFECTS_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void DestroyUnpooledEffect(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DESTROYUNPOOLEDEFFECT_OFFSET))(this, a1);
		}

		::System::Void _DisposeUnpooledEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__DISPOSEUNPOOLEDEFFECTS_OFFSET))(this);
		}

		::UnityEngine::Camera* get_PerspectiveCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVECAMERA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_PerspectiveRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_PerspectiveOrTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEORTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_ROOT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_INIT_OFFSET))(this);
		}

		static ::ICIMFKPDDMD_CEHBLMGKHHN* CreateEffectPoolConfig(::UnityEngine::Transform* a1)
		{
			return ((::ICIMFKPDDMD_CEHBLMGKHHN*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CREATEEFFECTPOOLCONFIG_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void _DisposeEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__DISPOSEEFFECTS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetParticlePerspectiveCamera(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETPARTICLEPERSPECTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void PlayCyreneFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEFLYEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Action* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayFlyEffect_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightFlyType a3, ::System::Action* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayFlyEffect_2(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightFlyType a3, ::System::Action* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayRandomFly(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightFlyType a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYRANDOMFLY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayForgeFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightForgeItemData* a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightForgeItemData*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFORGEFLYEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayOrbFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GridFightOrbType a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightOrbType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYORBFLYEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Action* _CreateFlyAnimTrigger(::RPG::Client::GridFightFlyEffect* a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Action*(*)(::PVOID, ::RPG::Client::GridFightFlyEffect*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__CREATEFLYANIMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayTrailEndEffect(::RPG::Client::GridFightFlyEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlyEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYTRAILENDEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayBonfireOrbFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GridFightOrbType a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightOrbType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYBONFIREORBFLYEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DespawnAllBonfireOrbFlyEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DESPAWNALLBONFIREORBFLYEFFECTS_OFFSET))(this);
		}

		::System::String* _GetFlyEffectPath(::RPG::Client::GridFightFlyType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightFlyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETFLYEFFECTPATH_OFFSET))(this, a1);
		}

		::System::Void PlayTraitActiveEffect(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAITACTIVEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayAstropolisShopToastEffect(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISSHOPTOASTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAstropolisCardEffect(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISCARDEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayAstropolisTierEffect(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISTIEREFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayAstropolisLvUpEffect(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYASTROPOLISLVUPEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayGrowupEffect(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGROWUPEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayFeixiaoGrowupEffect(::System::UInt32 a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFEIXIAOGROWUPEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlaySpotLightInfectionEffect(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSPOTLIGHTINFECTIONEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayClaraEnhanceEffect(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCLARAENHANCEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayTrailEnhanceEffect(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAILENHANCEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayHackCopyEffect(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYHACKCOPYEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayRoleTransferEffect(::System::UInt32 a1, ::RPG::Client::GridFightRoleChangeType a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRANSFEREFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayAvatarUnlockEffect(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAVATARUNLOCKEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayAvatarUnlockUpgradeEffect(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAVATARUNLOCKUPGRADEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayAvatarUnlockUpgradeEffect(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYAVATARUNLOCKUPGRADEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayGridPutDownEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayGridPutDownCharacterBuffEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNCHARACTERBUFFEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayEnhanceChooseEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYENHANCECHOOSEEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayPersistentEquipEffect(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYPERSISTENTEQUIPEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void StopPersistentEquipEffect(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_STOPPERSISTENTEQUIPEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayShopRoleReplace(::UnityEngine::Transform* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPROLEREPLACE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayShopHideGoodsBlackHole(::UnityEngine::Transform* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPHIDEGOODSBLACKHOLE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayShopRankUpEntrance(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPRANKUPENTRANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelShopRankUpEntrance(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CANCELSHOPRANKUPENTRANCE_OFFSET))(this, a1);
		}

		::System::Void PlayAhaGrowthUpEffect(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAHAGROWTHUPEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CancelAhaGrowthUpEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CANCELAHAGROWTHUPEFFECT_OFFSET))(this);
		}

		::System::Void PlayAhaGrowthFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYAHAGROWTHFLYEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CancelAhaGrowthFlyEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_CANCELAHAGROWTHFLYEFFECT_OFFSET))(this);
		}

		::System::Void ShowStarEffect(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SHOWSTAREFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void ShowUltraStarEffect(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SHOWULTRASTAREFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchStarColorToUltra(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SWITCHSTARCOLORTOULTRA_OFFSET))(this, a1);
		}

		::System::Void _ShowStarEffect(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SHOWSTAREFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideStarEffect(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDESTAREFFECT_OFFSET))(this, a1);
		}

		::System::Void HideAllStarEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEALLSTAREFFECTS_OFFSET))(this);
		}

		::System::Void PlayStarAddRing(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSTARADDRING_OFFSET))(this, a1, a2);
		}

		::System::Void SetStarRingLoopVisible(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETSTARRINGLOOPVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayMoonGameGoldTraitEffect(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYMOONGAMEGOLDTRAITEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowAttachedUIEffect(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SHOWATTACHEDUIEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void HideAttachedUIEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEATTACHEDUIEFFECT_OFFSET))(this, a1);
		}

		static ::System::Void _AttachToParent(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__ATTACHTOPARENT_OFFSET))(a1, a2);
		}

		::System::Boolean IsStarEffectActive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_ISSTAREFFECTACTIVE_OFFSET))(this, a1);
		}

		::System::Void PlayUpgradeEffect(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Int32 a4, ::System::Action* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayUpgradeEffect_1(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayUpgradeEffect_2(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayUpgradeFlyEffect(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEFLYEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _PlayUpgradeRefreshEffect(::UnityEngine::Transform* a1, ::System::Int32 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYUPGRADEREFRESHEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayCyreneActiveEffect(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEACTIVEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayPartnerBlackHoleEffect(::UnityEngine::Transform* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::UInt32, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYPARTNERBLACKHOLEEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayConsumeEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GridFightConsumeType a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightConsumeType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCONSUMEEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayEquipEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::System::Int32 a5, ::System::Action* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _SetNodeVisible(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SETNODEVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayEquipActiveEffect(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayEquipActiveEffect_1(::System::UInt32 a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* _GetEquipActivePrefabPath(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETEQUIPACTIVEPREFABPATH_OFFSET))(this, a1);
		}

		::System::Void PlayEquipUnlockEffect(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPUNLOCKEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayRoleTraitEffect(::System::UInt32 a1, ::RPG::Client::GridFightTraitEffectEffType a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTraitEffectEffType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRAITEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayMemberLinkRoleTraitEffects(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYMEMBERLINKROLETRAITEFFECTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayMemberLinkEffect(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYMEMBERLINKEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideMemberLinkEffect(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEMEMBERLINKEFFECT_OFFSET))(this, a1);
		}

		::System::Void HideMemberLinkEffectImmediate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEMEMBERLINKEFFECTIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Void _PlayMemberLinkRoleTraitEffect(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleTraitEffect*>* a2, ::System::UInt32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleTraitEffect*>*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYMEMBERLINKROLETRAITEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HideMemberLinkRoleTraitEffects(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_HIDEMEMBERLINKROLETRAITEFFECTS_OFFSET))(this, a1);
		}

		::System::Void _OnMemberPosInfoChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__ONMEMBERPOSINFOCHANGED_OFFSET))(this, a1);
		}

	};
}
