#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B692F9EA761C6037.h"

#define A0864C42D585A3FE_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x243B230)
#define A0864C42D585A3FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0864C42D585A3FE_TypeDefinitionIndex = 4277;

class A0864C42D585A3FE : public ::System::Object
{
public:
	static ::UnityEngine::B692F9EA761C6037* StaticGet_EE3D80D33CF9BE7D()
	{
		return (::UnityEngine::B692F9EA761C6037*)Il2CppClass::FromTypeDefinitionIndex(A0864C42D585A3FE_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0864C42D585A3FE__CTOR_OFFSET))(this);
	}

	static ::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0864C42D585A3FE_A1E97155B145443C_OFFSET))();
	}
};
