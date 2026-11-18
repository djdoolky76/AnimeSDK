#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HCOKOMCJPAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14079CB0)

inline static constexpr unsigned int HCOKOMCJPAC_TypeDefinitionIndex = 69936;

class HCOKOMCJPAC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GFMNOOKALMP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HCOKOMCJPAC_TypeDefinitionIndex)->GetStaticField(0x51F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCOKOMCJPAC__CCTOR_OFFSET))();
	}
};
