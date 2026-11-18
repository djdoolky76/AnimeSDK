#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMHLBFINKNP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA5920)

inline static constexpr unsigned int MMHLBFINKNP_TypeDefinitionIndex = 50799;

class MMHLBFINKNP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GGIAJIOKMPM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MMHLBFINKNP_TypeDefinitionIndex)->GetStaticField(0x3BD30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMHLBFINKNP__CCTOR_OFFSET))();
	}
};
