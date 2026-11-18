#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGGKAKAPPFI__CCTOR_OFFSET UNITYSDK_OFFSET(0x143DBAB0)

inline static constexpr unsigned int BGGKAKAPPFI_TypeDefinitionIndex = 57398;

class BGGKAKAPPFI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MHPFPMCNGKG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGGKAKAPPFI_TypeDefinitionIndex)->GetStaticField(0x4F1F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGKAKAPPFI__CCTOR_OFFSET))();
	}
};
