#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JABMIONGOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x160C6A90)

inline static constexpr unsigned int JABMIONGOCK_TypeDefinitionIndex = 71421;

class JABMIONGOCK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AMCDMEFIMBH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JABMIONGOCK_TypeDefinitionIndex)->GetStaticField(0x4E5D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABMIONGOCK__CCTOR_OFFSET))();
	}
};
