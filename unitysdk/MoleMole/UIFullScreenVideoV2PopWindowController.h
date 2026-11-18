#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class DGDNKBFMHME;
class MBPAKCNCJAP;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET UNITYSDK_OFFSET(0x199A0D60)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1999FE00)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x199A0CD0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0x1999FE10)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1999FDF0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET UNITYSDK_OFFSET(0x199A0570)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_2_OFFSET UNITYSDK_OFFSET(0x199A0730)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x199A0330)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_NHABJFOAGJL_OFFSET UNITYSDK_OFFSET(0x199A0FA0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199A0090)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x199A0120)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199A02C0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1999FE20)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAYBYINDEX_OFFSET UNITYSDK_OFFSET(0x199A0BE0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x199A08D0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x199A0010)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0x199A0C70)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x199A0930)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x199A0DC0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199A0E20)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199A0EF0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x199A0E30)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199A0F80)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199A0F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenVideoV2PopWindowController_TypeDefinitionIndex = 59657;

	class UIFullScreenVideoV2PopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::MBPAKCNCJAP* _view; // 0x320
		::MoleMole::MultipleVideoPlayerManager* EHGOOJIMFII; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitVideoPlayer(::System::String* relativeUrl, ::System::Boolean loop, ::System::Action_1<::DGDNKBFMHME*>* onPrepare, ::System::Action_1<::DGDNKBFMHME*>* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET))(this, relativeUrl, loop, onPrepare, onEnd);
		}

		::System::Void InitVideoPlayer_1(::System::Collections::Generic::List_1<::System::Object*>* paramList, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd, ::System::Boolean onlyPrepare)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET))(this, paramList, onPrepare, onEnd, onlyPrepare);
		}

		::System::Void InitVideoPlayer_2(::System::String* videoGroupKey, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_2_OFFSET))(this, videoGroupKey, onPrepare, onEnd);
		}

		::System::Void Play(::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAY_OFFSET))(this, onEnd);
		}

		::System::Void TryPlay(::System::Action* onEnd, ::System::Boolean& isPreparing, ::System::Action* prepareFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean&, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_TRYPLAY_OFFSET))(this, onEnd, isPreparing, prepareFinished);
		}

		::System::Void PlayByIndex(::System::Int32 index, ::System::Boolean autoPlay, ::System::Action* onPlayNext, ::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAYBYINDEX_OFFSET))(this, index, autoPlay, onPlayNext, onEnd);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_SETALPHA_OFFSET))(this, v);
		}

		::System::Boolean get_IsPrePared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_ISPREPARED_OFFSET))(this);
		}

		::DGDNKBFMHME* get_CurrentVideoPlayerHelper()
		{
			return ((::DGDNKBFMHME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void NHABJFOAGJL(::System::EventArgs* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_NHABJFOAGJL_OFFSET))(this, EIFONLCJOPG);
		}
	};
}
