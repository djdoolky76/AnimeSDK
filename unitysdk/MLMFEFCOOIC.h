#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MLMFEFCOOIC_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x1E590)

inline static constexpr unsigned int MLMFEFCOOIC_TypeDefinitionIndex = 68452;

	struct alignas(4) MLMFEFCOOIC
	{
		::RootMotion::IKJob::IKTransformRef DHIPFJBEJPI; // 0x10
		::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x20
		::System::Single APAKCBFMCAB; // 0x30
		::UnityEngine::Quaternion HGLBGLANIIO; // 0x34
		::System::Void CIJDJDICMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMFEFCOOIC_CIJDJDICMMM_OFFSET))(this);
		}

	};
