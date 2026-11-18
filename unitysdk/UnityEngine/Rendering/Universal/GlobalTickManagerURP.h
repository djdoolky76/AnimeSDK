#pragma once
#include "unitysdk/unitysdk.h"

class MonoRenderEntity;
class POEGBDNCMML;
class VolumetricCloudLayoutHelper;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }
namespace UnityEngine::Rendering::Universal::Internal { class RuntimePostLight; }
template <typename T> class KHFCEKPIBJH_1;

#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1EA42230)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA42440)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA423D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA42340)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA424B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GlobalTickManagerURP_TypeDefinitionIndex = 26578;

	class GlobalTickManagerURP
	{
	public:
		::KHFCEKPIBJH_1<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>* _universalAdditionalCameraData; // 0x18
		::KHFCEKPIBJH_1<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>* _deferredReflectionProbes; // 0x20
		::KHFCEKPIBJH_1<::UnityEngine::Rendering::Universal::Internal::RuntimePostLight*>* _runtimePostLights; // 0x28
		::KHFCEKPIBJH_1<::VolumetricCloudLayoutHelper*>* _volumetricCloudLayoutHelpers; // 0x30
		::KHFCEKPIBJH_1<::MonoRenderEntity*>* _monoRenderEntitySet; // 0x38
		::KHFCEKPIBJH_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector*>* _decalProjectors; // 0x40
		::KHFCEKPIBJH_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _universalAdditionalLightData; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::POEGBDNCMML*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::POEGBDNCMML*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONFIXEDUPDATE_OFFSET))(this);
		}
	};
}
