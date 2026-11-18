#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/OIMODCEKLPG.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

class CinemachineRecomposer;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIStorePageNPCConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class UICameraSettingData; }
namespace MoleMole::Config { class UICameraTransformInfo; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }

#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ADDNPCCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A3573A0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_BPPECKPNHNP_OFFSET UNITYSDK_OFFSET(0x1A355C80)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_CREATEUIANIMATORENTITY_OFFSET UNITYSDK_OFFSET(0x1A3571F0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_FNLDOBHNGIH_OFFSET UNITYSDK_OFFSET(0x1A358050)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x1A3551C0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERAOVERLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1A3551A0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1A3551D0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x1A3551B0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A355190)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1A3559E0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_KJBPLIBBLGI_OFFSET UNITYSDK_OFFSET(0x1A3582A0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_LHHKMLPELNP_OFFSET UNITYSDK_OFFSET(0x1A358480)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_LOADUISTOREPAGENPCS_OFFSET UNITYSDK_OFFSET(0x1A356D20)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_MHGFLKNPKCE_OFFSET UNITYSDK_OFFSET(0x1A3587F0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_NAGGPCKHNCL_OFFSET UNITYSDK_OFFSET(0x1A3584F0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A3561D0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A3551E0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A355B40)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_REMOVEALLUIANIMATORENTITIES_OFFSET UNITYSDK_OFFSET(0x1A356790)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETALLNPCACTIVE_OFFSET UNITYSDK_OFFSET(0x1A3577E0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCAMERARENDERTYPE2BASE_OFFSET UNITYSDK_OFFSET(0x1A355A20)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCINEMACHINERECOMPOSERPAN_OFFSET UNITYSDK_OFFSET(0x1A357C20)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETMODELCAMERA_OFFSET UNITYSDK_OFFSET(0x1A355430)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCCONFIG_OFFSET UNITYSDK_OFFSET(0x1A356C00)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A357930)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SYNCTRANSFORMPOS_OFFSET UNITYSDK_OFFSET(0x1A356BC0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A357F30)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A357FA0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A357FB0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A357FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBase3DModelController_TypeDefinitionIndex = 86809;

	class UIBase3DModelController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::Camera* ModelCamera; // 0x320
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* ModelCameraData; // 0x328
		::Cinemachine::CinemachineVirtualCamera* MainVirtualCamera; // 0x330
		::CinemachineRecomposer* _cinemachineRecomposer; // 0x338
		::System::Collections::Generic::List_1<::Foundation::Tuple_2<::System::String*, ::UnityEngine::GameObject*>>* _allLoadedNPCModels; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIStorePageNPCConfig*>* npcConfigDict; // 0x348
		::System::Collections::Generic::List_1<::System::UInt32>* IMAIBICEKPG; // 0x350
		::System::Collections::Generic::List_1<::System::UInt32>* OIOJNPEIHPP; // 0x358
		::System::String* IJIICDKDEHL; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Int32 get_CameraOverLayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERAOVERLAYINDEX_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::CameraRenderType get_CameraRenderType()
		{
			return ((::UnityEngine::NAPRenderPipeline0::CameraRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetModelCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETMODELCAMERA_OFFSET))(this, camera);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void SetCameraRenderType2Base()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCAMERARENDERTYPE2BASE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SyncTransformPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SYNCTRANSFORMPOS_OFFSET))(this);
		}

		::System::Void SetNPCConfig(::System::String* path, ::MoleMole::UIStorePageNPCConfig* configData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIStorePageNPCConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCCONFIG_OFFSET))(this, path, configData);
		}

		::System::Void LoadUIStorePageNPCs(::System::String* typeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_LOADUISTOREPAGENPCS_OFFSET))(this, typeKey);
		}

		::System::Void SetAllNPCActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETALLNPCACTIVE_OFFSET))(this, active);
		}

		::MoleMole::Battle::Entity* CreateUIAnimatorEntity(::UnityEngine::GameObject* modelGO, ::MoleMole::Config::EntityType entityType, ::System::Int32 templateID, ::System::Single scale)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_CREATEUIANIMATORENTITY_OFFSET))(this, modelGO, entityType, templateID, scale);
		}

		::System::Void RemoveAllUIAnimatorEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_REMOVEALLUIANIMATORENTITIES_OFFSET))(this);
		}

		::System::Void AddNpcCompleted(::MoleMole::UIStorePageNPCConfig* npcConfig, ::UnityEngine::GameObject* model, ::System::String* typeKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIStorePageNPCConfig*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ADDNPCCOMPLETED_OFFSET))(this, npcConfig, model, typeKey);
		}

		::System::Void SetNPCTrigger(::OIMODCEKLPG performTriggerType)
		{
			return ((::System::Void(*)(::PVOID, ::OIMODCEKLPG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCTRIGGER_OFFSET))(this, performTriggerType);
		}

		::System::Void SetCinemachineRecomposerPan(::System::Single destPan, ::System::Single during, ::System::String* curveKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCINEMACHINERECOMPOSERPAN_OFFSET))(this, destPan, during, curveKey);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean FNLDOBHNGIH(::MoleMole::Config::UICameraSettingData* DFMKILICPFB, ::MoleMole::Config::UICameraTransformInfo*& HMMMOCJAEOA)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UICameraSettingData*, ::MoleMole::Config::UICameraTransformInfo*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_FNLDOBHNGIH_OFFSET))(this, DFMKILICPFB, HMMMOCJAEOA);
		}

		::System::Void KJBPLIBBLGI(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_KJBPLIBBLGI_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void LHHKMLPELNP(::System::Single GGGCPICGENM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_LHHKMLPELNP_OFFSET))(this, GGGCPICGENM);
		}

		::System::Void NAGGPCKHNCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_NAGGPCKHNCL_OFFSET))(this);
		}

		::System::Single MHGFLKNPKCE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_MHGFLKNPKCE_OFFSET))(this);
		}

		::System::Void BPPECKPNHNP(::System::String* OHAOJEPDLLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_BPPECKPNHNP_OFFSET))(this, OHAOJEPDLLC);
		}
	};
}
