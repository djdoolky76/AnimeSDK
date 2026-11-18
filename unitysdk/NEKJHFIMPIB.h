#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEKJHFIMPIB__CCTOR_OFFSET UNITYSDK_OFFSET(0x105B2CA0)

inline static constexpr unsigned int NEKJHFIMPIB_TypeDefinitionIndex = 82971;

class NEKJHFIMPIB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FPLHCPPEMJC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NEKJHFIMPIB_TypeDefinitionIndex)->GetStaticField(0x4AF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEKJHFIMPIB__CCTOR_OFFSET))();
	}
};
