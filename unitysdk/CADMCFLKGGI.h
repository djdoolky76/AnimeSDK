#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CADMCFLKGGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x14591AC0)

inline static constexpr unsigned int CADMCFLKGGI_TypeDefinitionIndex = 83103;

class CADMCFLKGGI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JHDCDHDAFLM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CADMCFLKGGI_TypeDefinitionIndex)->GetStaticField(0x40230);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CADMCFLKGGI__CCTOR_OFFSET))();
	}
};
