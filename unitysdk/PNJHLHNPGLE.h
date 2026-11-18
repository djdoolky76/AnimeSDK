#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PNJHLHNPGLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1F5950)

inline static constexpr unsigned int PNJHLHNPGLE_TypeDefinitionIndex = 82864;

class PNJHLHNPGLE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LJPLKPIGOPI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PNJHLHNPGLE_TypeDefinitionIndex)->GetStaticField(0x3FCB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNJHLHNPGLE__CCTOR_OFFSET))();
	}
};
