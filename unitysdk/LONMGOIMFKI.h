#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LONMGOIMFKI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1403C2E0)

inline static constexpr unsigned int LONMGOIMFKI_TypeDefinitionIndex = 56111;

class LONMGOIMFKI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LCGNMPCHBON()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LONMGOIMFKI_TypeDefinitionIndex)->GetStaticField(0x447E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LONMGOIMFKI__CCTOR_OFFSET))();
	}
};
