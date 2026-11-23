#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE1E11B808A636AE;

#define A90080A228D37589__CCTOR_OFFSET UNITYSDK_OFFSET(0x27D99C0)

inline static constexpr unsigned int A90080A228D37589_TypeDefinitionIndex = 16730;

class A90080A228D37589 : public ::System::Object
{
public:
	static ::BE1E11B808A636AE** StaticGet_B60DDE6AC636B042()
	{
		return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(A90080A228D37589_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::BE1E11B808A636AE** StaticGet_E7AF8CF3168469CF()
	{
		return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(A90080A228D37589_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A90080A228D37589__CCTOR_OFFSET))();
	}
};
