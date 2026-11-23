#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F4B9AF66747826AD_BB845EB2634DD3AE_OFFSET UNITYSDK_OFFSET(0x2A7CF40)
#define F4B9AF66747826AD_BDA5D4C8813BA175_OFFSET UNITYSDK_OFFSET(0x2A7C5D0)
#define F4B9AF66747826AD_F6812446AAA61EE9_OFFSET UNITYSDK_OFFSET(0x2A7C8B0)

inline static constexpr unsigned int F4B9AF66747826AD_TypeDefinitionIndex = 18423;

class F4B9AF66747826AD : public ::System::Object
{
public:
	static ::UnityEngine::Vector2 F6812446AAA61EE9(::UnityEngine::Quaternion BC4872B5343984F5, ::UnityEngine::Vector3 F9712FF46EC51D7E, ::UnityEngine::Vector3 FF2EA59FD4C4EE89)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + F4B9AF66747826AD_F6812446AAA61EE9_OFFSET))(BC4872B5343984F5, F9712FF46EC51D7E, FF2EA59FD4C4EE89);
	}

	static ::UnityEngine::Quaternion BB845EB2634DD3AE(::UnityEngine::Quaternion E74C726392028037)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + F4B9AF66747826AD_BB845EB2634DD3AE_OFFSET))(E74C726392028037);
	}

	static ::UnityEngine::Quaternion BDA5D4C8813BA175(::UnityEngine::Quaternion BC4872B5343984F5, ::UnityEngine::Vector2 FBF9C1F5AF32571D, ::UnityEngine::Vector3 FF2EA59FD4C4EE89)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + F4B9AF66747826AD_BDA5D4C8813BA175_OFFSET))(BC4872B5343984F5, FBF9C1F5AF32571D, FF2EA59FD4C4EE89);
	}
};
