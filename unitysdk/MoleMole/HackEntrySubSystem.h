#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraHackOperateType.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackEntrySubSystemMode.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_InteractState.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class GEIHCPAOKKK;
namespace MoleMole { class HackControllableSubsystem; }
namespace MoleMole { class HackEntrySubSystem_HackTarget; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHack; }
namespace MoleMole::Config { class HackObjectTrait; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_HACKENTRYSUBSYSTEM_ALLOCATEHITTARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1A9025E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_APPLYCAMERAHACKMODEVISUALS_OFFSET UNITYSDK_OFFSET(0x1A905010)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CACHEFORWARDANGLERANGE_OFFSET UNITYSDK_OFFSET(0x1A902720)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_1_OFFSET UNITYSDK_OFFSET(0x1A8FEB00)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_OFFSET UNITYSDK_OFFSET(0x1A9024B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKBLOCKWITHCAMERA_OFFSET UNITYSDK_OFFSET(0x1A900BC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKFORWARDANGLERANGE_OFFSET UNITYSDK_OFFSET(0x1A9007A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETINTERACTDISTANCEANDCAMERAANGLE_OFFSET UNITYSDK_OFFSET(0x1A900210)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETVALID_OFFSET UNITYSDK_OFFSET(0x1A900020)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKIGNOREBLOCKTAG_OFFSET UNITYSDK_OFFSET(0x1A902980)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINSCREENRANGE_OFFSET UNITYSDK_OFFSET(0x1A9010B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINTERACTWITHMODE_OFFSET UNITYSDK_OFFSET(0x1A906340)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_COLLECTALLHACKTARGETS_OFFSET UNITYSDK_OFFSET(0x1A8FA840)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ENDINTERACT_OFFSET UNITYSDK_OFFSET(0x1A903660)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETHACKTARGETVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1A903E40)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETINTERACTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A902C60)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETMAXINDICATORCOUNTFORCURRENTMODE_OFFSET UNITYSDK_OFFSET(0x1A8FFE40)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETPRIORITYCENTERVIEWPORTBYMODE_OFFSET UNITYSDK_OFFSET(0x1A8FFAA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETRANGECENTERVIEWPORTBYMODE_OFFSET UNITYSDK_OFFSET(0x1A8FFC70)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_BUTTONINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A8F9C80)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_CURRENTSUBSYSTEMSYSTEMMODE_OFFSET UNITYSDK_OFFSET(0x1A8F9BD0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_INTERACTIVE_OFFSET UNITYSDK_OFFSET(0x1A8F9BE0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_ISHACKFUNCTIONEFFECTIVEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A8F9B70)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_SELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x1A8F9E20)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGETMANUALLY_OFFSET UNITYSDK_OFFSET(0x1A901B50)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISCAMERASCANTARGET_OFFSET UNITYSDK_OFFSET(0x1A8F9C90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISINENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1A8FDC00)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISINTERACTINGTARGET_OFFSET UNITYSDK_OFFSET(0x1A902C00)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISINZIPLINE_OFFSET UNITYSDK_OFFSET(0x1A902250)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANOREAVESDROPTARGET_OFFSET UNITYSDK_OFFSET(0x1A901290)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANTARGET_OFFSET UNITYSDK_OFFSET(0x1A8F9DA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDFORINTERACTUI_OFFSET UNITYSDK_OFFSET(0x1A902E50)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDINCAMERAHACKMODE_OFFSET UNITYSDK_OFFSET(0x1A902DE0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_MUTEINTERACTFORHACKMODE_OFFSET UNITYSDK_OFFSET(0x1A905550)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NORMALIZEANGLETO180_OFFSET UNITYSDK_OFFSET(0x1A9062B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYALLVISIBLEHACKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A8FF840)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELINTERACTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x1A9038F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELSELECTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x1A8FF650)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYFOCUSSELECTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x1A901320)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYHACKPOINTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A8FF900)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTLOSEFOCUS_OFFSET UNITYSDK_OFFSET(0x1A901590)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A903AF0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYSTARTINTERACTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x1A903350)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A8F9E30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9048A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCANCELLEDIFPENDING_OFFSET UNITYSDK_OFFSET(0x1A9053E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A904EB0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET UNITYSDK_OFFSET(0x1A904760)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET UNITYSDK_OFFSET(0x1A904800)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCONTROLLABLETARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x1A905E20)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A8FAFA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1A8FE2C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREMOVE_1_OFFSET UNITYSDK_OFFSET(0x1A8FE510)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x1A8FF5F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A8FE240)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A9016B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONUILOCKCHANGED_OFFSET UNITYSDK_OFFSET(0x1A902020)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A901E90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A8FBDD0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHALLHACKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A8FC2A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHFUNCTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A8FA610)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHHACKTARGET_OFFSET UNITYSDK_OFFSET(0x1A901DC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x1A8FAB80)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8FB9E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SENDTELEMETRYDATAONINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A903FB0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETALLTARGETEFFECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A9049D0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETFORCELOCK_OFFSET UNITYSDK_OFFSET(0x1A902200)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETFORCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A9021B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETLOCALAVATAROCCLUDEDOVERLAY_OFFSET UNITYSDK_OFFSET(0x1A905750)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETSYSTEMMODE_OFFSET UNITYSDK_OFFSET(0x1A905080)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETTARGETBREATHINGEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8FDF70)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SHOULDHIDEINTERACTPOINTTIPS_OFFSET UNITYSDK_OFFSET(0x1A902EC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SORTBYCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x1A902B10)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_STARTINTERACT_OFFSET UNITYSDK_OFFSET(0x1A9030A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TICKINTERACTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A8FDB70)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYGETHACKTARGETDATA_OFFSET UNITYSDK_OFFSET(0x1A904680)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYREGISTERHACKTARGET_OFFSET UNITYSDK_OFFSET(0x1A901D40)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYRESOLVEPENDINGSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x1A8FF000)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCANAFTERDETAILFADEIN_OFFSET UNITYSDK_OFFSET(0x1A903D10)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCAN_OFFSET UNITYSDK_OFFSET(0x1A903D60)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYUNREGISTERHACKTARGET_OFFSET UNITYSDK_OFFSET(0x1A901E30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8FBBF0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A906580)
#define MOLEMOLE_HACKENTRYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A906400)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A9065A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A906630)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A9066C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A906750)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A9067E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A906870)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_TypeDefinitionIndex = 70987;

	class HackEntrySubSystem
	{
	public:
		static ::System::Int32* StaticGet_HackInteractPriority()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HackEntrySubSystem_TypeDefinitionIndex)->GetStaticField(0x12950);
		}
		static ::System::Single* StaticGet_tickTimeSpan()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HackEntrySubSystem_TypeDefinitionIndex)->GetStaticField(0x12954);
		}
		// static const ::System::String* InteractTag; // 0x0
		// static const ::System::String* MuteCommonInteractTag; // 0x0
		// static const ::System::String* MuteMainCityCommonInteractTag; // 0x0
		// static const ::System::String* MuteInteractInHackModeTag; // 0x0
		// static const ::System::String* MuteMainCityInteractInHackModeTag; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* hackTargetList; // 0x10
		::MoleMole::HackEntrySubSystem_HackTarget* selectedTarget; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* hackTargetIndexDic; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* visableSortHackTargetList; // 0x28
		::MoleMole::HackEntrySubSystem_HackTarget* pendingWaitFocusSelectEffectTarget; // 0x30
		::MoleMole::HackControllableSubsystem* _hackControllableSubsystem; // 0x38
		::System::Boolean _buttonInteractable; // 0x40
		::System::Boolean isHackFunctionUnlock; // 0x41
		::System::Boolean _forceUnlock; // 0x42
		::System::Boolean isInteractSkillActive; // 0x43
		::System::Single tickTimer; // 0x44
		::UnityEngine::LayerMask blockLayerMask; // 0x48
		::System::UInt32 _cameraHackTransitionToken; // 0x4C
		::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode _systemMode; // 0x50
		::System::Single interactTimer; // 0x54
		::System::Boolean enableInteract; // 0x58
		::System::Boolean _forceLock; // 0x59
		::System::Boolean _cameraHackTransitionHideEffects; // 0x5A
		::System::Boolean _isNewOpenHackEntrySubSystem; // 0x5B
		::MoleMole::HackEntrySubSystem_InteractState currentSelectInteractState; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsHackFunctionEffectiveUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_ISHACKFUNCTIONEFFECTIVEUNLOCK_OFFSET))(this);
		}

		::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode get_CurrentSubSystemSystemMode()
		{
			return ((::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_CURRENTSUBSYSTEMSYSTEMMODE_OFFSET))(this);
		}

		::System::Boolean get_Interactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_INTERACTIVE_OFFSET))(this);
		}

		::System::Boolean get_ButtonInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_BUTTONINTERACTABLE_OFFSET))(this);
		}

		::System::Boolean IsCameraScanTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISCAMERASCANTARGET_OFFSET))(this, target);
		}

		::MoleMole::HackEntrySubSystem_HackTarget* get_SelectedTarget()
		{
			return ((::MoleMole::HackEntrySubSystem_HackTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_SELECTEDTARGET_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREADY_OFFSET))(this, entityId);
		}

		::System::Void OnEntityRemove(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREMOVE_OFFSET))(this, entity);
		}

		::System::Void OnEntityRemove_1(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREMOVE_1_OFFSET))(this, entityId);
		}

		::System::Void NotifyAllVisibleHackTargetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYALLVISIBLEHACKTARGETSTATE_OFFSET))(this);
		}

		::System::Void RefreshAllHackTargetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHALLHACKTARGETSTATE_OFFSET))(this);
		}

		::System::Void TickInteractProgress(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TICKINTERACTPROGRESS_OFFSET))(this, deltaTime);
		}

		static ::System::Boolean IsScanTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANTARGET_OFFSET))(target);
		}

		static ::System::Boolean IsScanOrEavesdropTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANOREAVESDROPTARGET_OFFSET))(target);
		}

		::System::Int32 GetMaxIndicatorCountForCurrentMode(::MoleMole::Config::ConfigHack* config)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETMAXINDICATORCOUNTFORCURRENTMODE_OFFSET))(this, config);
		}

		::System::Void HackTargetManually(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGETMANUALLY_OFFSET))(this, entity);
		}

		::System::Void TryRegisterHackTarget(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYREGISTERHACKTARGET_OFFSET))(this, entity);
		}

		::System::Void RefreshHackTarget(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHHACKTARGET_OFFSET))(this, entity);
		}

		::System::Void TryUnregisterHackTarget(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYUNREGISTERHACKTARGET_OFFSET))(this, entity);
		}

		::System::Void OnUnlock(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONUNLOCK_OFFSET))(this, obj);
		}

		::System::Void OnUILockChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONUILOCKCHANGED_OFFSET))(this, obj);
		}

		::System::Void SetForceUnlock(::System::Boolean forceUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETFORCEUNLOCK_OFFSET))(this, forceUnlock);
		}

		::System::Void SetForceLock(::System::Boolean forceLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETFORCELOCK_OFFSET))(this, forceLock);
		}

		::System::Void RefreshFunctionUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHFUNCTIONUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsInZipLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISINZIPLINE_OFFSET))(this);
		}

		::System::Boolean IsInEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISINENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshInteractState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHINTERACTSTATE_OFFSET))(this);
		}

		::System::Void CollectAllHackTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_COLLECTALLHACKTARGETS_OFFSET))(this);
		}

		::System::Void CheckAndAddHackTarget(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* entityList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_OFFSET))(this, entityList);
		}

		::System::Boolean CheckAndAddHackTarget_1(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_1_OFFSET))(this, entity);
		}

		::System::Void CheckHackTargetInteractDistanceAndCameraAngle(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget, ::UnityEngine::Vector3 cameraPos, ::UnityEngine::Vector3 cameraForward, ::GEIHCPAOKKK* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETINTERACTDISTANCEANDCAMERAANGLE_OFFSET))(this, hackTarget, cameraPos, cameraForward, modelComponent);
		}

		static ::UnityEngine::Vector2 GetPriorityCenterViewportByMode(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode mode, ::MoleMole::Config::ConfigHack* config)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETPRIORITYCENTERVIEWPORTBYMODE_OFFSET))(mode, config);
		}

		static ::UnityEngine::Vector2 GetRangeCenterViewportByMode(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode mode, ::MoleMole::Config::ConfigHack* config)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETRANGECENTERVIEWPORTBYMODE_OFFSET))(mode, config);
		}

		::System::Boolean CheckInScreenRange(::UnityEngine::Camera* camera, ::MoleMole::HackEntrySubSystem_HackTarget* hackTarget, ::System::Single majorAxisLength, ::System::Single minorAxisLength, ::System::Single centerX, ::System::Single centerY)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::MoleMole::HackEntrySubSystem_HackTarget*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINSCREENRANGE_OFFSET))(this, camera, hackTarget, majorAxisLength, minorAxisLength, centerX, centerY);
		}

		::System::Boolean CheckBlockWithCamera(::UnityEngine::Vector3 cameraPos, ::MoleMole::HackEntrySubSystem_HackTarget* hackTarget, ::UnityEngine::LayerMask blockLayerMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::HackEntrySubSystem_HackTarget*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKBLOCKWITHCAMERA_OFFSET))(this, cameraPos, hackTarget, blockLayerMask);
		}

		::System::Boolean CheckIgnoreBlockTag(::UnityEngine::Collider* collider, ::System::Collections::Generic::HashSet_1<::System::String*>* ignoreTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKIGNOREBLOCKTAG_OFFSET))(this, collider, ignoreTags);
		}

		static ::System::Int32 SortByCameraDistance(::MoleMole::HackEntrySubSystem_HackTarget* a, ::MoleMole::HackEntrySubSystem_HackTarget* b)
		{
			return ((::System::Int32(*)(::MoleMole::HackEntrySubSystem_HackTarget*, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SORTBYCAMERADISTANCE_OFFSET))(a, b);
		}

		::System::Boolean IsInteractingTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISINTERACTINGTARGET_OFFSET))(this, target);
		}

		::System::Single GetInteractProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETINTERACTPROGRESS_OFFSET))(this);
		}

		::System::Boolean IsTargetFocusedInCameraHackMode(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDINCAMERAHACKMODE_OFFSET))(this, target);
		}

		::System::Boolean IsTargetFocusedForInteractUI(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDFORINTERACTUI_OFFSET))(this, target);
		}

		::System::Boolean ShouldHideInteractPointTips(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SHOULDHIDEINTERACTPOINTTIPS_OFFSET))(this, target);
		}

		::System::Void NotifyHackPointStateChange(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYHACKPOINTSTATECHANGE_OFFSET))(this, hackTarget);
		}

		::System::Void StartInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_STARTINTERACT_OFFSET))(this);
		}

		::System::Void EndInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ENDINTERACT_OFFSET))(this);
		}

		::System::Void OnInteractSuccess(::System::UInt32 hackTargetId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONINTERACTSUCCESS_OFFSET))(this, hackTargetId);
		}

		::System::Void TryStartAutoCameraScanAfterDetailFadeIn(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCANAFTERDETAILFADEIN_OFFSET))(this, target);
		}

		::System::Void TryStartAutoCameraScan(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCAN_OFFSET))(this, target);
		}

		static ::Foundation::ViewObject::ViewObjectHandle GetHackTargetViewObject(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETHACKTARGETVIEWOBJECT_OFFSET))(target);
		}

		::System::Void NotifyFocusSelectHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYFOCUSSELECTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyCancelSelectHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELSELECTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyStartInteractHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYSTARTINTERACTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyCancelInteractHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELINTERACTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyInteractSuccess(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTSUCCESS_OFFSET))(this, target);
		}

		::System::Void NotifyInteractLoseFocus(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTLOSEFOCUS_OFFSET))(this, target);
		}

		::System::Void SendTelemetryDataOnInteractSuccess(::MoleMole::HackEntrySubSystem_HackTarget* target, ::Foundation::ViewObject::ViewObjectHandle viewObject)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SENDTELEMETRYDATAONINTERACTSUCCESS_OFFSET))(this, target, viewObject);
		}

		::MoleMole::HackEntrySubSystem_HackTarget* TryGetHackTargetData(::System::UInt32 hackTargetId)
		{
			return ((::MoleMole::HackEntrySubSystem_HackTarget*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYGETHACKTARGETDATA_OFFSET))(this, hackTargetId);
		}

		::System::Void OnCommonSkillActive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET))(this, arg);
		}

		::System::Void OnCommonSkillInactive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET))(this, arg);
		}

		::System::UInt32 OnCameraHackModeTransitionBegin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONBEGIN_OFFSET))(this);
		}

		::System::Void OnCameraHackModeTransitionComplete(::System::UInt32 transitionToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCOMPLETE_OFFSET))(this, transitionToken);
		}

		::System::Void OnCameraHackModeTransitionCancelledIfPending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCANCELLEDIFPENDING_OFFSET))(this);
		}

		::System::Void MuteInteractForHackMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_MUTEINTERACTFORHACKMODE_OFFSET))(this);
		}

		::System::Void SetSystemMode(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETSYSTEMMODE_OFFSET))(this, mode);
		}

		::System::Void SetLocalAvatarOccludedOverlay(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETLOCALAVATAROCCLUDEDOVERLAY_OFFSET))(this, enable);
		}

		::System::Void ApplyCameraHackModeVisuals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_APPLYCAMERAHACKMODEVISUALS_OFFSET))(this);
		}

		::System::Void SetAllTargetEffectsVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETALLTARGETEFFECTSVISIBLE_OFFSET))(this, visible);
		}

		::System::Void OnControllableTargetChanged(::MoleMole::EntityHandle previousTarget, ::MoleMole::EntityHandle newTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCONTROLLABLETARGETCHANGED_OFFSET))(this, previousTarget, newTarget);
		}

		::System::Void SetTargetBreathingEffect(::MoleMole::HackEntrySubSystem_HackTarget* target, ::System::Boolean activate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETTARGETBREATHINGEFFECT_OFFSET))(this, target, activate);
		}

		static ::System::Single NormalizeAngleTo180(::System::Single angle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NORMALIZEANGLETO180_OFFSET))(angle);
		}

		static ::System::Void CacheForwardAngleRange(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget)
		{
			return ((::System::Void(*)(::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CACHEFORWARDANGLERANGE_OFFSET))(hackTarget);
		}

		static ::System::Boolean CheckForwardAngleRange(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget, ::GEIHCPAOKKK* followAvatarModel)
		{
			return ((::System::Boolean(*)(::MoleMole::HackEntrySubSystem_HackTarget*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKFORWARDANGLERANGE_OFFSET))(hackTarget, followAvatarModel);
		}

		::System::Boolean CheckHackTargetValid(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETVALID_OFFSET))(this, hackTarget);
		}

		::System::Boolean CheckInteractWithMode(::MoleMole::Config::HackObjectTrait* trait)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HackObjectTrait*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINTERACTWITHMODE_OFFSET))(this, trait);
		}

		::System::Void TryResolvePendingSubsidiaries(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYRESOLVEPENDINGSUBSIDIARIES_OFFSET))(this, entity);
		}

		static ::MoleMole::HackEntrySubSystem_HackTarget* AllocateHitTargetObject(::MoleMole::Config::CameraHackOperateType type)
		{
			return ((::MoleMole::HackEntrySubSystem_HackTarget*(*)(::MoleMole::Config::CameraHackOperateType))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ALLOCATEHITTARGETOBJECT_OFFSET))(type);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
