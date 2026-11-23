#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Texture2D; }

#define OCEANSHORELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

inline static constexpr unsigned int OceanShorelineData_TypeDefinitionIndex = 16391;

class OceanShorelineData : public ::UnityEngine::ScriptableObject
{
public:
	::UnityEngine::Vector3 areaLocation; // 0x18
	::UnityEngine::Vector3 areaSize; // 0x24
	::UnityEngine::Texture2D* shorelineDataTex; // 0x30
	::UnityEngine::E8984F4E44AE20E5 shorelineScaleAndOffset; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSHORELINEDATA__CTOR_OFFSET))(this);
	}
};
