#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }

#define B9948A861059127C_B2CB177375B7E81A_OFFSET UNITYSDK_OFFSET(0x43D1050)
#define B9948A861059127C_E10FFEE78183264D_OFFSET UNITYSDK_OFFSET(0x43D0F70)

inline static constexpr unsigned int B9948A861059127C_TypeDefinitionIndex = 18655;

class B9948A861059127C : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 B2CB177375B7E81A(::UnityEngine::Vector2 EB211B01816ACA79)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + B9948A861059127C_B2CB177375B7E81A_OFFSET))(EB211B01816ACA79);
	}

	static ::System::Boolean E10FFEE78183264D(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE, ::UnityEngine::Vector2& EB211B01816ACA79)
	{
		return ((::System::Boolean(*)(::F5D9B2730D543D46::A9BDD7E8F3994CE6*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + B9948A861059127C_E10FFEE78183264D_OFFSET))(E7336521BA8945EE, EB211B01816ACA79);
	}
};
