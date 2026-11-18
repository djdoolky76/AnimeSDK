#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_FEATUREPOINT_BHGCDFCEMBG_OFFSET UNITYSDK_OFFSET(0x12445340)
#define MOLEMOLE_FEATUREPOINT_DEGAODLIHOF_OFFSET UNITYSDK_OFFSET(0x12445510)
#define MOLEMOLE_FEATUREPOINT_NCJBKDIBEAI_OFFSET UNITYSDK_OFFSET(0x12445150)
#define MOLEMOLE_FEATUREPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x12445130)

namespace MoleMole
{
	inline static constexpr unsigned int FeaturePoint_TypeDefinitionIndex = 54641;

	class FeaturePoint : public ::System::Object
	{
	public:
		::System::Single minAngle; // 0x10
		::System::Single maxAngle; // 0x14
		::UnityEngine::Transform* pointTransform; // 0x18
		::UnityEngine::Vector3 pointTransformOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 NCJBKDIBEAI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_NCJBKDIBEAI_OFFSET))(this);
		}

		::System::Boolean BHGCDFCEMBG(::UnityEngine::Vector3& CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_BHGCDFCEMBG_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void DEGAODLIHOF(::UnityEngine::Vector3 MOGOKNOGEFC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_DEGAODLIHOF_OFFSET))(this, MOGOKNOGEFC);
		}
	};
}
