#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLMHNAJLMAJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1369F260)

inline static constexpr unsigned int OLMHNAJLMAJ_TypeDefinitionIndex = 42058;

class OLMHNAJLMAJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JDKBKPBNEEO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OLMHNAJLMAJ_TypeDefinitionIndex)->GetStaticField(0x3CE60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLMHNAJLMAJ__CCTOR_OFFSET))();
	}
};
