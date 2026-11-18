#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define SUNSHADOWPVSBAKERANGE_GETAABB_OFFSET UNITYSDK_OFFSET(0x1C1F3160)
#define SUNSHADOWPVSBAKERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F3270)

inline static constexpr unsigned int SunShadowPVSBakeRange_TypeDefinitionIndex = 72216;

class SunShadowPVSBakeRange : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUNSHADOWPVSBAKERANGE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Bounds GetAABB()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + SUNSHADOWPVSBAKERANGE_GETAABB_OFFSET))(this);
	}
};
