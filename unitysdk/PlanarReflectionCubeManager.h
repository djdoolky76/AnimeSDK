#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PlanarReflectionCubeManager_NativeSRP.h"

#define PLANARREFLECTIONCUBEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E8DD5D0)
#define PLANARREFLECTIONCUBEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E8DD4F0)
#define PLANARREFLECTIONCUBEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD6B0)

inline static constexpr unsigned int PlanarReflectionCubeManager_TypeDefinitionIndex = 26721;

class PlanarReflectionCubeManager : public ::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeManager_NativeSRP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER_ONDISABLE_OFFSET))(this);
	}
};
