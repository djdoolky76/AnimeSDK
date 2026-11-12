#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CUSTOMRP_FOGEMISSIVEMESH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7040)
#define RPG_CUSTOMRP_FOGEMISSIVEMESH_START_OFFSET UNITYSDK_OFFSET(0x1DDD7000)
#define RPG_CUSTOMRP_FOGEMISSIVEMESH_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DDD6DF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FogEmissiveMesh_TypeDefinitionIndex = 38660;

	class FogEmissiveMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGEMISSIVEMESH_CTOR_OFFSET))(this);
		}

		::System::Void UpdateParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGEMISSIVEMESH_UPDATEPARAMETERS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGEMISSIVEMESH_START_OFFSET))(this);
		}

	};
}
