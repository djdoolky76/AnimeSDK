#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HNDKNCHJMAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F4F8F0)

inline static constexpr unsigned int HNDKNCHJMAM_TypeDefinitionIndex = 70056;

class HNDKNCHJMAM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GNCCKAPPDID()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HNDKNCHJMAM_TypeDefinitionIndex)->GetStaticField(0x3DF80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDKNCHJMAM__CCTOR_OFFSET))();
	}
};
