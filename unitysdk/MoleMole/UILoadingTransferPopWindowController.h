#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UILoadingTransferPopWindowController_PlayType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class ACAIPOAMLJO;
class DGDNKBFMHME;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFullScreenVideoV2PopInLoadingWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_CKGGMPPAPLL_OFFSET UNITYSDK_OFFSET(0x196FA940)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_COMPAREPLAYPARAMS_OFFSET UNITYSDK_OFFSET(0x196FA6A0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ELFNKBNEBOF_OFFSET UNITYSDK_OFFSET(0x196FA470)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x196F9130)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x196F8FD0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x196F9040)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x196F8C70)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x196F8DC0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x196F8EE0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x196F8F40)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISVIDEOSHOW_OFFSET UNITYSDK_OFFSET(0x196F92A0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0x196F8DB0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x196F92B0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x196F8C60)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_HEJNIMKGILE_OFFSET UNITYSDK_OFFSET(0x196FA930)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_IGFDOLADIIL_OFFSET UNITYSDK_OFFSET(0x196F90D0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET UNITYSDK_OFFSET(0x196F9730)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x196F95F0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_KAPNJEMLMIJ_OFFSET UNITYSDK_OFFSET(0x196FAA10)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_KEHDAAONGEB_OFFSET UNITYSDK_OFFSET(0x196F9210)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196F9360)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196F93F0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196F92C0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x196FA4F0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x196F8C80)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_CURVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x196F9030)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_ISVIDEOSHOW_OFFSET UNITYSDK_OFFSET(0x196F9140)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPANDHIDE_OFFSET UNITYSDK_OFFSET(0x196F9AD0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x196F9F30)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x196FA760)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196FA710)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196FA7F0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196FA880)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196FA890)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x196FA8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransferPopWindowController_TypeDefinitionIndex = 41522;

	class UILoadingTransferPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_kToBattlePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3A930);
		}
		static ::System::String** StaticGet_kTranformBattle2ToHollowPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3A938);
		}
		static ::System::String** StaticGet_kBattle2ChessboardPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3A940);
		}
		static ::System::String** StaticGet_kBattle2ChessboardFakeLoadingPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3A948);
		}
		static ::System::String** StaticGet_kToBattleFakeLoadingPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3A950);
		}
		::MoleMole::UILoadingTransferPopWindowController_PlayType _OECPDKEFINA_k__BackingField; // 0x320
		::System::Boolean BMFAPGACODB; // 0x324
		::System::Byte _padding0[0x3];
		::ACAIPOAMLJO* _view; // 0x328
		::System::String* IPHFEENNJDK; // 0x330
		::MoleMole::MultipleVideoPlayerManager* EHGOOJIMFII; // 0x338
		::System::UInt32 NALIEGIIKNP; // 0x340
		::System::Boolean GKKMPLJOJNC; // 0x344
		::System::Boolean HOGMADPOLJO; // 0x345
		::System::Byte _padding1[0x2];
		::System::Action* LDAELOBJFKP; // 0x348
		::MoleMole::UIFullScreenVideoV2PopInLoadingWindowController* IIEEEJGGOFH; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISREADY_OFFSET))(this);
		}

		::System::String* get_CurVideoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURVIDEOPATH_OFFSET))(this);
		}

		::System::Void set_CurVideoPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_CURVIDEOPATH_OFFSET))(this, value);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_DURATION_OFFSET))(this);
		}

		::MoleMole::UILoadingTransferPopWindowController_PlayType get_CurPlayType()
		{
			return ((::MoleMole::UILoadingTransferPopWindowController_PlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_IsVideoShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_ISVIDEOSHOW_OFFSET))(this, value);
		}

		::System::Boolean get_IsVideoShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISVIDEOSHOW_OFFSET))(this);
		}

		::MoleMole::MultipleVideoPlayerManager* get_VideoPlayer()
		{
			return ((::MoleMole::MultipleVideoPlayerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_VIDEOPLAYER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitVideoPlayer(::System::String* videoPath, ::System::Boolean loop, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd, ::System::String* fakeLoadingVideoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET))(this, videoPath, loop, onPrepare, onEnd, fakeLoadingVideoPath);
		}

		::System::Void InitVideoPlayer_1(::System::Collections::Generic::List_1<::System::Object*>* videoPlayParams, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd, ::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>* onVideoStartPlay, ::System::String* fakeLoadingVideoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET))(this, videoPlayParams, onPrepare, onEnd, onVideoStartPlay, fakeLoadingVideoPath);
		}

		::System::Void StopAndHide(::System::Action* onStopAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPANDHIDE_OFFSET))(this, onStopAction);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_PLAY_OFFSET))(this);
		}

		::System::Boolean ComparePlayParams(::System::Collections::Generic::List_1<::System::Object*>* videoPlayParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_COMPAREPLAYPARAMS_OFFSET))(this, videoPlayParams);
		}

		::System::Void StopImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPIMMEDIATELY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void HEJNIMKGILE(::MoleMole::UILoadingTransferPopWindowController_PlayType EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILoadingTransferPopWindowController_PlayType))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_HEJNIMKGILE_OFFSET))(this, EGEGIMGMJHN);
		}

		::DGDNKBFMHME* IGFDOLADIIL()
		{
			return ((::DGDNKBFMHME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_IGFDOLADIIL_OFFSET))(this);
		}

		::System::Void CKGGMPPAPLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_CKGGMPPAPLL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ELFNKBNEBOF()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ELFNKBNEBOF_OFFSET))(this);
		}

		::System::Void KAPNJEMLMIJ(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_KAPNJEMLMIJ_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void KEHDAAONGEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_KEHDAAONGEB_OFFSET))(this);
		}
	};
}
