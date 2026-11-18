#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OJCHMKKJIEP__CCTOR_OFFSET UNITYSDK_OFFSET(0x18447C20)

inline static constexpr unsigned int OJCHMKKJIEP_TypeDefinitionIndex = 74247;

class OJCHMKKJIEP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MBDHEGDALDK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OJCHMKKJIEP_TypeDefinitionIndex)->GetStaticField(0x45880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJCHMKKJIEP__CCTOR_OFFSET))();
	}
};
