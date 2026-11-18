#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOMELEACMOJ.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaProjectorStruct.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/NLABJBKHKFP.h"
#include "unitysdk/PDOGAEIGGAK.h"
#include "unitysdk/PENMJFEDDMF.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/MoleMole/ConfigCinemaDepthOfFieldParam.h"

class MPLKFDLCENM;
namespace MoleMole { class MonoCinemaCameraConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ADJUSTPROJECTORPOSITION_OFFSET UNITYSDK_OFFSET(0x1966FE40)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGECINEMALIGHTSTATE_OFFSET UNITYSDK_OFFSET(0x19671AD0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORACTIVE_OFFSET UNITYSDK_OFFSET(0x1966FDD0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORPOSITION_OFFSET UNITYSDK_OFFSET(0x1966FE90)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CINEMASETCAMERA_OFFSET UNITYSDK_OFFSET(0x19671C70)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x19671A30)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x196711B0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x196711A0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITCINEMAENV_OFFSET UNITYSDK_OFFSET(0x19671A80)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITPROJECTOR_OFFSET UNITYSDK_OFFSET(0x1966FC20)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITVOLUME_OFFSET UNITYSDK_OFFSET(0x19670380)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19671700)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19671790)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196711C0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196716B0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAGROUP_OFFSET UNITYSDK_OFFSET(0x196713E0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAINITDATA_OFFSET UNITYSDK_OFFSET(0x19672060)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMAAVATARLIGHTWITHCAMERA_OFFSET UNITYSDK_OFFSET(0x19672490)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMACAMERAFOGEFFECT_OFFSET UNITYSDK_OFFSET(0x19672710)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHENABLE_OFFSET UNITYSDK_OFFSET(0x19670590)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDMODE_OFFSET UNITYSDK_OFFSET(0x196707C0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_1_OFFSET UNITYSDK_OFFSET(0x19670B60)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_OFFSET UNITYSDK_OFFSET(0x19670860)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETFOGPARAM_OFFSET UNITYSDK_OFFSET(0x19670DA0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SWITCHCAMERAPOS_OFFSET UNITYSDK_OFFSET(0x196714A0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19672E90)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19672F00)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19672F90)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19672FA0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19672FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlay3DModelController_TypeDefinitionIndex = 72289;

	class UICinemaPlay3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::MoleMole::CinemaProjectorStruct defaultProjectorPos; // 0x368
		::UnityEngine::Rendering::Volume* postVolume; // 0x380
		::UnityEngine::Rendering::Universal::DepthOfField* depthOfField; // 0x388
		::MPLKFDLCENM* _view; // 0x390
		::MoleMole::MonoCinemaCameraConfig* nowCameraConfig; // 0x398
		::MoleMole::CinemaCameraPosEnum nowCameraPosEnum; // 0x3A0
		::NLABJBKHKFP nowLightState; // 0x3A4
		::UnityEngine::GameObject* nowLightGameObject; // 0x3A8
		::UnityEngine::GameObject* nowEffectGameObject; // 0x3B0
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::FOMELEACMOJ>* cameraInitDict; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::PDOGAEIGGAK>* fogEffectInitData; // 0x3C0
		::FOMELEACMOJ nowCameraInitData; // 0x3C8
		::FOMELEACMOJ nowCameraMoveBaseData; // 0x3E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitProjector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITPROJECTOR_OFFSET))(this);
		}

		::System::Void ChangeProjectorActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORACTIVE_OFFSET))(this, isActive);
		}

		::System::Void AdjustProjectorPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ADJUSTPROJECTORPOSITION_OFFSET))(this);
		}

		::System::Void ChangeProjectorPosition(::MoleMole::CinemaCameraPosEnum posEnum)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORPOSITION_OFFSET))(this, posEnum);
		}

		::System::Void InitVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITVOLUME_OFFSET))(this);
		}

		::System::Void SetDepthEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHENABLE_OFFSET))(this, enable);
		}

		::System::Void SetDepthOfFieldMode(::UnityEngine::Rendering::Universal::DepthOfFieldMode fieldMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfFieldMode))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDMODE_OFFSET))(this, fieldMode);
		}

		::System::Void SetDepthOfFieldState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_OFFSET))(this);
		}

		::System::Void SetDepthOfFieldState_1(::MoleMole::ConfigCinemaDepthOfFieldParam depthParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigCinemaDepthOfFieldParam))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_1_OFFSET))(this, depthParam);
		}

		::System::Void SetFogParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETFOGPARAM_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MPLKFDLCENM* GetView()
		{
			return ((::MPLKFDLCENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void InitCinemaEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITCINEMAENV_OFFSET))(this);
		}

		::System::Void SetCameraGroup(::PENMJFEDDMF groupEnum)
		{
			return ((::System::Void(*)(::PVOID, ::PENMJFEDDMF))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAGROUP_OFFSET))(this, groupEnum);
		}

		::System::Void SwitchCameraPos(::MoleMole::CinemaCameraPosEnum cameraSite)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SWITCHCAMERAPOS_OFFSET))(this, cameraSite);
		}

		::System::Void CinemaSetCamera(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CINEMASETCAMERA_OFFSET))(this, targetCamera);
		}

		::System::Void SetCameraInitData(::MoleMole::CinemaCameraPosEnum cameraSite)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAINITDATA_OFFSET))(this, cameraSite);
		}

		::System::Void ChangeCinemaLightState(::NLABJBKHKFP lightState)
		{
			return ((::System::Void(*)(::PVOID, ::NLABJBKHKFP))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGECINEMALIGHTSTATE_OFFSET))(this, lightState);
		}

		::System::Void SetCinemaAvatarLightWithCamera(::MoleMole::CinemaCameraPosEnum cameraSite)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMAAVATARLIGHTWITHCAMERA_OFFSET))(this, cameraSite);
		}

		::System::Void SetCinemaCameraFogEffect(::MoleMole::CinemaCameraPosEnum cameraSite, ::System::Boolean isBindCamera)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMACAMERAFOGEFFECT_OFFSET))(this, cameraSite, isBindCamera);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
