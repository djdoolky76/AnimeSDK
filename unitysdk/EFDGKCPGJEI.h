#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFDGKCPGJEI__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDDB790)

inline static constexpr unsigned int EFDGKCPGJEI_TypeDefinitionIndex = 88341;

class EFDGKCPGJEI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ICGHHMOFDNL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EFDGKCPGJEI_TypeDefinitionIndex)->GetStaticField(0x47DB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDGKCPGJEI__CCTOR_OFFSET))();
	}
};
