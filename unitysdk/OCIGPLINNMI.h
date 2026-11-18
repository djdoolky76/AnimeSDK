#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCIGPLINNMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A4ABD0)

inline static constexpr unsigned int OCIGPLINNMI_TypeDefinitionIndex = 52522;

class OCIGPLINNMI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GHDJPLNGPJC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OCIGPLINNMI_TypeDefinitionIndex)->GetStaticField(0x4B1A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCIGPLINNMI__CCTOR_OFFSET))();
	}
};
