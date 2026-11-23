#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AABF066A88D01C97_B4CEFAD69EE0145D_OFFSET UNITYSDK_OFFSET(0x266F110)
#define AABF066A88D01C97_E47F75614B597C8D_OFFSET UNITYSDK_OFFSET(0x266F020)
#define AABF066A88D01C97_E601F7B43721D15B_OFFSET UNITYSDK_OFFSET(0x266F2A0)
#define AABF066A88D01C97_F0E7E80318520C96_OFFSET UNITYSDK_OFFSET(0x266F1B0)

inline static constexpr unsigned int AABF066A88D01C97_TypeDefinitionIndex = 6233;

class AABF066A88D01C97 : public ::System::Object
{
public:
	static ::System::Single F0E7E80318520C96(::UnityEngine::Vector3 EAB6A87D088A15E7)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AABF066A88D01C97_F0E7E80318520C96_OFFSET))(EAB6A87D088A15E7);
	}

	static ::System::Boolean E47F75614B597C8D(::UnityEngine::Vector3 EAB6A87D088A15E7, ::UnityEngine::Vector3 BEEE7A5A60941632, ::System::Single E894B696AD2A80B5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AABF066A88D01C97_E47F75614B597C8D_OFFSET))(EAB6A87D088A15E7, BEEE7A5A60941632, E894B696AD2A80B5);
	}

	static ::UnityEngine::Vector3 B4CEFAD69EE0145D(::UnityEngine::Vector2 EAB6A87D088A15E7)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AABF066A88D01C97_B4CEFAD69EE0145D_OFFSET))(EAB6A87D088A15E7);
	}

	static ::UnityEngine::Vector3 E601F7B43721D15B(::UnityEngine::Vector3 EAB6A87D088A15E7)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AABF066A88D01C97_E601F7B43721D15B_OFFSET))(EAB6A87D088A15E7);
	}
};
