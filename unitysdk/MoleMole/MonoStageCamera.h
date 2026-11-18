#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class String; }

#define MOLEMOLE_MONOSTAGECAMERA_ACTIVECAM_OFFSET UNITYSDK_OFFSET(0x181057C0)
#define MOLEMOLE_MONOSTAGECAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x18105390)
#define MOLEMOLE_MONOSTAGECAMERA_GET_TRANSFORMNAME_OFFSET UNITYSDK_OFFSET(0x18105380)
#define MOLEMOLE_MONOSTAGECAMERA_GHCEKHCHMCO_OFFSET UNITYSDK_OFFSET(0x18105C60)
#define MOLEMOLE_MONOSTAGECAMERA_HLLBCGOLHAK_OFFSET UNITYSDK_OFFSET(0x18105820)
#define MOLEMOLE_MONOSTAGECAMERA_HNKAIHMIDPM_OFFSET UNITYSDK_OFFSET(0x18105440)
#define MOLEMOLE_MONOSTAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18105BD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageCamera_TypeDefinitionIndex = 68959;

	class MonoStageCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* OCBEHJPOGKB; // 0x18
		::System::String* followName; // 0x20
		::System::String* lookAtName; // 0x28
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x30
		::System::Boolean DEBGKPLOPCG; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_TransformName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_GET_TRANSFORMNAME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_AWAKE_OFFSET))(this);
		}

		::System::Void ActiveCam(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_ACTIVECAM_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Void GHCEKHCHMCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_GHCEKHCHMCO_OFFSET))(this);
		}

		::System::Void HLLBCGOLHAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_HLLBCGOLHAK_OFFSET))(this);
		}

		::System::Void HNKAIHMIDPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_HNKAIHMIDPM_OFFSET))(this);
		}
	};
}
