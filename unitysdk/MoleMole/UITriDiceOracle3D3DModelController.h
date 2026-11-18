#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

class FILNFMCNCFE;
class HCCACMKPDGA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0x166FB4B0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x166FB500)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CONTROLROOT_OFFSET UNITYSDK_OFFSET(0x166FB4E0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_MODELROOT_OFFSET UNITYSDK_OFFSET(0x166FB4C0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x166FB520)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x166FB4A0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x166FC2E0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITMODELTRANS_OFFSET UNITYSDK_OFFSET(0x166FBA10)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166FBCA0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166FBD30)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166FB530)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166FBC50)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_SHOWCAMERA_OFFSET UNITYSDK_OFFSET(0x166FC930)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x166FCA30)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166FC9C0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166FCA40)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166FCAD0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166FCAE0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166FCAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracle3D3DModelController_TypeDefinitionIndex = 90663;

	class UITriDiceOracle3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_RTWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracle3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x12470);
		}
		// static const ::System::Int32 PNBFNNBOJKP = 0xD; // 0x0
		// static const ::System::Int32 GOBAMOJFGLH = 0xE; // 0x0
		// static const ::System::String* HCMMKEKHFOB; // 0x0
		// static const ::System::String* CCLBLLCKICP; // 0x0
		::HCCACMKPDGA* _view; // 0x368
		::UnityEngine::NAPRenderPipeline0::RTHandle* KMOCNMKJNKH; // 0x370
		::UnityEngine::GameObject* ModelGameObject; // 0x378
		::MoleMole::Battle::Entity* ModelEntity; // 0x380
		::UnityEngine::GameObject* DiceGameObject; // 0x388
		::MoleMole::Battle::Entity* DiceEntity; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::CameraRenderType get_CameraRenderType()
		{
			return ((::UnityEngine::NAPRenderPipeline0::CameraRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ModelRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_MODELROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ControlRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CONTROLROOT_OFFSET))(this);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERA_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitModelTrans()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITMODELTRANS_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitCamera(::FILNFMCNCFE* target)
		{
			return ((::System::Void(*)(::PVOID, ::FILNFMCNCFE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITCAMERA_OFFSET))(this, target);
		}

		::System::Void ShowCamera(::FILNFMCNCFE* target)
		{
			return ((::System::Void(*)(::PVOID, ::FILNFMCNCFE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_SHOWCAMERA_OFFSET))(this, target);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
