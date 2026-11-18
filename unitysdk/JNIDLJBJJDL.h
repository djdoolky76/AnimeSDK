#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JNIDLJBJJDL__CCTOR_OFFSET UNITYSDK_OFFSET(0x152B3850)

inline static constexpr unsigned int JNIDLJBJJDL_TypeDefinitionIndex = 63940;

class JNIDLJBJJDL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EGDDIAKOJGJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JNIDLJBJJDL_TypeDefinitionIndex)->GetStaticField(0x4E650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNIDLJBJJDL__CCTOR_OFFSET))();
	}
};
