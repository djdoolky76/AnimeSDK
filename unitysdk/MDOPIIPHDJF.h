#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDOPIIPHDJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852A2D0)

inline static constexpr unsigned int MDOPIIPHDJF_TypeDefinitionIndex = 57087;

class MDOPIIPHDJF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JGKGCKEJFJL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MDOPIIPHDJF_TypeDefinitionIndex)->GetStaticField(0x4BF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDOPIIPHDJF__CCTOR_OFFSET))();
	}
};
