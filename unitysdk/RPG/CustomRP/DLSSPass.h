#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_Parameters.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_ViewResources.h"
#include "unitysdk/UnityEngine/NVIDIA/OptimalDLSSSettingsData.h"
#include "unitysdk/UnityEngine/Rendering/DLSSData.h"
namespace RPG::CustomRP { class DLSSPass; }
namespace RPG::CustomRP { class DLSSPass_CameraState; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading::Tasks { class Task; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NVIDIA { class GraphicsDevice; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_DLSSPASS_BEGINFRAME_OFFSET UNITYSDK_OFFSET(0x198BD4E0)
#define RPG_CUSTOMRP_DLSSPASS_CCTOR_OFFSET UNITYSDK_OFFSET(0x198BF880)
#define RPG_CUSTOMRP_DLSSPASS_CLEANUPCAMERASTATES_OFFSET UNITYSDK_OFFSET(0x198BECF0)
#define RPG_CUSTOMRP_DLSSPASS_CREATE_OFFSET UNITYSDK_OFFSET(0x198BD310)
#define RPG_CUSTOMRP_DLSSPASS_CRPEXECUTE_OFFSET UNITYSDK_OFFSET(0x198BDFF0)
#define RPG_CUSTOMRP_DLSSPASS_CRPRENDER_OFFSET UNITYSDK_OFFSET(0x198BE4A0)
#define RPG_CUSTOMRP_DLSSPASS_CTOR_OFFSET UNITYSDK_OFFSET(0x198BD3B0)
#define RPG_CUSTOMRP_DLSSPASS_GETBASERENDERSCALE_OFFSET UNITYSDK_OFFSET(0x198BD270)
#define RPG_CUSTOMRP_DLSSPASS_GETRENDERSCALEFROMBASE_OFFSET UNITYSDK_OFFSET(0x198BD2C0)
#define RPG_CUSTOMRP_DLSSPASS_GET_VERSIONINDEX_OFFSET UNITYSDK_OFFSET(0x198BE8F0)
#define RPG_CUSTOMRP_DLSSPASS_HASCAMERASTATEEXPIRED_OFFSET UNITYSDK_OFFSET(0x198BE950)
#define RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIABEGINFRAME_OFFSET UNITYSDK_OFFSET(0x198BD4F0)
#define RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIARENDER_OFFSET UNITYSDK_OFFSET(0x198BDC50)
#define RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIASETUPDRSSCALING_OFFSET UNITYSDK_OFFSET(0x198BD860)
#define RPG_CUSTOMRP_DLSSPASS_ISOPTIMALSETTINGSVALID_OFFSET UNITYSDK_OFFSET(0x198BE910)
#define RPG_CUSTOMRP_DLSSPASS_PROCESSINVALIDCAMERAS_OFFSET UNITYSDK_OFFSET(0x198BE9A0)
#define RPG_CUSTOMRP_DLSSPASS_RENDER_OFFSET UNITYSDK_OFFSET(0x198BDC20)
#define RPG_CUSTOMRP_DLSSPASS_SETCAMERASTATEINVALID_OFFSET UNITYSDK_OFFSET(0x198BE860)
#define RPG_CUSTOMRP_DLSSPASS_SETUPDRSSCALING_OFFSET UNITYSDK_OFFSET(0x198BD850)
#define RPG_CUSTOMRP_DLSSPASS_SETUPFEATUREIMPL1_OFFSET UNITYSDK_OFFSET(0x198BF410)
#define RPG_CUSTOMRP_DLSSPASS_SETUPFEATUREIMPL2_OFFSET UNITYSDK_OFFSET(0x198BF610)
#define RPG_CUSTOMRP_DLSSPASS_SETUPFEATUREIMPL3_OFFSET UNITYSDK_OFFSET(0x198BF6C0)
#define RPG_CUSTOMRP_DLSSPASS_SETUPFEATURE_OFFSET UNITYSDK_OFFSET(0x1A1E9BD0)
#define RPG_CUSTOMRP_DLSSPASS_SET_VERSIONINDEX_OFFSET UNITYSDK_OFFSET(0x198BE900)
#define RPG_CUSTOMRP_DLSSPASS_WARMUP_OFFSET UNITYSDK_OFFSET(0x1A1E9C60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_TypeDefinitionIndex = 38481;

	class DLSSPass : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* m_InvalidCameraKeys; // 0x10
		::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer; // 0x18
		::UnityEngine::NVIDIA::GraphicsDevice* m_Device; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* m_CameraStates; // 0x28
		::System::Int32 _VersionIndex_k__BackingField; // 0x30
		::System::Byte _padding0[0x4];
		::System::UInt64 m_FrameId; // 0x38
		static ::System::Threading::Tasks::Task** StaticGet_s_SetupFeatureTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("RPG.CustomRP", "DLSSPass")->GetStaticField(0x235F0);
		}

		static ::System::UInt32* StaticGet_s_ExpectedDeviceVersion()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "DLSSPass")->GetStaticField(0x81D0);
		}

		static ::System::UInt64* StaticGet_sMaximumFrameExpiration()
		{
			return (::System::UInt64*)UnitySDK::FromName("RPG.CustomRP", "DLSSPass")->GetStaticField(0x81D8);
		}

		::System::Void _ctor(::UnityEngine::NVIDIA::GraphicsDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDevice*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CCTOR_OFFSET))();
		}

		static ::System::Boolean SetupFeature(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETUPFEATURE_OFFSET))(a1);
		}

		static ::System::Void Warmup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_WARMUP_OFFSET))();
		}

		static ::System::Single GetBaseRenderScale(::System::Single a1, ::RPG::CustomRP::Quality a2)
		{
			return ((::System::Single(*)(::System::Single, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_GETBASERENDERSCALE_OFFSET))(a1, a2);
		}

		static ::System::Single GetRenderScaleFromBase(::System::Single a1, ::RPG::CustomRP::Quality a2)
		{
			return ((::System::Single(*)(::System::Single, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_GETRENDERSCALEFROMBASE_OFFSET))(a1, a2);
		}

		static ::RPG::CustomRP::DLSSPass* Create()
		{
			return ((::RPG::CustomRP::DLSSPass*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CREATE_OFFSET))();
		}

		::System::Void BeginFrame(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_BEGINFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void SetupDRSScaling(::System::Boolean a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETUPDRSSCALING_OFFSET))(this, a1, a2);
		}

		::System::Void Render(::RPG::CustomRP::DLSSPass_Parameters a1, ::RPG::CustomRP::DLSSPass_ViewResources a2, ::UnityEngine::Rendering::CommandBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Parameters, ::RPG::CustomRP::DLSSPass_ViewResources, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RENDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CRPExecute(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::UnityEngine::Camera* a5, ::UnityEngine::Rendering::CommandBuffer* a6, ::UnityEngine::Rendering::DLSSData a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::DLSSData))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CRPEXECUTE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CRPRender(::RPG::CustomRP::DLSSPass_Parameters a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::UnityEngine::Rendering::CommandBuffer* a6, ::UnityEngine::Rendering::DLSSData a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Parameters, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::DLSSData))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CRPRENDER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetCameraStateInvalid(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETCAMERASTATEINVALID_OFFSET))(this, a1);
		}

		::System::Int32 get_VersionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_GET_VERSIONINDEX_OFFSET))(this);
		}

		::System::Void set_VersionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SET_VERSIONINDEX_OFFSET))(this, a1);
		}

		static ::System::Boolean IsOptimalSettingsValid(::UnityEngine::NVIDIA::OptimalDLSSSettingsData a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::NVIDIA::OptimalDLSSSettingsData))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_ISOPTIMALSETTINGSVALID_OFFSET))(a1);
		}

		::System::Boolean HasCameraStateExpired(::RPG::CustomRP::DLSSPass_CameraState* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::DLSSPass_CameraState*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_HASCAMERASTATEEXPIRED_OFFSET))(this, a1);
		}

		::System::Void ProcessInvalidCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_PROCESSINVALIDCAMERAS_OFFSET))(this);
		}

		::System::Void CleanupCameraStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CLEANUPCAMERASTATES_OFFSET))(this);
		}

		::System::Void InternalNVIDIASetupDRSScaling(::System::Boolean a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIASETUPDRSSCALING_OFFSET))(this, a1, a2);
		}

		::System::Void InternalNVIDIABeginFrame(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIABEGINFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void InternalNVIDIARender(::RPG::CustomRP::DLSSPass_Parameters a1, ::RPG::CustomRP::DLSSPass_ViewResources a2, ::UnityEngine::Rendering::CommandBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Parameters, ::RPG::CustomRP::DLSSPass_ViewResources, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIARENDER_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean SetupFeatureImpl1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETUPFEATUREIMPL1_OFFSET))();
		}

		static ::System::Void SetupFeatureImpl2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETUPFEATUREIMPL2_OFFSET))(a1);
		}

		static ::System::Boolean SetupFeatureImpl3()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETUPFEATUREIMPL3_OFFSET))();
		}

	};
}
