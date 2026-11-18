#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIGNCHJDDNE__CCTOR_OFFSET UNITYSDK_OFFSET(0x128FB560)

inline static constexpr unsigned int CIGNCHJDDNE_TypeDefinitionIndex = 59721;

class CIGNCHJDDNE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MNIJGHOPBEF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CIGNCHJDDNE_TypeDefinitionIndex)->GetStaticField(0x3D660);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIGNCHJDDNE__CCTOR_OFFSET))();
	}
};
