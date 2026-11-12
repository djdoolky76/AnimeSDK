#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PPEffectManager_MiniGameLifecycleReason.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/System/Object.h"
class APFPHAGPMAJ;
class DJNLDKEAEDN;
class NEOCEOCDEAF;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace RPG::CustomRP { class RPGLensDistortion; }
namespace RPG::CustomRP { class RPGLensGlitch; }
namespace RPG::CustomRP { class RPGSpeedLine; }
namespace RPG::GameCore { class DOFEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LensDistortionCurveEffect; }
namespace RPG::GameCore { class LensGlitchEffect; }
namespace RPG::GameCore { class LittleGameRadialBlurEffect; }
namespace RPG::GameCore { class LittleGameSpeedLineEffect; }
namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace RPG::GameCore { class RadialBlurCurveEffect; }
namespace RPG::GameCore { class RadialBlurEffect; }
namespace RPG::GameCore { class SpeedLineEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PPEFFECTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4BC130)
#define RPG_CLIENT_PPEFFECTMANAGER_CLEARALLFILTER_OFFSET UNITYSDK_OFFSET(0xE4B5890)
#define RPG_CLIENT_PPEFFECTMANAGER_CLEARGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xE4B7260)
#define RPG_CLIENT_PPEFFECTMANAGER_CLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET UNITYSDK_OFFSET(0xE4BA9E0)
#define RPG_CLIENT_PPEFFECTMANAGER_CLEARSYNCCHARLIGHTANDCAMERASTACK_OFFSET UNITYSDK_OFFSET(0xE4B7950)
#define RPG_CLIENT_PPEFFECTMANAGER_CLOSEFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xE4BA8E0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGAVATARINTENSITYWITHTARGETENTITYLST_OFFSET UNITYSDK_OFFSET(0xE4B63A0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGDOF_OFFSET UNITYSDK_OFFSET(0xE4B7E40)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xE4BA300)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHATTENUATION_OFFSET UNITYSDK_OFFSET(0xE4BA4E0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET UNITYSDK_OFFSET(0xE4B9E00)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLURCURVE_OFFSET UNITYSDK_OFFSET(0xE4BA150)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLUR_OFFSET UNITYSDK_OFFSET(0xE4B9FF0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSDISTORTIONCURVE_OFFSET UNITYSDK_OFFSET(0xE4B79D0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSGLITCH_OFFSET UNITYSDK_OFFSET(0xE4B9420)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGSPEEDLINE_OFFSET UNITYSDK_OFFSET(0xE4B8770)
#define RPG_CLIENT_PPEFFECTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE4BC120)
#define RPG_CLIENT_PPEFFECTMANAGER_DOONBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0xE4BAA40)
#define RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xE4B6FA0)
#define RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0xE4B5B30)
#define RPG_CLIENT_PPEFFECTMANAGER_GET_FILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0xE4BC110)
#define RPG_CLIENT_PPEFFECTMANAGER_GET_MINIGAMEFILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0xE4B4B80)
#define RPG_CLIENT_PPEFFECTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xE4B4B90)
#define RPG_CLIENT_PPEFFECTMANAGER_LEVELINIT_OFFSET UNITYSDK_OFFSET(0xE4B5500)
#define RPG_CLIENT_PPEFFECTMANAGER_LEVELUNINIT_OFFSET UNITYSDK_OFFSET(0xE4B5570)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET UNITYSDK_OFFSET(0xE4B3EE0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLOSEFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xE4B3DE0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xE4B3B20)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET UNITYSDK_OFFSET(0xE4B35E0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMRADIALBLUR_OFFSET UNITYSDK_OFFSET(0xE4B37E0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGSPEEDLINE_OFFSET UNITYSDK_OFFSET(0xE4B3F40)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEFILTERSYSTEMRADIALBLURCURVE_OFFSET UNITYSDK_OFFSET(0xE4B39D0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEINIT_1_OFFSET UNITYSDK_OFFSET(0xE4B3480)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEINIT_OFFSET UNITYSDK_OFFSET(0xE4B32A0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUNINIT_1_OFFSET UNITYSDK_OFFSET(0xE4B34E0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUNINIT_OFFSET UNITYSDK_OFFSET(0xE4B3430)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATEFILTERSTACKPARAMS_OFFSET UNITYSDK_OFFSET(0xE4B3CE0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATERADIALBLUROVERRIDE_OFFSET UNITYSDK_OFFSET(0xE4B38C0)
#define RPG_CLIENT_PPEFFECTMANAGER_REFRESHAVATARINTENSITY_OFFSET UNITYSDK_OFFSET(0xE4B5CD0)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETALLAVATARINTENSITY_OFFSET UNITYSDK_OFFSET(0xE4B66E0)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_1_OFFSET UNITYSDK_OFFSET(0xE4B68F0)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_OFFSET UNITYSDK_OFFSET(0xE4B6840)
#define RPG_CLIENT_PPEFFECTMANAGER_SETAVATARINTENSITYVALUE_OFFSET UNITYSDK_OFFSET(0xE4B6310)
#define RPG_CLIENT_PPEFFECTMANAGER_SETCURRENTPPEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0xE4B3550)
#define RPG_CLIENT_PPEFFECTMANAGER_SETGLOBALMAINAVATARINTENSITYEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0xE4B6BB0)
#define RPG_CLIENT_PPEFFECTMANAGER_SETSYNCCHARLIGHTANDCAMERA_OFFSET UNITYSDK_OFFSET(0xE4B73A0)
#define RPG_CLIENT_PPEFFECTMANAGER_STACKSYNCCHARLIGHTANDCAMERABYENTITY_OFFSET UNITYSDK_OFFSET(0xE4B75A0)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTAVATARINTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0xE4B6570)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xE4B6D60)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0xE4B6C20)
#define RPG_CLIENT_PPEFFECTMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xE4BAAE0)
#define RPG_CLIENT_PPEFFECTMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0xE4B5300)
#define RPG_CLIENT_PPEFFECTMANAGER_UNSTACKSYNCCHARLIGHTANDCAMERABYENTITY_OFFSET UNITYSDK_OFFSET(0xE4B7810)
#define RPG_CLIENT_PPEFFECTMANAGER_UPDATEFILTERSTACKPARAMS_OFFSET UNITYSDK_OFFSET(0xE4BA7E0)
#define RPG_CLIENT_PPEFFECTMANAGER__APPLYSYNCCHARLIGHTANDCAMERA_OFFSET UNITYSDK_OFFSET(0xE4B73F0)
#define RPG_CLIENT_PPEFFECTMANAGER__ONPPFILTERSTACKEFFECTACTIVECHAGNE_OFFSET UNITYSDK_OFFSET(0xE4BC050)
#define RPG_CLIENT_PPEFFECTMANAGER__REFRESHMINIGAMELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xE4B32F0)
#define RPG_CLIENT_PPEFFECTMANAGER__RESOLVESYNCCHARLIGHTANDCAMERA_OFFSET UNITYSDK_OFFSET(0xE4B7780)
#define RPG_CLIENT_PPEFFECTMANAGER__SETAVATARINTENSITYON_OFFSET UNITYSDK_OFFSET(0xE4B6AC0)
#define RPG_CLIENT_PPEFFECTMANAGER__SETMAINGLOBALINTENSITY_OFFSET UNITYSDK_OFFSET(0xE4B5200)
#define RPG_CLIENT_PPEFFECTMANAGER__TICKMAININTENSITYTRANSITION_OFFSET UNITYSDK_OFFSET(0xE4BBF30)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager_TypeDefinitionIndex = 71727;

	class PPEffectManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::APFPHAGPMAJ*>* _AvatarIntensityList; // 0x10
		::RPG::CustomRP::RPGSpeedLine* _MiniGameSpeedLine; // 0x18
		::NEOCEOCDEAF* _MainIntensityTransition; // 0x20
		::NEOCEOCDEAF* _LensGlitchTransition; // 0x28
		::RPG::Client::CameraBlendCurve* _LensDistortionScaleCurve; // 0x30
		::UnityEngine::Texture* _SpeedLineSeed; // 0x38
		::RPG::CustomRP::RPGLensGlitch* _LensGlitch; // 0x40
		::RPG::CustomRP::RPGLensDistortion* _LensDistortion; // 0x48
		::RPG::CustomRP::RPGSpeedLine* _SpeedLine; // 0x50
		::RPG::CustomRP::RPGDepthOfField* _DOF; // 0x58
		::NEOCEOCDEAF* _AvatarIntensityTransition; // 0x60
		::UnityEngine::Texture* _MiniGameSpeedLineSeed; // 0x68
		::RPG::GameCore::GameEntity* _DOFTargetEntity; // 0x70
		::RPG::GameCore::GameEntity* _SpeedLineTargetEntity; // 0x78
		::RPG::GameCore::DOFEffect* _DOFEffectConfig; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* _MainIntensityStackByEntity; // 0x88
		::RPG::GameCore::LensDistortionCurveEffect* _LensDistortionCurveEffectConfig; // 0x90
		::RPG::Client::CameraBlendCurve* _LensDistortionXCurve; // 0x98
		::System::Collections::Generic::List_1<::System::Object*>* _SyncCharLightStackByEntity; // 0xA0
		::DJNLDKEAEDN* _MiniGameFilterSystem; // 0xA8
		::RPG::Client::CameraBlendCurve* _LensDistortionYCurve; // 0xB0
		::RPG::GameCore::LensGlitchEffect* _LensGlitchEffectConfig; // 0xB8
		::RPG::Client::CameraBlendCurve* _LensDistortionIntensityCurve; // 0xC0
		::RPG::GameCore::SpeedLineEffect* _SpeedLineEffectConfig; // 0xC8
		::NEOCEOCDEAF* _DOFTransition; // 0xD0
		::DJNLDKEAEDN* _FilterSystem; // 0xD8
		::System::Single _LensDistortionEffectTickTimer; // 0xE0
		::System::Single GlobalMainIntensity; // 0xE4
		::System::Int32 _SandboxMiniGameRefCount; // 0xE8
		::System::Boolean _LegacyMiniGameActive; // 0xEC
		::System::Boolean _IsBattleDataView; // 0xED
		::System::Boolean _IsInitialized; // 0xEE
		static ::System::String** StaticGet_GLOBAL_ONEMINUS_MAIN_INTENSITY()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PPEffectManager")->GetStaticField(0x1D380);
		}

		static ::System::Int32* StaticGet_PropertyIDGlobalOneMinusAvatarIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PPEffectManager")->GetStaticField(0x6610);
		}

		static ::System::Int32* StaticGet_PropertyIDGlobalOneMinusAvatarIntensityEnable()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PPEffectManager")->GetStaticField(0x6614);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CCTOR_OFFSET))();
		}

		::System::Void MiniGameInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEINIT_OFFSET))(this);
		}

		::System::Void MiniGameUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUNINIT_OFFSET))(this);
		}

		::System::Void MiniGameInit_1(::RPG::Client::PPEffectManager_MiniGameLifecycleReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PPEffectManager_MiniGameLifecycleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEINIT_1_OFFSET))(this, a1);
		}

		::System::Void MiniGameUnInit_1(::RPG::Client::PPEffectManager_MiniGameLifecycleReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PPEffectManager_MiniGameLifecycleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUNINIT_1_OFFSET))(this, a1);
		}

		::System::Void _RefreshMiniGameLifecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__REFRESHMINIGAMELIFECYCLE_OFFSET))(this);
		}

		::System::Void MiniGameConfigFilterSystemColorGradingCurve(::RPG::GameCore::RPGColorGradingCurveEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void MiniGameConfigFilterSystemRadialBlur(::RPG::GameCore::LittleGameRadialBlurEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameRadialBlurEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMRADIALBLUR_OFFSET))(this, a1, a2);
		}

		::System::Void MiniGameUpdateRadialBlurOverride(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATERADIALBLUROVERRIDE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MiniGameFilterSystemRadialBlurCurve(::RPG::GameCore::RadialBlurCurveEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEFILTERSYSTEMRADIALBLURCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void MiniGameConfigFilterStackWithAnim(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::PPEffectFilterPriorityGroup a6, ::RPG::GameCore::PPEffectFilterPriority a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MiniGameUpdateFilterStackParams(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATEFILTERSTACKPARAMS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MiniGameCloseFilterStackWithAnim(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLOSEFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MiniGameClearPPEffectFilterByPriorityGroup(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET))(this, a1);
		}

		::System::Void MiniGameConfigSpeedLine(::RPG::GameCore::LittleGameSpeedLineEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGSPEEDLINE_OFFSET))(this, a1);
		}

		::DJNLDKEAEDN* get_MiniGameFilterSystem()
		{
			return ((::DJNLDKEAEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_GET_MINIGAMEFILTERSYSTEM_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void LevelInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_LEVELINIT_OFFSET))(this);
		}

		::System::Void LevelUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_LEVELUNINIT_OFFSET))(this);
		}

		::System::Void ClearAllfilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARALLFILTER_OFFSET))(this);
		}

		::System::Void RefreshAvatarIntensity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_REFRESHAVATARINTENSITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ConfigAvatarIntensityWithTargetEntityLst(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGAVATARINTENSITYWITHTARGETENTITYLST_OFFSET))(this, a1);
		}

		::System::Void ResetAllAvatarIntensity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETALLAVATARINTENSITY_OFFSET))(this);
		}

		::System::Void ResetIntensity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_OFFSET))(this, a1);
		}

		::System::Void ResetIntensity_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_1_OFFSET))(this, a1);
		}

		::System::Void SetAvatarIntensityValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETAVATARINTENSITYVALUE_OFFSET))(this, a1);
		}

		::System::Void StartAvatarIntensityEffect(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTAVATARINTENSITYEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalMainAvatarIntensityEffectEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETGLOBALMAINAVATARINTENSITYEFFECTENABLE_OFFSET))(this, a1);
		}

		::System::Void StartGlobalMainIntensityEffect(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void FinishGlobalMainIntensityEffect(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECT_OFFSET))(this, a1);
		}

		::System::Void StartGlobalMainIntensityEffectByEntity(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishGlobalMainIntensityEffectByEntity(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void ClearGlobalMainIntensityEffectByEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this);
		}

		::System::Void SetSyncCharLightAndCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETSYNCCHARLIGHTANDCAMERA_OFFSET))(this, a1);
		}

		::System::Void StackSyncCharLightAndCameraByEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STACKSYNCCHARLIGHTANDCAMERABYENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void UnstackSyncCharLightAndCameraByEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_UNSTACKSYNCCHARLIGHTANDCAMERABYENTITY_OFFSET))(this, a1);
		}

		::System::Void ClearSyncCharLightAndCameraStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARSYNCCHARLIGHTANDCAMERASTACK_OFFSET))(this);
		}

		::System::Boolean _ResolveSyncCharLightAndCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__RESOLVESYNCCHARLIGHTANDCAMERA_OFFSET))(this);
		}

		::System::Void ConfigLensDistortionCurve(::RPG::GameCore::LensDistortionCurveEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSDISTORTIONCURVE_OFFSET))(this, a1);
		}

		::System::Void ConfigDOF(::RPG::GameCore::DOFEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DOFEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGDOF_OFFSET))(this, a1, a2);
		}

		::System::Void ConfigSpeedLine(::RPG::GameCore::SpeedLineEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpeedLineEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGSPEEDLINE_OFFSET))(this, a1, a2);
		}

		::System::Void ConfigLensGlitch(::RPG::GameCore::LensGlitchEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSGLITCH_OFFSET))(this, a1);
		}

		::System::Void ConfigFilterSystemColorGradingCurve(::RPG::GameCore::RPGColorGradingCurveEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void ConfigFilterSystemRadialBlur(::RPG::GameCore::RadialBlurEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::PPEffectFilterPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLUR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfigFilterSystemRadialBlurCurve(::RPG::GameCore::RadialBlurCurveEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::PPEffectFilterPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurCurveEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLURCURVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfigFilterStackWithAnim(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::PPEffectFilterPriorityGroup a6, ::RPG::GameCore::PPEffectFilterPriority a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void ConfigFilterStackWithAttenuation(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::GameCore::PPEffectFilterPriorityGroup a8, ::RPG::GameCore::PPEffectFilterPriority a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHATTENUATION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void UpdateFilterStackParams(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_UPDATEFILTERSTACKPARAMS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CloseFilterStackWithAnim(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLOSEFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ClearPPEffectFilterByPriorityGroup(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET))(this, a1);
		}

		::System::Void SetCurrentPPEffectActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETCURRENTPPEFFECTACTIVE_OFFSET))(this, a1);
		}

		::System::Void DoOnBattleDataView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_DOONBATTLEDATAVIEW_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void _TickMainIntensityTransition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__TICKMAININTENSITYTRANSITION_OFFSET))(this, a1);
		}

		::System::Void _OnPPFilterStackEffectActiveChagne(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__ONPPFILTERSTACKEFFECTACTIVECHAGNE_OFFSET))(this, a1);
		}

		::System::Void _SetAvatarIntensityOn(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__SETAVATARINTENSITYON_OFFSET))(this, a1, a2);
		}

		::System::Void _SetMainGlobalIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__SETMAINGLOBALINTENSITY_OFFSET))(this, a1);
		}

		::System::Void _ApplySyncCharLightAndCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__APPLYSYNCCHARLIGHTANDCAMERA_OFFSET))(this, a1);
		}

		::DJNLDKEAEDN* get_FilterSystem()
		{
			return ((::DJNLDKEAEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_GET_FILTERSYSTEM_OFFSET))(this);
		}

	};
}
