#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEBNLJGPHJA__CCTOR_OFFSET UNITYSDK_OFFSET(0x120FBCD0)

inline static constexpr unsigned int NEBNLJGPHJA_TypeDefinitionIndex = 84927;

class NEBNLJGPHJA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HBBBACPJPBF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NEBNLJGPHJA_TypeDefinitionIndex)->GetStaticField(0x52280);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEBNLJGPHJA__CCTOR_OFFSET))();
	}
};
