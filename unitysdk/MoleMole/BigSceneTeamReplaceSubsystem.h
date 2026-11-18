#pragma once
#include "unitysdk/unitysdk.h"

class BPHGNMNLLHF;
class DMCCPINHAGM;
class ENGKPGFGGLM;
class OGJNHDLJIBM;
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHANGETEAMDATAS_OFFSET UNITYSDK_OFFSET(0x174D96B0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHECKNEEDREALODAVATAR_OFFSET UNITYSDK_OFFSET(0x174D8450)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GETAVATARPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x174D9D60)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_FORCEOPENTEAM_OFFSET UNITYSDK_OFFSET(0x174D7410)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_ISCUSTOMTEAM_OFFSET UNITYSDK_OFFSET(0x174D7430)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_SKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x174D7450)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_HIDEBATTLEBUDDY_OFFSET UNITYSDK_OFFSET(0x174DA630)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_INITPREDATA_OFFSET UNITYSDK_OFFSET(0x174D7C90)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARAWAKENDIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D8540)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARITEMDIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D8700)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARSKINDIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D8810)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISBUDDYITEMDIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D85A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENDATASDIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D90A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENSUITDIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D8920)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISPROPERTYDIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D95E0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISWEAPONDATADIFFERENT_OFFSET UNITYSDK_OFFSET(0x174D8D30)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174DA940)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x174DA010)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVTLEVELREPLACETEAMAVATARCOMPLETE_OFFSET UNITYSDK_OFFSET(0x174DA5E0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUIROLESELECTCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x174D7980)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_PLAYMATEFFECTREPLACEFINISH_OFFSET UNITYSDK_OFFSET(0x174DA770)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x174D7470)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERSKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x174D7900)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x174D76F0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_FORCEOPENTEAM_OFFSET UNITYSDK_OFFSET(0x174D7420)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_ISCUSTOMTEAM_OFFSET UNITYSDK_OFFSET(0x174D7440)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_SKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x174D7460)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_UNREGISTERSKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x174D7940)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x174DABE0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_0_OFFSET UNITYSDK_OFFSET(0x174DAC40)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_1_OFFSET UNITYSDK_OFFSET(0x174DAC60)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174DAEB0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x174DAF40)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x174DAFD0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTeamReplaceSubsystem_TypeDefinitionIndex = 78373;

	class BigSceneTeamReplaceSubsystem
	{
	public:
		// static const ::System::String* MuteLogicTimerTag; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _preEquipmentDatas; // 0x10
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* _preAvatarItemList; // 0x18
		::OGJNHDLJIBM* _generalEventCollection; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _avatarsAwakenChangeRecord; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DMCCPINHAGM*>* _preWeaponDatas; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _preAvatarSkinDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* _prePropertyMap; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>* _preSuitDatas; // 0x48
		::System::Boolean _ForceOpenTeam_k__BackingField; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 _preBuddyId; // 0x54
		::System::Boolean _forceCheckReload; // 0x58
		::System::Boolean _IsCustomTeam_k__BackingField; // 0x59
		::System::Boolean _SkipLoadingReplace_k__BackingField; // 0x5A
		::System::Boolean _curIsMainUIHide; // 0x5B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ForceOpenTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_FORCEOPENTEAM_OFFSET))(this);
		}

		::System::Void set_ForceOpenTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_FORCEOPENTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_IsCustomTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_ISCUSTOMTEAM_OFFSET))(this);
		}

		::System::Void set_IsCustomTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_ISCUSTOMTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_SkipLoadingReplace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_SKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void set_SkipLoadingReplace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_SKIPLOADINGREPLACE_OFFSET))(this, value);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void RegisterSkipLoadingReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERSKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void UnregisterSkipLoadingReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_UNREGISTERSKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void RegisterUIEventNotifyType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET))(this);
		}

		::System::Void OnUIRoleSelectChangeState(::System::Boolean mainUIHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUIROLESELECTCHANGESTATE_OFFSET))(this, mainUIHide);
		}

		::System::Void CheckNeedRealodAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHECKNEEDREALODAVATAR_OFFSET))(this);
		}

		::System::Boolean IsAvatarItemDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARITEMDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsAvatarSkinDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARSKINDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsAvatarAwakenDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARAWAKENDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsBuddyItemDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISBUDDYITEMDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsPropertyDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISPROPERTYDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsEquipmenSuitDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENSUITDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsWeaponDataDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISWEAPONDATADIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsEquipmenDatasDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENDATASDIFFERENT_OFFSET))(this);
		}

		::System::Void ChangeTeamDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHANGETEAMDATAS_OFFSET))(this);
		}

		::System::Void InitPreData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_INITPREDATA_OFFSET))(this);
		}

		::System::Void GetAvatarPropertyMap(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*& avatarPropertyMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GETAVATARPROPERTYMAP_OFFSET))(this, avatarPropertyMap);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEvtLevelReplaceTeamAvatarComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVTLEVELREPLACETEAMAVATARCOMPLETE_OFFSET))(this);
		}

		::System::Void HideBattleBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_HIDEBATTLEBUDDY_OFFSET))(this);
		}

		::System::Void PlayMatEffectReplaceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_PLAYMATEFFECTREPLACEFINISH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void _RegisterUIEventNotifyType_b__27_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_0_OFFSET))(this, args);
		}

		::System::Void _RegisterUIEventNotifyType_b__27_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__27_1_OFFSET))(this, args);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
