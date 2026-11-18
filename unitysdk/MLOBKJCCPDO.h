#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLOBKJCCPDO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C9E660)

inline static constexpr unsigned int MLOBKJCCPDO_TypeDefinitionIndex = 92863;

class MLOBKJCCPDO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NGJDBKAIGNK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MLOBKJCCPDO_TypeDefinitionIndex)->GetStaticField(0x3BCF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLOBKJCCPDO__CCTOR_OFFSET))();
	}
};
