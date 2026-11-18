#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NABONIPIJAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F88DC0)

inline static constexpr unsigned int NABONIPIJAE_TypeDefinitionIndex = 83632;

class NABONIPIJAE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JGLKLOFLLBP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NABONIPIJAE_TypeDefinitionIndex)->GetStaticField(0x48E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NABONIPIJAE__CCTOR_OFFSET))();
	}
};
