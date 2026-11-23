#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_GPUANIMATIONASSET_AC51F4AD1C29D48C_OFFSET UNITYSDK_OFFSET(0x41AA9D0)
#define UNITYENGINE_GPUANIMATIONASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x41AA980)

namespace UnityEngine
{
	inline static constexpr unsigned int GPUAnimationAsset_TypeDefinitionIndex = 21511;

	class GPUAnimationAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUANIMATIONASSET__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* AC51F4AD1C29D48C()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUANIMATIONASSET_AC51F4AD1C29D48C_OFFSET))(this);
		}
	};
}
