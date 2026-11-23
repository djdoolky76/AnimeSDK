#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define AA559CB1A1D6D902_FF3FF1EAC30E3582_OFFSET UNITYSDK_OFFSET(0x22470D0)

inline static constexpr unsigned int AA559CB1A1D6D902_TypeDefinitionIndex = 6899;

class AA559CB1A1D6D902 : public ::System::Object
{
public:
	static ::System::Boolean FF3FF1EAC30E3582(::UnityEngine::Camera* E929054BCEC2CE82, ::UnityEngine::Vector3 FF9A37DE513AC35B)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AA559CB1A1D6D902_FF3FF1EAC30E3582_OFFSET))(E929054BCEC2CE82, FF9A37DE513AC35B);
	}
};
