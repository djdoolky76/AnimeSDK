#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIDisplayCase3DModelController_CameraCfg.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BDPKJHKPGON;
class OCAIMDEIIKG;
namespace Cinemachine { class CinemachineCollider; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_AOJJKJFNFAL_OFFSET UNITYSDK_OFFSET(0x1757F2B0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_BNPDIAJELME_OFFSET UNITYSDK_OFFSET(0x1757F2D0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1757CFA0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GCFNHEAGHIA_OFFSET UNITYSDK_OFFSET(0x1757E010)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GETMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x1757E820)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEFWD_OFFSET UNITYSDK_OFFSET(0x1757C5B0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASERIGHT_OFFSET UNITYSDK_OFFSET(0x1757C470)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEUP_OFFSET UNITYSDK_OFFSET(0x1757C340)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOTPOS_OFFSET UNITYSDK_OFFSET(0x1757C170)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1757C330)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITCAMPOS_OFFSET UNITYSDK_OFFSET(0x1757D0A0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1757C8D0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INJOLOMMEEP_OFFSET UNITYSDK_OFFSET(0x1757F010)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ISCAMERADIRTY_OFFSET UNITYSDK_OFFSET(0x1757E2C0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_MOVECAMERA_OFFSET UNITYSDK_OFFSET(0x1757E6B0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_NPLHGJDBIFL_OFFSET UNITYSDK_OFFSET(0x1757EAB0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1757CD80)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1757CE10)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1757C6E0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1757CD30)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_REPOSITIONCAMERA_OFFSET UNITYSDK_OFFSET(0x1757E550)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x1757CF10)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x1757EE60)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_SETPIVOTPOS_OFFSET UNITYSDK_OFFSET(0x1757ECC0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ZOOMCAMERA_OFFSET UNITYSDK_OFFSET(0x1757F060)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1757F0F0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1757F160)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1757F1F0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1757F280)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1757F290)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1757F2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCase3DModelController_TypeDefinitionIndex = 43896;

	class UIDisplayCase3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* HBHIJHCDNIB; // 0x0
		// static const ::System::String* KMCMGPLHOLJ; // 0x0
		::MoleMole::UIDisplayCase3DModelController_CameraCfg CameraData; // 0x368
		::BDPKJHKPGON* _view; // 0x450
		::OCAIMDEIIKG* OPOLMJLMHCD; // 0x458
		::UnityEngine::Vector3 KLILFBFAELK; // 0x460
		::UnityEngine::Vector3 FDFGAOLOHGK; // 0x46C
		::UnityEngine::Quaternion AOIFOJKGGFP; // 0x478
		::UnityEngine::Quaternion caseRot; // 0x488
		::Foundation::Unreal::FTransform FPBNHPCLHMI; // 0x498
		::UnityEngine::Transform* JCDPMKNIIPA; // 0x4B8
		::System::Single BDEDDEGJFKL; // 0x4C0
		::UnityEngine::Bounds EHOKLFPCLKO; // 0x4C4
		::System::Byte _padding0[0x4];
		::Cinemachine::CinemachineCollider* GEEFCPFAADA; // 0x4E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOTPOS_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Pivot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CaseUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CaseRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASERIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CaseFwd()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEFWD_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void InitCamPos(::System::Boolean isFemale, ::System::Boolean isFriend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITCAMPOS_OFFSET))(this, isFemale, isFriend);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_RESETCAMERA_OFFSET))(this);
		}

		::System::Boolean IsCameraDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ISCAMERADIRTY_OFFSET))(this);
		}

		::System::Void RepositionCamera(::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_REPOSITIONCAMERA_OFFSET))(this, resetPos);
		}

		::System::Void MoveCamera(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_MOVECAMERA_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::UnityEngine::Vector3 GetMoveDelta(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GETMOVEDELTA_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::System::Void SetPivotPos(::UnityEngine::Vector3 newPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_SETPIVOTPOS_OFFSET))(this, newPos);
		}

		::System::Void RotateCamera(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ROTATECAMERA_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::System::Void ZoomCamera(::System::Single deltaFov)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ZOOMCAMERA_OFFSET))(this, deltaFov);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::Foundation::Unreal::FTransform AOJJKJFNFAL()
		{
			return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_AOJJKJFNFAL_OFFSET))(this);
		}

		::System::Boolean NPLHGJDBIFL(::UnityEngine::Vector3 HBEKKMCBGBK)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_NPLHGJDBIFL_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Boolean INJOLOMMEEP(::UnityEngine::Vector2 DINHKIGECGG)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INJOLOMMEEP_OFFSET))(this, DINHKIGECGG);
		}

		::Foundation::Unreal::FTransform BNPDIAJELME()
		{
			return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_BNPDIAJELME_OFFSET))(this);
		}

		::System::Void GCFNHEAGHIA(::MoleMole::UIVirtualCameraConfigs* AMJADGKJAPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirtualCameraConfigs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GCFNHEAGHIA_OFFSET))(this, AMJADGKJAPK);
		}
	};
}
