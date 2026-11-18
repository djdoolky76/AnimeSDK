#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIDJKGFGAOA.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/IEGBBFDBGAA.h"
#include "unitysdk/MAJEEMPKEAG.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/ADNELOCHEOC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BFPHLKHACKB;
class ENGKPGFGGLM;
class KNMBIAOBLLK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_APPLYTRIGGERHITANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x120C12A0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x120B7290)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x120C0C30)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYDEVLEVEL_OFFSET UNITYSDK_OFFSET(0x120C04C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_OFFSET UNITYSDK_OFFSET(0x120BF490)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_FIREZENKOVYOKAIHENSHINEVT_OFFSET UNITYSDK_OFFSET(0x120B9CD0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETALLYOKAIAVATARLIST_OFFSET UNITYSDK_OFFSET(0x120BB140)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETFIRSTPRIORITYINSTAGEDURATIONRATIO_OFFSET UNITYSDK_OFFSET(0x120BE1F0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETLOCALCONTROLYOKAIAVATAR_OFFSET UNITYSDK_OFFSET(0x120BB0E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETRARITYMATERIAL_OFFSET UNITYSDK_OFFSET(0x120C14C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETUSEITEMDISABLEMAT_OFFSET UNITYSDK_OFFSET(0x120C15E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETWHEELSLOTPROVIDER_OFFSET UNITYSDK_OFFSET(0x120BB180)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARBYSLOTID_OFFSET UNITYSDK_OFFSET(0x120B8F20)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_1_OFFSET UNITYSDK_OFFSET(0x120BA300)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_OFFSET UNITYSDK_OFFSET(0x120BA220)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFOBYSLOTID_OFFSET UNITYSDK_OFFSET(0x120B9240)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x120BA600)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIINSTAGEDURATIONMAT_OFFSET UNITYSDK_OFFSET(0x120C15A0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x120B51E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x120B5170)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITDATA_OFFSET UNITYSDK_OFFSET(0x120B6010)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x120BF170)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISCONTROLYOKAIAVATARREADY_OFFSET UNITYSDK_OFFSET(0x120BAC90)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISINCONTROLYOKAIHENSHINSTATE_OFFSET UNITYSDK_OFFSET(0x120BB090)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIAVATARAVAILABLE_OFFSET UNITYSDK_OFFSET(0x120B9720)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_1_OFFSET UNITYSDK_OFFSET(0x120BED10)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_OFFSET UNITYSDK_OFFSET(0x120BAA60)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISZENKOVITEMYOKAI_OFFSET UNITYSDK_OFFSET(0x120BA860)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAICOOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x120BDBE0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAIINSTAGEDURATION_OFFSET UNITYSDK_OFFSET(0x120BDED0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x120B5250)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x120B6160)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONKOVBAGSYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x120C11F0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x120B8BC0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET UNITYSDK_OFFSET(0x120BEFC0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x120B7A70)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONZENKOVYOKAISKILLUPDATE_OFFSET UNITYSDK_OFFSET(0x120C1170)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPMUTEZENKOVYOKAITAG_OFFSET UNITYSDK_OFFSET(0x120BEE40)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x120BE700)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x120BE470)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PRELOADMATERIALS_OFFSET UNITYSDK_OFFSET(0x120B55E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHMUTEZENKOVYOKAITAG_OFFSET UNITYSDK_OFFSET(0x120BE870)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x120BE5E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x120BE350)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x120B85F0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x120BF440)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETCONTROLYOKAIINPUTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x120B66C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETDELAYINPUTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x120B6E30)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETZENKOVYOKAICOOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x120BD950)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHINZENKOVYOKAI_OFFSET UNITYSDK_OFFSET(0x120BB1C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_1_OFFSET UNITYSDK_OFFSET(0x120BC320)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_OFFSET UNITYSDK_OFFSET(0x120BC190)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKCD_OFFSET UNITYSDK_OFFSET(0x120B8000)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKINSTAGEDURATION_OFFSET UNITYSDK_OFFSET(0x120B8200)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYCONSUMEYOKAIAVATARITEM_OFFSET UNITYSDK_OFFSET(0x120B9ED0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYGETYOKAICDBYITEMID_OFFSET UNITYSDK_OFFSET(0x120B93C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYHANDLEBEINGHITEVT_OFFSET UNITYSDK_OFFSET(0x120BD340)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYSYNCYOKAIAVATARPOSROTTOLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x120B7CB0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYTRIGGERYOKAIAVATAR_OFFSET UNITYSDK_OFFSET(0x120B9590)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x120C1620)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_G__ISENTITYINPRELOADRUNTIMEDATAS_52_0_OFFSET UNITYSDK_OFFSET(0x120C0D00)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x120C1710)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x120C17A0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x120C1830)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x120C18D0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovYokaiHenshinSubSystem_TypeDefinitionIndex = 73820;

	class ZenkovYokaiHenshinSubSystem
	{
	public:
		::MoleMole::EntityHandle _lastHenshinLocalAvatar; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _overrideSwitchOutExQTEDatas; // 0x20
		::KNMBIAOBLLK* _zenkovWheelSlotProvider; // 0x28
		::UnityEngine::Material* _useItemDisableMat; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _matAssetHandles; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _allYokaiAvatarList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _muteYokaiTagDict; // 0x48
		::UnityEngine::Material* _yokaiInStageDurationMat; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _rarityMatDict; // 0x58
		::MoleMole::EntityHandle _localControlYokaiAvatar; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::BFPHLKHACKB*>* _yokaiAvatarInfoDict; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* _overrideSwitchOutQTEDatas; // 0x78
		::MAJEEMPKEAG _curControlYokaiState; // 0x80
		::System::Int32 _overrideControlEntityVersion; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isOverrideSwitchOutQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTQTE_OFFSET))(this);
		}

		::System::Boolean get__isOverrideSwitchOutExQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTEXQTE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::MoleMole::EntityHandle GetYokaiAvatarBySlotID(::System::Int32 slotID)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARBYSLOTID_OFFSET))(this, slotID);
		}

		::BFPHLKHACKB* GetYokaiAvatarInfoBySlotID(::System::Int32 slotID)
		{
			return ((::BFPHLKHACKB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFOBYSLOTID_OFFSET))(this, slotID);
		}

		::System::Boolean TryGetYokaiCdByItemId(::System::Int32 itemId, ::System::Boolean& isInCd, ::System::Single& remainSec, ::System::Single& totalSec)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYGETYOKAICDBYITEMID_OFFSET))(this, itemId, isInCd, remainSec, totalSec);
		}

		::System::Boolean TryTriggerYokaiAvatar(::System::Int32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYTRIGGERYOKAIAVATAR_OFFSET))(this, slotID);
		}

		::System::Void GetYokaiAvatarCoolDownInfo(::System::Int32 slotID, ::System::Boolean& isInCD, ::System::Single& ratio, ::System::Single& cdTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_OFFSET))(this, slotID, isInCD, ratio, cdTime);
		}

		::System::Void GetYokaiAvatarCoolDownInfo_1(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Boolean& isInCD, ::System::Single& ratio, ::System::Single& cdTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_1_OFFSET))(this, yokaiAvatar, isInCD, ratio, cdTime);
		}

		::BFPHLKHACKB* GetYokaiAvatarInfo(::MoleMole::Battle::Entity* yokaiAvatar)
		{
			return ((::BFPHLKHACKB*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFO_OFFSET))(this, yokaiAvatar);
		}

		static ::System::Boolean IsZenkovItemYokai(::System::Int32 itemID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISZENKOVITEMYOKAI_OFFSET))(itemID);
		}

		::System::Boolean IsYokaiAvatarAvailable(::System::Int32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIAVATARAVAILABLE_OFFSET))(this, slotID);
		}

		::System::Boolean IsControlYokaiAvatarReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISCONTROLYOKAIAVATARREADY_OFFSET))(this);
		}

		::System::Boolean IsInControlYokaiHenshinState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISINCONTROLYOKAIHENSHINSTATE_OFFSET))(this);
		}

		::MoleMole::EntityHandle GetLocalControlYokaiAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETLOCALCONTROLYOKAIAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetAllYokaiAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETALLYOKAIAVATARLIST_OFFSET))(this);
		}

		::KNMBIAOBLLK* GetWheelSlotProvider()
		{
			return ((::KNMBIAOBLLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETWHEELSLOTPROVIDER_OFFSET))(this);
		}

		::System::Void SwitchInZenkovYokai(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Boolean isControlYokai, ::MoleMole::Config::ConfigPosRot* configPosRot, ::System::Int32 switchInIndex, ::System::String* lockTargetID, ::System::Boolean muteControlSkillA, ::System::Boolean muteControlSkillB, ::System::Boolean muteControlSkillD, ::System::Boolean muteControlSkillUltra, ::System::Single inStageDuration)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Config::ConfigPosRot*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHINZENKOVYOKAI_OFFSET))(this, yokaiAvatar, isControlYokai, configPosRot, switchInIndex, lockTargetID, muteControlSkillA, muteControlSkillB, muteControlSkillD, muteControlSkillUltra, inStageDuration);
		}

		::System::Void SwitchOutZenkovYokai(::System::Int32 slotID, ::System::Int32 switchOutIndex, ::System::Boolean isInterrupt, ::System::Int32 interruptSwitchInIndex, ::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_OFFSET))(this, slotID, switchOutIndex, isInterrupt, interruptSwitchInIndex, evt);
		}

		::System::Void SwitchOutZenkovYokai_1(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Int32 switchOutIndex, ::System::Boolean isInterrupt, ::System::Int32 interruptSwitchInIndex, ::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Int32, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_1_OFFSET))(this, yokaiAvatar, switchOutIndex, isInterrupt, interruptSwitchInIndex, evt);
		}

		::System::Void SetZenkovYokaiCoolDownTime(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Single coolDownTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETZENKOVYOKAICOOLDOWNTIME_OFFSET))(this, yokaiAvatar, coolDownTime);
		}

		::System::Void ModifyZenkovYokaiCoolDownTime(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Single amount, ::System::Single percent, ::MoleMole::Config::PropertyModifyFunction modifyFunction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAICOOLDOWNTIME_OFFSET))(this, yokaiAvatar, amount, percent, modifyFunction);
		}

		::System::Void ModifyZenkovYokaiInStageDuration(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Single amount, ::System::Single percent, ::MoleMole::Config::PropertyModifyFunction modifyFunction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAIINSTAGEDURATION_OFFSET))(this, yokaiAvatar, amount, percent, modifyFunction);
		}

		::System::Boolean GetFirstPriorityInStageDurationRatio(::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETFIRSTPRIORITYINSTAGEDURATIONRATIO_OFFSET))(this, ratio);
		}

		::System::Void PushZenkovYokaiSwitchOutQTE(::System::String* tag, ::System::Boolean isQTE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTQTE_OFFSET))(this, tag, isQTE);
		}

		::System::Void PopZenkovYokaiSwitchOutQTE(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTQTE_OFFSET))(this, tag);
		}

		::System::Void PushZenkovYokaiSwitchOutExQTE(::System::String* tag, ::System::Boolean isExQTE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTEXQTE_OFFSET))(this, tag, isExQTE);
		}

		::System::Void PopZenkovYokaiSwitchOutExQTE(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTEXQTE_OFFSET))(this, tag);
		}

		::System::Void PushMuteZenkovYokaiTag(::System::String* handlerTag, ::System::Collections::Generic::List_1<::System::String*>* muteYokaiTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHMUTEZENKOVYOKAITAG_OFFSET))(this, handlerTag, muteYokaiTags);
		}

		::System::Void PopMuteZenkovYokaiTag(::System::String* handlerTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPMUTEZENKOVYOKAITAG_OFFSET))(this, handlerTag);
		}

		::System::Void OnPreBigSceneTeleportByReload(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET))(this, args);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITDATA_OFFSET))(this);
		}

		::System::Void InitYokaiAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITYOKAIAVATARINFO_OFFSET))(this);
		}

		::System::Void RefreshYokaiAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHYOKAIAVATARINFO_OFFSET))(this);
		}

		::System::Void DoRefreshYokaiAvatarInfoByDevLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYDEVLEVEL_OFFSET))(this);
		}

		::System::Void DoRefreshYokaiAvatarInfoByZenkovGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_OFFSET))(this);
		}

		::System::Void ClearYokaiAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARYOKAIAVATARINFO_OFFSET))(this);
		}

		::System::Boolean IsYokaiMuted(::BFPHLKHACKB* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFPHLKHACKB*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_OFFSET))(this, info);
		}

		::System::Boolean IsYokaiMuted_1(::MoleMole::EntityHandle yokaiAvatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_1_OFFSET))(this, yokaiAvatar);
		}

		::System::Void TickCD(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKCD_OFFSET))(this, deltaTime);
		}

		::System::Void TickInStageDuration(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKINSTAGEDURATION_OFFSET))(this, deltaTime);
		}

		::System::Void RefreshItemCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHITEMCOUNT_OFFSET))(this);
		}

		::System::Void TryConsumeYokaiAvatarItem(::System::Int32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYCONSUMEYOKAIAVATARITEM_OFFSET))(this, slotID);
		}

		::System::Void FireZenkovYokaiHenshinEvt(::MoleMole::Battle::Entity* entity, ::IEGBBFDBGAA notifyType, ::EIDJKGFGAOA switchOutType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::IEGBBFDBGAA, ::EIDJKGFGAOA))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_FIREZENKOVYOKAIHENSHINEVT_OFFSET))(this, entity, notifyType, switchOutType);
		}

		::System::Void SetDelayInputEnableState(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETDELAYINPUTENABLESTATE_OFFSET))(this, isEnable);
		}

		::System::Void SetControlYokaiInputEnableState(::System::Boolean isEnable, ::System::Boolean muteControlSkillA, ::System::Boolean muteControlSkillB, ::System::Boolean muteControlSkillD, ::System::Boolean muteControlSkillUltra)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETCONTROLYOKAIINPUTENABLESTATE_OFFSET))(this, isEnable, muteControlSkillA, muteControlSkillB, muteControlSkillD, muteControlSkillUltra);
		}

		::System::Void TrySyncYokaiAvatarPosRotToLocalAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYSYNCYOKAIAVATARPOSROTTOLOCALAVATAR_OFFSET))(this);
		}

		::System::Void OnZenkovYokaiSkillUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONZENKOVYOKAISKILLUPDATE_OFFSET))(this, obj);
		}

		::System::Void OnKovBagSyncHandler(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONKOVBAGSYNCHANDLER_OFFSET))(this, args);
		}

		::System::Boolean TryHandleBeingHitEvt(::ENGKPGFGGLM* evt, ::UnityEngine::Vector3& hitForward)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYHANDLEBEINGHITEVT_OFFSET))(this, evt, hitForward);
		}

		::System::Void ApplyTriggerHitAnimatorParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_APPLYTRIGGERHITANIMATORPARAM_OFFSET))(this);
		}

		::UnityEngine::Material* GetRarityMaterial(::System::Int32 rarity)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETRARITYMATERIAL_OFFSET))(this, rarity);
		}

		::UnityEngine::Material* GetYokaiInStageDurationMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIINSTAGEDURATIONMAT_OFFSET))(this);
		}

		::UnityEngine::Material* GetUseItemDisableMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETUSEITEMDISABLEMAT_OFFSET))(this);
		}

		::System::Void PreloadMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PRELOADMATERIALS_OFFSET))(this);
		}

		::System::Void ClearMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARMATERIALCACHE_OFFSET))(this);
		}

		static ::System::Boolean _DoRefreshYokaiAvatarInfoByZenkovGame_g__IsEntityInPreloadRuntimeDatas_52_0(::System::Collections::Generic::IReadOnlyList_1<::ADNELOCHEOC>* tmpDataList, ::MoleMole::EntityHandle checkEntity)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::ADNELOCHEOC>*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_G__ISENTITYINPRELOADRUNTIMEDATAS_52_0_OFFSET))(tmpDataList, checkEntity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
