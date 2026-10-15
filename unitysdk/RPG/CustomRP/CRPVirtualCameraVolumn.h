#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VirtualCameraMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"
namespace RPG::CustomRP { class CRPVirtualCameraCmd; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn_PostUpdateVCCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBDEF10)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDEE70)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEHIZOC_OFFSET UNITYSDK_OFFSET(0x1CBDEB90)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1CBDED00)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_HASVCCAMERA_OFFSET UNITYSDK_OFFSET(0x1CBDE9E0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CBDEAA0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CBDE9F0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_RESETVC_OFFSET UNITYSDK_OFFSET(0x1CBDE980)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_UPDATEACTIVEVC_OFFSET UNITYSDK_OFFSET(0x1CBDE740)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPVirtualCameraVolumn_TypeDefinitionIndex = 37692;

	class CRPVirtualCameraVolumn : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Rendering::CRPVirtualCamera*>* virtualCameras; // 0x18
		::Il2CppArray<::RPG::CustomRP::CRPVirtualCameraCmd*>* virtualCameraCmds; // 0x20
		::System::Int32 vcCameraCount; // 0x28
		::UnityEngine::Vector4 splitPoints; // 0x2C
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* reIndex; // 0x40
		::RPG::CustomRP::VirtualCameraMode vcMode; // 0x48
		::System::Boolean backgroundUseVCMask; // 0x4C
		::System::Byte _padding1[0x3];
		::System::Int32 realVCCameraCount; // 0x50
		::System::Byte _padding2[0x4];
		::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera* postUpdateVCCamera; // 0x58
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::CRPVirtualCameraVolumn*>** StaticGet_s_CurrentVCVolumn()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::CRPVirtualCameraVolumn*>**)UnitySDK::FromName("RPG.CustomRP", "CRPVirtualCameraVolumn")->GetStaticField(0x2AF10);
		}

		static ::System::Boolean* StaticGet_lastVCCameraEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "CRPVirtualCameraVolumn")->GetStaticField(0x8CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_CCTOR_OFFSET))();
		}

		::System::Void UpdateActiveVC(::UnityEngine::Rendering::CRPCameraInfo a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPCameraInfo, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_UPDATEACTIVEVC_OFFSET))(this, a1, a2);
		}

		static ::System::Void ResetVC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_RESETVC_OFFSET))();
		}

		::System::Boolean HasVCCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_HASVCCAMERA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONDISABLE_OFFSET))(this);
		}

		static ::System::Boolean get_DisableHizOC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEHIZOC_OFFSET))();
		}

		static ::System::Boolean get_DisableVolumetricFog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEVOLUMETRICFOG_OFFSET))();
		}

	};
}
