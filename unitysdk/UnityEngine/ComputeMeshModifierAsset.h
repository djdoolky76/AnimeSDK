#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputeShaderAsset.h"
namespace UnityEngine { class ComputeMeshModifierAsset; }

#define UNITYENGINE_COMPUTEMESHMODIFIERASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DB310)
#define UNITYENGINE_COMPUTEMESHMODIFIERASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1F3DB330)

namespace UnityEngine
{
	class ComputeMeshModifierAsset : public ::UnityEngine::ComputeShaderAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEMESHMODIFIERASSET_CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::ComputeMeshModifierAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeMeshModifierAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEMESHMODIFIERASSET_INTERNAL_CREATE_OFFSET))(a1);
		}

	};
}
