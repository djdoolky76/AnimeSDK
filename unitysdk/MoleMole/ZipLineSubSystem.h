#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKLAIIGMJLM.h"
#include "unitysdk/HEGAIBENLJF.h"
#include "unitysdk/KFMILBMCGCB_PDHDEJKDNGG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/ZipLineSubSystem_SwitchType.h"
#include "unitysdk/CAMLGDMCCMB.h"
#include "unitysdk/LJJGNCGBFNE.h"
#include "unitysdk/NOMPBCHLIBN.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class FMENAINBNCL;
class HPIILKMDMFO;
class LOMGLJPKHAF;
class PJLKCLOEBFH;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ZipLineSubSystem_CModel; }
namespace MoleMole { class ZipLineSubSystem_HUDModel; }
namespace MoleMole { class ZipLineSubSystem_Target; }
namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ZIPLINESUBSYSTEM_AUTOSAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x170E8150)
#define MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHIN_OFFSET UNITYSDK_OFFSET(0x170E83E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHOUT_OFFSET UNITYSDK_OFFSET(0x170E98E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_BEGINENTERINPUTWINDOW_OFFSET UNITYSDK_OFFSET(0x170EA890)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CANCURRENTAVATARUSEZIPLINE_OFFSET UNITYSDK_OFFSET(0x170E2C00)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CHECKINSCREENRANGE_OFFSET UNITYSDK_OFFSET(0x170E5500)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CLEARAUTOSAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x170E81E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CLEARCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x170E80D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDMODEL_OFFSET UNITYSDK_OFFSET(0x170EB080)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x170E6320)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETOVERRIDEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x170DF0F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETSCREENPOSFROMWORLDPOS_OFFSET UNITYSDK_OFFSET(0x170E5250)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETTARGET_OFFSET UNITYSDK_OFFSET(0x170E5800)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_CONFIGZIPLINE_OFFSET UNITYSDK_OFFSET(0x170DED60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_LOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x170E4F80)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x170EB100)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHAVATAR_OFFSET UNITYSDK_OFFSET(0x170E51C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_ENTER_OFFSET UNITYSDK_OFFSET(0x170DECD0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_EXIT_OFFSET UNITYSDK_OFFSET(0x170DEFC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_SWITCH_OFFSET UNITYSDK_OFFSET(0x170DEF30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_PREDICATEZIPLINEAVATAR_OFFSET UNITYSDK_OFFSET(0x170E2060)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_TEAMENTITY_OFFSET UNITYSDK_OFFSET(0x170EB0F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_ZIPLINEAVATAR_OFFSET UNITYSDK_OFFSET(0x170EB0E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_INITPOINTSEARCHPROFILES_OFFSET UNITYSDK_OFFSET(0x170DE5A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_INPUTWITHHANDLER_OFFSET UNITYSDK_OFFSET(0x170EA9E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_INPUT_OFFSET UNITYSDK_OFFSET(0x170EA3A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ISINSCENEAREA_OFFSET UNITYSDK_OFFSET(0x170E4C40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONAVATARINOUTBATTLECHANGE_OFFSET UNITYSDK_OFFSET(0x170E7340)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x170DF220)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONBEGINCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x170E7DA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET UNITYSDK_OFFSET(0x170E7600)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET UNITYSDK_OFFSET(0x170E7790)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x170DFFB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONENDCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x170E7EF0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x170E0FF0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x170E2E30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x170E3060)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONUILOCKCHANGED_OFFSET UNITYSDK_OFFSET(0x170E7B60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0x170E7920)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x170E14B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_PROCESSDEFAULTTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x170E61C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x170E0D40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_RESETDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x170DF050)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x170E8040)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SENDEVENT_ZIPLINEHINTVISIBLE_OFFSET UNITYSDK_OFFSET(0x170E7180)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SETCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x170E0980)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SETMUTESWITCHAVATARBYENTERWINDOW_OFFSET UNITYSDK_OFFSET(0x170E0790)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x170EB110)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SET_TEAMENTITY_OFFSET UNITYSDK_OFFSET(0x170DFCF0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SET_ZIPLINEAVATAR_OFFSET UNITYSDK_OFFSET(0x170E9260)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SYNCCURRENTPOINTFROMMAINENTITY_OFFSET UNITYSDK_OFFSET(0x170EAF10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SYNCDATAFROMMAINENTITY_OFFSET UNITYSDK_OFFSET(0x170E3B20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TOSPLINEEX_OFFSET UNITYSDK_OFFSET(0x170DF170)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETAUTOSAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x170E8320)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x170E8260)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETSPLINEGROUPIDANDKEY_OFFSET UNITYSDK_OFFSET(0x170EAFC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x170E1320)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATECHECKENABLESEARCHBYCOMMONSKILL_OFFSET UNITYSDK_OFFSET(0x170E4720)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATECHECKSCENEAREA_OFFSET UNITYSDK_OFFSET(0x170E4670)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATEENTERINPUTWINDOW_OFFSET UNITYSDK_OFFSET(0x170E1C60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_1_OFFSET UNITYSDK_OFFSET(0x170E6380)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_2_OFFSET UNITYSDK_OFFSET(0x170E6AC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x170E5870)
#define MOLEMOLE_ZIPLINESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x170EB270)
#define MOLEMOLE_ZIPLINESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x170EB120)
#define MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_0_OFFSET UNITYSDK_OFFSET(0x170EB290)
#define MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_1_OFFSET UNITYSDK_OFFSET(0x170EB2B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x170EB2D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x170EB360)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x170EB3F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x170EB480)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x170EB520)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x170EB5C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x170EB650)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x170EB6E0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_TypeDefinitionIndex = 92008;

	class ZipLineSubSystem
	{
	public:
		static ::System::Boolean* StaticGet_HandleInputByLocalAvatarMixin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_TypeDefinitionIndex)->GetStaticField(0xB560);
		}
		static ::System::Boolean* StaticGet_EnableSearchOptimization_Point()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_TypeDefinitionIndex)->GetStaticField(0xB561);
		}
		static ::System::Boolean* StaticGet_EnableSearchOptimization_Spline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_TypeDefinitionIndex)->GetStaticField(0xB562);
		}
		// static const ::System::String* InputTag_EnterWindow; // 0x0
		// static const ::System::Int32 EnterInputWindowFrames = 0x4; // 0x0
		// static const ::System::UInt32 HandleID_EnterPoint = 0x1; // 0x0
		// static const ::System::UInt32 HandleID_SwitchPoint = 0x2; // 0x0
		// static const ::System::UInt32 HandleID_ExitPoint = 0x3; // 0x0
		// static const ::System::Int32 CheckPointID_AutoSave = 0x0; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::CKLAIIGMJLM>* _checkPoints; // 0x10
		::MoleMole::Config::ConfigZipLine* _cachedConfig; // 0x18
		::MoleMole::ZipLineSubSystem_CModel* _Model_k__BackingField; // 0x20
		::MoleMole::EntityHandle _switchOutEntity; // 0x28
		::MoleMole::EntityHandle _teamEntity; // 0x38
		::HEGAIBENLJF _cacheSplineEx; // 0x48
		::FMENAINBNCL* __pointSearchProfileSwitch; // 0x58
		::FMENAINBNCL* __pointSearchProfileExit; // 0x60
		::MoleMole::EntityHandle _predicateZipLineAvatar; // 0x68
		::MoleMole::ZipLineSubSystem_Target* _cacheEnterPoint; // 0x78
		::MoleMole::EntityHandle _zipLineAvatar; // 0x80
		::MoleMole::ZipLineSubSystem_Target* _cacheExitPoint; // 0x90
		::FMENAINBNCL* __pointSearchProfileEnter; // 0x98
		::MoleMole::ZipLineSubSystem_Target* _cacheSwtichPoint; // 0xA0
		::HPIILKMDMFO* ZipLineMixin; // 0xA8
		::PJLKCLOEBFH* PointSearchHelper; // 0xB0
		::MoleMole::ZipLineSubSystem_SwitchType _switchType; // 0xB8
		::System::Boolean EnablePointSearch_LOD; // 0xBC
		::System::Boolean _switching; // 0xBD
		::System::Boolean EnablePointSearch_CommonSkill; // 0xBE
		::System::Boolean _muteSwitchAvatarByEnterWindow; // 0xBF

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void InitPointSearchProfiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_INITPOINTSEARCHPROFILES_OFFSET))(this);
		}

		::System::Void ResetDebugData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_RESETDEBUGDATA_OFFSET))(this);
		}

		::System::Single GetOverrideMoveDirection(::System::Single currentDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETOVERRIDEMOVEDIRECTION_OFFSET))(this, currentDistance);
		}

		::FMENAINBNCL* get_PointSearchProfile_Enter()
		{
			return ((::FMENAINBNCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_ENTER_OFFSET))(this);
		}

		::FMENAINBNCL* get_PointSearchProfile_Switch()
		{
			return ((::FMENAINBNCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_SWITCH_OFFSET))(this);
		}

		::FMENAINBNCL* get_PointSearchProfile_Exit()
		{
			return ((::FMENAINBNCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_EXIT_OFFSET))(this);
		}

		::HEGAIBENLJF ToSplineEx(::FluffyUnderware::Curvy::CurvySpline* curvySpline)
		{
			return ((::HEGAIBENLJF(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TOSPLINEEX_OFFSET))(this, curvySpline);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateCheckSceneArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATECHECKSCENEAREA_OFFSET))(this);
		}

		::System::Void UpdateCheckEnableSearchByCommonSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATECHECKENABLESEARCHBYCOMMONSKILL_OFFSET))(this);
		}

		::System::Boolean CanCurrentAvatarUseZipLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CANCURRENTAVATARUSEZIPLINE_OFFSET))(this);
		}

		::System::Boolean IsInSceneArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ISINSCENEAREA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetScreenPosFromWorldPos(::UnityEngine::Vector3 worldPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETSCREENPOSFROMWORLDPOS_OFFSET))(this, worldPos);
		}

		::System::Boolean CheckInScreenRange(::UnityEngine::Vector3 worldPos, ::System::Single majorAxisLength, ::System::Single minorAxisLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CHECKINSCREENRANGE_OFFSET))(this, worldPos, majorAxisLength, minorAxisLength);
		}

		::MoleMole::ZipLineSubSystem_Target* GetTarget(::System::UInt32 handle)
		{
			return ((::MoleMole::ZipLineSubSystem_Target*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETTARGET_OFFSET))(this, handle);
		}

		::System::Void UpdateTarget(::System::UInt32 handle, ::LOMGLJPKHAF* splinePointData, ::System::String* textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LOMGLJPKHAF*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_OFFSET))(this, handle, splinePointData, textmapKey);
		}

		::System::Void UpdateTarget_1(::System::UInt32 handle, ::System::Nullable_1<::LJJGNCGBFNE> enterPointData, ::UnityEngine::Vector3 tangent, ::System::String* textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::LJJGNCGBFNE>, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_1_OFFSET))(this, handle, enterPointData, tangent, textmapKey);
		}

		::System::Void UpdateTarget_2(::System::UInt32 handle, ::System::Nullable_1<::UnityEngine::Vector3> position, ::System::Single progress, ::System::Single distance, ::System::String* textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_2_OFFSET))(this, handle, position, progress, distance, textmapKey);
		}

		::System::Void ProcessDefaultTextmapKey(::System::UInt32 handle, ::System::String*& textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_PROCESSDEFAULTTEXTMAPKEY_OFFSET))(this, handle, textmapKey);
		}

		::KFMILBMCGCB_PDHDEJKDNGG GetHudPointType(::System::UInt32 handle)
		{
			return ((::KFMILBMCGCB_PDHDEJKDNGG(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDPOINTTYPE_OFFSET))(this, handle);
		}

		::System::Void SendEvent_ZipLineHintVisible(::System::Boolean value, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SENDEVENT_ZIPLINEHINTVISIBLE_OFFSET))(this, value, id);
		}

		::System::Void OnAvatarInOutBattleChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONAVATARINOUTBATTLECHANGE_OFFSET))(this, args);
		}

		::System::Void OnCommonSkillActive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET))(this, arg);
		}

		::System::Void OnCommonSkillInactive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET))(this, arg);
		}

		::System::Void OnUnlock(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONUNLOCK_OFFSET))(this, obj);
		}

		::System::Void OnUILockChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONUILOCKCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnBeginConsoleCombo(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONBEGINCONSOLECOMBO_OFFSET))(this, obj);
		}

		::System::Void OnEndConsoleCombo(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONENDCONSOLECOMBO_OFFSET))(this, obj);
		}

		::System::Void SaveCheckPoint(::System::Int32 id, ::CKLAIIGMJLM checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CKLAIIGMJLM))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SAVECHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Void ClearCheckPoint(::System::Int32 id, ::CKLAIIGMJLM checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CKLAIIGMJLM))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CLEARCHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Void AutoSaveCheckPoint(::CKLAIIGMJLM checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::CKLAIIGMJLM))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_AUTOSAVECHECKPOINT_OFFSET))(this, checkPoint);
		}

		::System::Void ClearAutoSaveCheckPoint(::System::Int32 id, ::CKLAIIGMJLM checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CKLAIIGMJLM))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CLEARAUTOSAVECHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Boolean TryGetCheckPoint(::System::Int32 id, ::CKLAIIGMJLM& checkPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKLAIIGMJLM&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETCHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Boolean TryGetAutoSaveCheckPoint(::CKLAIIGMJLM& checkPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKLAIIGMJLM&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETAUTOSAVECHECKPOINT_OFFSET))(this, checkPoint);
		}

		::System::Void AvatarSwitchIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHIN_OFFSET))(this);
		}

		::System::Void AvatarSwitchOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHOUT_OFFSET))(this);
		}

		::System::Void Input(::NOMPBCHLIBN command)
		{
			return ((::System::Void(*)(::PVOID, ::NOMPBCHLIBN))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_INPUT_OFFSET))(this, command);
		}

		::CAMLGDMCCMB InputWithHandler(::NOMPBCHLIBN command)
		{
			return ((::CAMLGDMCCMB(*)(::PVOID, ::NOMPBCHLIBN))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_INPUTWITHHANDLER_OFFSET))(this, command);
		}

		::System::Void BeginEnterInputWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_BEGINENTERINPUTWINDOW_OFFSET))(this);
		}

		::System::Void UpdateEnterInputWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATEENTERINPUTWINDOW_OFFSET))(this);
		}

		::System::Void SetMuteSwitchAvatarByEnterWindow(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SETMUTESWITCHAVATARBYENTERWINDOW_OFFSET))(this, mute);
		}

		::System::Void SyncDataFromMainEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SYNCDATAFROMMAINENTITY_OFFSET))(this);
		}

		::System::Void SyncCurrentPointFromMainEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SYNCCURRENTPOINTFROMMAINENTITY_OFFSET))(this);
		}

		::System::Void SetCurrentState(::System::Nullable_1<::System::Object*> state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SETCURRENTSTATE_OFFSET))(this, state);
		}

		static ::System::Boolean TryGetSplineGroupIDAndKey(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::UInt32& groupID, ::System::String*& splineName)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::UInt32&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETSPLINEGROUPIDANDKEY_OFFSET))(curvySpline, groupID, splineName);
		}

		::MoleMole::ZipLineSubSystem_HUDModel* GetHUDModel()
		{
			return ((::MoleMole::ZipLineSubSystem_HUDModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDMODEL_OFFSET))(this);
		}

		::MoleMole::Config::ConfigZipLine* get_ConfigZipLine()
		{
			return ((::MoleMole::Config::ConfigZipLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_CONFIGZIPLINE_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_ZipLineAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_ZIPLINEAVATAR_OFFSET))(this);
		}

		::System::Void set_ZipLineAvatar(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SET_ZIPLINEAVATAR_OFFSET))(this, value);
		}

		::MoleMole::EntityHandle get_PredicateZipLineAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_PREDICATEZIPLINEAVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_PointSearchAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHAVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_LocalAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_LOCALAVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_TeamEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_TEAMENTITY_OFFSET))(this);
		}

		::System::Void set_TeamEntity(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SET_TEAMENTITY_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_CModel* get_Model()
		{
			return ((::MoleMole::ZipLineSubSystem_CModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::MoleMole::ZipLineSubSystem_CModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_CModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SET_MODEL_OFFSET))(this, value);
		}

		::System::Single _InitPointSearchProfiles_b__0_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_0_OFFSET))(this);
		}

		::System::Single _InitPointSearchProfiles_b__0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_1_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
