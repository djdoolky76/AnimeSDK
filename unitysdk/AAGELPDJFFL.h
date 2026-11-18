#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAGELPDJFFL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14392270)

inline static constexpr unsigned int AAGELPDJFFL_TypeDefinitionIndex = 86774;

class AAGELPDJFFL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JIJIMGNMGHD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AAGELPDJFFL_TypeDefinitionIndex)->GetStaticField(0x4F160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAGELPDJFFL__CCTOR_OFFSET))();
	}
};
