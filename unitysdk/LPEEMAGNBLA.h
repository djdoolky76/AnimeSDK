#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LPEEMAGNBLA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CF81D0)

inline static constexpr unsigned int LPEEMAGNBLA_TypeDefinitionIndex = 43138;

class LPEEMAGNBLA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GOMIAPBIOAI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LPEEMAGNBLA_TypeDefinitionIndex)->GetStaticField(0x4F780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPEEMAGNBLA__CCTOR_OFFSET))();
	}
};
