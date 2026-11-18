#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFIFBIILIGC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB01C0)

inline static constexpr unsigned int DFIFBIILIGC_TypeDefinitionIndex = 46574;

class DFIFBIILIGC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CHMKECJKOHL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DFIFBIILIGC_TypeDefinitionIndex)->GetStaticField(0x45E30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIFBIILIGC__CCTOR_OFFSET))();
	}
};
