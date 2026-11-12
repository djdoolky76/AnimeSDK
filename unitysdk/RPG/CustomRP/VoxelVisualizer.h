#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Light; }

#define RPG_CUSTOMRP_VOXELVISUALIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xEF55D80)
#define RPG_CUSTOMRP_VOXELVISUALIZER_FIECNMDMEDG_OFFSET UNITYSDK_OFFSET(0xEF55CC0)
#define RPG_CUSTOMRP_VOXELVISUALIZER_LIGHTCANBEBAKED_OFFSET UNITYSDK_OFFSET(0xEF4E840)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VoxelVisualizer_TypeDefinitionIndex = 52938;

	class VoxelVisualizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELVISUALIZER_CTOR_OFFSET))(this);
		}

		static ::System::Boolean FIECNMDMEDG(::UnityEngine::Light* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELVISUALIZER_FIECNMDMEDG_OFFSET))(a1);
		}

		static ::System::Boolean LightCanBeBaked(::UnityEngine::Light* a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Light*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELVISUALIZER_LIGHTCANBEBAKED_OFFSET))(a1, a2);
		}

	};
}
