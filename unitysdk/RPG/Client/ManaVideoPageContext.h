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

#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET UNITYSDK_OFFSET(0xDF5FD30)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xDF5FB70)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF61420)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CHECKCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xDF60F10)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET UNITYSDK_OFFSET(0xDF60E30)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDF5C6A0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xDF5C0C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CUEPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDF60070)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_DESTROYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDF61380)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xDF60F50)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xDF5ED20)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_EXITDIALOG_OFFSET UNITYSDK_OFFSET(0xDF61010)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xDF5E2B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xDF5C5F0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xDF5F8C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xDF5D390)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDF5F1B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_MUTECAMERA_OFFSET UNITYSDK_OFFSET(0xDF5F000)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xDF602F0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET UNITYSDK_OFFSET(0xDF60860)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIEEND_OFFSET UNITYSDK_OFFSET(0xDF5FBC0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIESTART_OFFSET UNITYSDK_OFFSET(0xDF5F9A0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xDF605F0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSERESUME_OFFSET UNITYSDK_OFFSET(0xDF607F0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET UNITYSDK_OFFSET(0xDF609A0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xDF60460)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xDF60100)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_OPENMASK_OFFSET UNITYSDK_OFFSET(0xDF5D870)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_PREPARETICK_OFFSET UNITYSDK_OFFSET(0xDF5F710)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETCAPTIONALPHA_OFFSET UNITYSDK_OFFSET(0xDF60E90)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETUPCAPTION_OFFSET UNITYSDK_OFFSET(0xDF5D660)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET UNITYSDK_OFFSET(0xDF60D60)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKCAPTION_OFFSET UNITYSDK_OFFSET(0xDF5E4E0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKNEARLYEND_OFFSET UNITYSDK_OFFSET(0xDF5EA20)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKVIDEOSTEP_OFFSET UNITYSDK_OFFSET(0xDF5E1B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xDF5EBE0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHANGEENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0xDF60AE0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHECKNOLOGERRORPAUSE_OFFSET UNITYSDK_OFFSET(0xDF5DEC0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xDF5CFB0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__GETWAITEXITFRAME_OFFSET UNITYSDK_OFFSET(0xDF61060)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__INITENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0xDF5DBD0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDF5ECC0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0xDF5F0E0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xDF5DE40)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPBUTTONSHOW_OFFSET UNITYSDK_OFFSET(0xDF5D490)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xDF5D420)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPageContext_TypeDefinitionIndex = 75032;

	class ManaVideoPageContext : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::LuaUIController* _skilDialog; // 0x190
		::System::String* _videoFullPath; // 0x198
		::RPG::GameCore::VideoCaptionConfig* _captionConfig; // 0x1A0
		::CriWare::CriManaMovieControllerForUI* _movieControllerForUI; // 0x1A8
		::IGCLGKCKACE _videoKey; // 0x1B0
		::Il2CppArray<::RPG::GameCore::VideoCaption*>* _ActiveCaptionConfig; // 0x1D0
		::CriWare::CriMana::Player_Status _lastPlayerStatus; // 0x1D8
		::System::UInt32 _videoID; // 0x1DC
		::System::Boolean _isDebug; // 0x1E0
		::System::Boolean _isMasking; // 0x1E1
		::System::Boolean _hasCaption; // 0x1E2
		::System::Byte _padding0[0x1];
		::System::Single _lastVideoTime; // 0x1E4
		::System::Single _maskTimer; // 0x1E8
		::System::UInt32 _PerformanceID; // 0x1EC
		::System::UInt32 _blockUID; // 0x1F0
		::RPG::Client::ManaVideoPageContext_VideoPlayStep _videoStep; // 0x1F4
		::System::UInt64 _NoLogErrorPauseFrameTime; // 0x1F8
		::RPG::Client::LockSource _LockSource; // 0x200
		::System::Single _NoLogErrorPauseTime; // 0x204
		::UnityEngine::Color _maskColor; // 0x208
		::System::Single _EndBlackBeforeTime; // 0x218
		::System::Boolean _isLoop; // 0x21C
		::System::Boolean _canSkip; // 0x21D
		::System::Boolean _HasSend_VideoNearlyEnd; // 0x21E
		::System::Boolean _isVideoPlaying; // 0x21F
		::System::Int32 _controllerRuntimeID; // 0x220
		static ::System::Int32* StaticGet_WAIT_DIALOG_FRAME()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ManaVideoPageContext")->GetStaticField(0xFEA0);
		}

		static ::System::Int32* StaticGet_WAIT_TRIGGER_CUSTOM_STRING()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ManaVideoPageContext")->GetStaticField(0xFEA4);
		}

		static ::System::Int32* StaticGet_WAIT_CRACK_FRAME()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ManaVideoPageContext")->GetStaticField(0xFEA8);
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
