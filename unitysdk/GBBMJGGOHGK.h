#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GBBMJGGOHGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1751AF60)

inline static constexpr unsigned int GBBMJGGOHGK_TypeDefinitionIndex = 89721;

class GBBMJGGOHGK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DEADIEJBKIO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GBBMJGGOHGK_TypeDefinitionIndex)->GetStaticField(0x377E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBBMJGGOHGK__CCTOR_OFFSET))();
	}
};
