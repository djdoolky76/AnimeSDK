#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ILCDLADGMLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16584420)

inline static constexpr unsigned int ILCDLADGMLJ_TypeDefinitionIndex = 68192;

class ILCDLADGMLJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FOCLBAHKCLD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ILCDLADGMLJ_TypeDefinitionIndex)->GetStaticField(0x514A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCDLADGMLJ__CCTOR_OFFSET))();
	}
};
