#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AENAFLIHBNF__CCTOR_OFFSET UNITYSDK_OFFSET(0x14397F10)

inline static constexpr unsigned int AENAFLIHBNF_TypeDefinitionIndex = 48868;

class AENAFLIHBNF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NOJBIBAOCPI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AENAFLIHBNF_TypeDefinitionIndex)->GetStaticField(0x4F170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AENAFLIHBNF__CCTOR_OFFSET))();
	}
};
