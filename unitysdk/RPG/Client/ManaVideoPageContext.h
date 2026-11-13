#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/IGCLGKCKACE.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/Client/ManaVideoPageContext_VideoPlayStep.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/RPG/Client/TextID.h"
class NJECIAHFLEG;
class NJECIAHFLEG_LFIKDHLMPBI;
namespace CriWare { class CriManaMovieControllerForUI; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class VideoCaption; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET UNITYSDK_OFFSET(0x17166680)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0x171664C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0x17167D70)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CHECKCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x17167860)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET UNITYSDK_OFFSET(0x17167780)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17162FF0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x17162A10)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CUEPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0x171669C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_DESTROYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17167CD0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0x171678A0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x17165670)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_EXITDIALOG_OFFSET UNITYSDK_OFFSET(0x17167960)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET UNITYSDK_OFFSET(0x17164C00)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x17162F40)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x17166210)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x17163CE0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17165B00)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_MUTECAMERA_OFFSET UNITYSDK_OFFSET(0x17165950)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17166C40)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET UNITYSDK_OFFSET(0x171671B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIEEND_OFFSET UNITYSDK_OFFSET(0x17166510)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIESTART_OFFSET UNITYSDK_OFFSET(0x171662F0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17166F40)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSERESUME_OFFSET UNITYSDK_OFFSET(0x17167140)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET UNITYSDK_OFFSET(0x171672F0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17166DB0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17166A50)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_OPENMASK_OFFSET UNITYSDK_OFFSET(0x171641C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_PREPARETICK_OFFSET UNITYSDK_OFFSET(0x17166060)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETCAPTIONALPHA_OFFSET UNITYSDK_OFFSET(0x171677E0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETUPCAPTION_OFFSET UNITYSDK_OFFSET(0x17163FB0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET UNITYSDK_OFFSET(0x171676B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKCAPTION_OFFSET UNITYSDK_OFFSET(0x17164E30)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKNEARLYEND_OFFSET UNITYSDK_OFFSET(0x17165370)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKVIDEOSTEP_OFFSET UNITYSDK_OFFSET(0x17164B00)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x17165530)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHANGEENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0x17167430)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHECKNOLOGERRORPAUSE_OFFSET UNITYSDK_OFFSET(0x17164810)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x17163900)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__GETWAITEXITFRAME_OFFSET UNITYSDK_OFFSET(0x171679B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__INITENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0x17164520)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x17165610)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0x17165A30)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0x17164790)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPBUTTONSHOW_OFFSET UNITYSDK_OFFSET(0x17163DE0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17163D70)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPageContext_TypeDefinitionIndex = 75031;

	class ManaVideoPageContext : public ::RPG::Client::UIController
	{
	public:
		::System::String* _videoFullPath; // 0x190
		::RPG::Client::LuaUIController* _skilDialog; // 0x198
		::IGCLGKCKACE _videoKey; // 0x1A0
		::CriWare::CriManaMovieControllerForUI* _movieControllerForUI; // 0x1C0
		::Il2CppArray<::RPG::GameCore::VideoCaption*>* _ActiveCaptionConfig; // 0x1C8
		::RPG::GameCore::VideoCaptionConfig* _captionConfig; // 0x1D0
		::System::Single _maskTimer; // 0x1D8
		::System::Single _lastVideoTime; // 0x1DC
		::System::UInt32 _PerformanceID; // 0x1E0
		::System::UInt32 _videoID; // 0x1E4
		::RPG::Client::ManaVideoPageContext_VideoPlayStep _videoStep; // 0x1E8
		::System::Boolean _isMasking; // 0x1EC
		::System::Boolean _isVideoPlaying; // 0x1ED
		::System::Boolean _isDebug; // 0x1EE
		::System::Boolean _isLoop; // 0x1EF
		::System::Boolean _HasSend_VideoNearlyEnd; // 0x1F0
		::System::Boolean _hasCaption; // 0x1F1
		::System::Boolean _canSkip; // 0x1F2
		::System::Byte _padding0[0x1];
		::CriWare::CriMana::Player_Status _lastPlayerStatus; // 0x1F4
		::UnityEngine::Color _maskColor; // 0x1F8
		::System::Single _EndBlackBeforeTime; // 0x208
		::System::Int32 _controllerRuntimeID; // 0x20C
		::System::Single _NoLogErrorPauseTime; // 0x210
		::System::UInt32 _blockUID; // 0x214
		::RPG::Client::LockSource _LockSource; // 0x218
		::System::Byte _padding1[0x4];
		::System::UInt64 _NoLogErrorPauseFrameTime; // 0x220
		static ::System::Int32* StaticGet_WAIT_CRACK_FRAME()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ManaVideoPageContext")->GetStaticField(0x12800);
		}

		static ::System::Int32* StaticGet_WAIT_TRIGGER_CUSTOM_STRING()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ManaVideoPageContext")->GetStaticField(0x12804);
		}

		static ::System::Int32* StaticGet_WAIT_DIALOG_FRAME()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ManaVideoPageContext")->GetStaticField(0x12808);
		}

		// static const ::System::Object _WAIT_NO_LOG_ERROR_PAUSE_MAX_TIME; // 0x0
		// static const ::System::Object MASK_TIME; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CCTOR_OFFSET))();
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void MuteCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_MUTECAMERA_OFFSET))(this, a1);
		}

		::System::Void _OnForceCloseVideo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET))(this, a1);
		}

		::System::Void TickVideoStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKVIDEOSTEP_OFFSET))(this);
		}

		::System::Void _CheckNoLogErrorPause(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHECKNOLOGERRORPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnMovieStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIESTART_OFFSET))(this);
		}

		::System::Void OnMovieEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIEEND_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void PrepareTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_PREPARETICK_OFFSET))(this);
		}

		::System::Void CuePointCallback(::CriWare::CriMana::EventPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CUEPOINTCALLBACK_OFFSET))(this, a1);
		}

		::RPG::GameCore::VideoCaptionConfig* GetVideoCaptionConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::VideoCaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET))(this, a1);
		}

		::System::Void _SetupButtonShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPBUTTONSHOW_OFFSET))(this);
		}

		::System::Void OnVideoButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnHideButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSkipButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPauseButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSEBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Int32 OnPauseResume(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSERESUME_OFFSET))(this, a1);
		}

		::System::Int32 onLuaCallback(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnSkipActionVerify(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET))(this, a1);
		}

		::System::Void TickNearlyEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKNEARLYEND_OFFSET))(this);
		}

		::System::Void _InitEndBlackBeforeTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__INITENDBLACKBEFORETIME_OFFSET))(this);
		}

		::System::Void _ChangeEndBlackBeforeTime(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHANGEENDBLACKBEFORETIME_OFFSET))(this, a1);
		}

		::System::Void TickCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKCAPTION_OFFSET))(this);
		}

		::System::Void SetupCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETUPCAPTION_OFFSET))(this);
		}

		::System::Void CloseCaption(::NJECIAHFLEG_LFIKDHLMPBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJECIAHFLEG_LFIKDHLMPBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET))(this, a1);
		}

		::System::Void ShowCaption(::NJECIAHFLEG_LFIKDHLMPBI* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::NJECIAHFLEG_LFIKDHLMPBI*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET))(this, a1, a2);
		}

		::System::Void SetCaptionAlpha(::NJECIAHFLEG_LFIKDHLMPBI* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NJECIAHFLEG_LFIKDHLMPBI*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETCAPTIONALPHA_OFFSET))(this, a1, a2);
		}

		::System::Void CheckCaptionConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CHECKCAPTIONCONFIG_OFFSET))(this);
		}

		::System::Void AdaptMovieImage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET))(this, a1);
		}

		::System::Void OpenMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_OPENMASK_OFFSET))(this);
		}

		::System::Void BeginFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET))(this);
		}

		::System::Void EndFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET))(this);
		}

		::System::Void FadeOutMask(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET))(this, a1);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDPLAY_OFFSET))(this);
		}

		::System::Int32 _GetWaitExitFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__GETWAITEXITFRAME_OFFSET))(this);
		}

		::System::Void ExitDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_EXITDIALOG_OFFSET))(this);
		}

		::System::Void DestroyComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_DESTROYCOMPONENT_OFFSET))(this);
		}

		::NJECIAHFLEG* get__View()
		{
			return ((::NJECIAHFLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET__VIEW_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status get_currentState()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET_CURRENTSTATE_OFFSET))(this);
		}

	};
}
