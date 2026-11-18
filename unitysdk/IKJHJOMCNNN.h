#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IKJHJOMCNNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x141F0560)

inline static constexpr unsigned int IKJHJOMCNNN_TypeDefinitionIndex = 46195;

class IKJHJOMCNNN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JDJHLNGIMOG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IKJHJOMCNNN_TypeDefinitionIndex)->GetStaticField(0x49E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKJHJOMCNNN__CCTOR_OFFSET))();
	}
};
