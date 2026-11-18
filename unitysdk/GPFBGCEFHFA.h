#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPFBGCEFHFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D08F50)

inline static constexpr unsigned int GPFBGCEFHFA_TypeDefinitionIndex = 84188;

class GPFBGCEFHFA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JFHFGOJFBFE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GPFBGCEFHFA_TypeDefinitionIndex)->GetStaticField(0x49CA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPFBGCEFHFA__CCTOR_OFFSET))();
	}
};
