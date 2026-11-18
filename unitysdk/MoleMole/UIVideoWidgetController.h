#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class DGDNKBFMHME;
class EJNHNPDFMJJ;
class MFBKLAENAEC;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoWidgetContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CAPHEEAILDP_OFFSET UNITYSDK_OFFSET(0x15644030)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CEFKBNMNKPC_OFFSET UNITYSDK_OFFSET(0x15644920)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CHECKENDPAUSE_OFFSET UNITYSDK_OFFSET(0x156427A0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_DKIJGODGKJN_OFFSET UNITYSDK_OFFSET(0x15643760)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_DMDCCKBKFLE_OFFSET UNITYSDK_OFFSET(0x156443F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ENABLEROOTNOSKIPBTN_OFFSET UNITYSDK_OFFSET(0x15642260)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_FULLSCREENVIDEOFADEOUT_OFFSET UNITYSDK_OFFSET(0x156422F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GENERALBLACKMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x156421C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GETDURATION_OFFSET UNITYSDK_OFFSET(0x156425C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GFNEJOJAMKF_OFFSET UNITYSDK_OFFSET(0x156433D0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GLKHOCKIBDL_OFFSET UNITYSDK_OFFSET(0x156448B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GNLOBCNCKKM_OFFSET UNITYSDK_OFFSET(0x15644990)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_HHLPPKOJDPD_OFFSET UNITYSDK_OFFSET(0x15644810)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_HLPIIJGHIDO_OFFSET UNITYSDK_OFFSET(0x15643F00)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ILMLOBLLHHD_OFFSET UNITYSDK_OFFSET(0x15641840)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_JGDPDJDNPDD_OFFSET UNITYSDK_OFFSET(0x156416B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_JHODDKINEBG_OFFSET UNITYSDK_OFFSET(0x15643CD0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_JKADGKCDMHB_OFFSET UNITYSDK_OFFSET(0x15644860)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156418B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x156428C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x15643A20)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15641B10)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15641390)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156414E0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x15642680)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEOUT_OFFSET UNITYSDK_OFFSET(0x15641940)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x15642450)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_RECOVER_OFFSET UNITYSDK_OFFSET(0x15642710)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x156436C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x156423F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0x15641E70)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_TRYSETSPEED_OFFSET UNITYSDK_OFFSET(0x15642990)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15642B60)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15644540)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER__UPDATE_G___ACCELERATE_22_0_OFFSET UNITYSDK_OFFSET(0x156433C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156445A0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15644630)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15644660)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156446F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15644780)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoWidgetController_TypeDefinitionIndex = 64327;

	class UIVideoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EJNHNPDFMJJ* _view; // 0x2C8
		::DGDNKBFMHME* DICDPBGGHCP; // 0x2D0
		::MoleMole::UIVideoWidgetContext* DAAAEJDBNFI; // 0x2D8
		::MoleMole::IVideoPlayer* CCDMEKCLPPJ; // 0x2E0
		::Foundation::AssetRequestHandle OELFBNHPJDO; // 0x2E8
		::MFBKLAENAEC* GNMPIBIINKM; // 0x308
		::System::Single DICENAHFINB; // 0x310
		::System::Boolean POMFLHEFPNB; // 0x314
		::System::Byte _padding0[0x3];
		::System::Int32 IAABBENJIPB; // 0x318
		::System::Boolean PGNHHBKPOGD; // 0x31C
		::System::Boolean FCDKMOFABNB; // 0x31D
		::System::Boolean OIFAPMPAHJA; // 0x31E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Single PlayMovieBarFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEOUT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void GeneralBlackMaskFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GENERALBLACKMASKFADEIN_OFFSET))(this);
		}

		::System::Void EnableRootNoSkipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ENABLEROOTNOSKIPBTN_OFFSET))(this);
		}

		::System::Single FullScreenVideoFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_FULLSCREENVIDEOFADEOUT_OFFSET))(this);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PAUSE_OFFSET))(this);
		}

		::System::Void Recover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_RECOVER_OFFSET))(this);
		}

		::System::UInt64 GetDuration()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GETDURATION_OFFSET))(this);
		}

		::System::Void CheckEndPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CHECKENDPAUSE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void TrySetSpeed(::System::Single speedFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_TRYSETSPEED_OFFSET))(this, speedFactor);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartPlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPLAYVIDEO_OFFSET))(this);
		}

		::System::Void OnPrepareCompleted(::MoleMole::IVideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONPREPARECOMPLETED_OFFSET))(this, source);
		}

		static ::System::Void _Update_g___accelerate_22_0(::System::Int32 startFrame, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* configs)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER__UPDATE_G___ACCELERATE_22_0_OFFSET))(startFrame, configs);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void HHLPPKOJDPD(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_HHLPPKOJDPD_OFFSET))(this, KHGFAKJKDGG);
		}

		::System::Void JKADGKCDMHB(::MoleMole::IVideoPlayer* KHGFAKJKDGG, ::System::String* NAPFALLANDL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_JKADGKCDMHB_OFFSET))(this, KHGFAKJKDGG, NAPFALLANDL);
		}

		::System::Void JHODDKINEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_JHODDKINEBG_OFFSET))(this);
		}

		::System::Void HLPIIJGHIDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_HLPIIJGHIDO_OFFSET))(this);
		}

		::System::Void JGDPDJDNPDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_JGDPDJDNPDD_OFFSET))(this);
		}

		::System::Void DMDCCKBKFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_DMDCCKBKFLE_OFFSET))(this);
		}

		::System::Void ILMLOBLLHHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ILMLOBLLHHD_OFFSET))(this);
		}

		::System::Void GFNEJOJAMKF(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GFNEJOJAMKF_OFFSET))(this, KHGFAKJKDGG);
		}

		::System::Void CAPHEEAILDP(::MoleMole::IVideoPlayer* CEHEDIJEJFG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CAPHEEAILDP_OFFSET))(this, CEHEDIJEJFG);
		}

		::System::Void GLKHOCKIBDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GLKHOCKIBDL_OFFSET))(this);
		}

		::System::Void CEFKBNMNKPC(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CEFKBNMNKPC_OFFSET))(this, LNEEMAGIHLB);
		}

		::System::Void GNLOBCNCKKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GNLOBCNCKKM_OFFSET))(this);
		}

		::System::Void DKIJGODGKJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_DKIJGODGKJN_OFFSET))(this);
		}
	};
}
