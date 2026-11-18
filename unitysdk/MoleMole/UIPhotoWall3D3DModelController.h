#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BDPKJHKPGON;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x17B96F40)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETFOV_OFFSET UNITYSDK_OFFSET(0x17B96A50)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETHORIZONTALCLAMP_OFFSET UNITYSDK_OFFSET(0x17B96E20)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x17B96AB0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETOFFSET_OFFSET UNITYSDK_OFFSET(0x17B96B60)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETVERTICALCLAMP_OFFSET UNITYSDK_OFFSET(0x17B96DC0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETWALLPOS_OFFSET UNITYSDK_OFFSET(0x17B967B0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17B96000)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x17B96600)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17B966B0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17B96740)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B96010)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17B96660)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_ADDFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x17B969B0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_MOVE_OFFSET UNITYSDK_OFFSET(0x17B96820)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_RESET_OFFSET UNITYSDK_OFFSET(0x17B96560)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x17B96D20)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETHORIZONTALCLAMP_OFFSET UNITYSDK_OFFSET(0x17B96EE0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x17B96BB0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETVERTICALCLAMP_OFFSET UNITYSDK_OFFSET(0x17B96E80)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_RESETISFEMALE_OFFSET UNITYSDK_OFFSET(0x17B960D0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B96F90)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x17B97000)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17B97090)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17B97120)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B97130)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17B97140)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWall3D3DModelController_TypeDefinitionIndex = 77085;

	class UIPhotoWall3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::BDPKJHKPGON* _view; // 0x368
		::UnityEngine::Vector3 FKKALNBFKEI; // 0x370
		::UnityEngine::Vector3 BELEHOINMFC; // 0x37C
		::System::Single LNDINGDNAJK; // 0x388
		::System::Single Top; // 0x38C
		::System::Single Down; // 0x390
		::System::Single Left; // 0x394
		::System::Single Right; // 0x398
		::System::Single MinFov; // 0x39C
		::System::Single MaxFov; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ResetIsFemale(::System::Boolean isFemale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_RESETISFEMALE_OFFSET))(this, isFemale);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetWallPos(::System::Boolean isFemale)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETWALLPOS_OFFSET))(this, isFemale);
		}

		::System::Void Op_Move(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_MOVE_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::System::Void Op_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_RESET_OFFSET))(this);
		}

		::System::Void Op_AddFieldOfView(::System::Single fieldOfView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_ADDFIELDOFVIEW_OFFSET))(this, fieldOfView);
		}

		::System::Single GetFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETFOV_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETLOCATION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETOFFSET_OFFSET))(this);
		}

		::System::Void Op_SetOffset(::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETOFFSET_OFFSET))(this, offset);
		}

		::System::Void Op_SetFieldOfView(::System::Single fieldOfView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETFIELDOFVIEW_OFFSET))(this, fieldOfView);
		}

		::UnityEngine::Vector2 GetVerticalClamp()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETVERTICALCLAMP_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetHorizontalClamp()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETHORIZONTALCLAMP_OFFSET))(this);
		}

		::System::Void Op_SetVerticalClamp(::UnityEngine::Vector2 minMax)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETVERTICALCLAMP_OFFSET))(this, minMax);
		}

		::System::Void Op_SetHorizontalClamp(::UnityEngine::Vector2 minMax)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETHORIZONTALCLAMP_OFFSET))(this, minMax);
		}

		::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETCAMERA_OFFSET))(this);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
