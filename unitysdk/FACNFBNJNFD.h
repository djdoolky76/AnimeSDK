#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FACNFBNJNFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AB5E20)

inline static constexpr unsigned int FACNFBNJNFD_TypeDefinitionIndex = 41051;

class FACNFBNJNFD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ELPEBDBKCCG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FACNFBNJNFD_TypeDefinitionIndex)->GetStaticField(0x4E3B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FACNFBNJNFD__CCTOR_OFFSET))();
	}
};
