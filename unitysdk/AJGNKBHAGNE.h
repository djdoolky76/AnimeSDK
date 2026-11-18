#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJGNKBHAGNE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DDB620)

inline static constexpr unsigned int AJGNKBHAGNE_TypeDefinitionIndex = 84651;

class AJGNKBHAGNE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OPJIDDMOMJA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AJGNKBHAGNE_TypeDefinitionIndex)->GetStaticField(0x4E010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGNKBHAGNE__CCTOR_OFFSET))();
	}
};
