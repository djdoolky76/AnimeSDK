#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define A859887F1069DE03_E47F75614B597C8D_OFFSET UNITYSDK_OFFSET(0x2439330)

inline static constexpr unsigned int A859887F1069DE03_TypeDefinitionIndex = 4220;

class A859887F1069DE03 : public ::System::Object
{
public:
	static ::System::Boolean E47F75614B597C8D(::UnityEngine::Quaternion EE348D4030A27AC0, ::UnityEngine::Quaternion BEEE7A5A60941632, ::System::Single E894B696AD2A80B5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + A859887F1069DE03_E47F75614B597C8D_OFFSET))(EE348D4030A27AC0, BEEE7A5A60941632, E894B696AD2A80B5);
	}
};
