#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Material; }

#define RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD79D0)
#define RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1DDD7680)
#define RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DDD7600)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FogVolumeVisualizer_TypeDefinitionIndex = 38663;

	class FogVolumeVisualizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Color _gizmosColor; // 0x18
		::System::Boolean _wireFrame; // 0x28
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* _fogVolumeMaterial; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
}
