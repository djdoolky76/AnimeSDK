#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LIOJHLLKAPA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD431280)

inline static constexpr unsigned int LIOJHLLKAPA_TypeDefinitionIndex = 77831;

class LIOJHLLKAPA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MOLFAGNOBPO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LIOJHLLKAPA_TypeDefinitionIndex)->GetStaticField(0x32AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIOJHLLKAPA__CCTOR_OFFSET))();
	}
};
