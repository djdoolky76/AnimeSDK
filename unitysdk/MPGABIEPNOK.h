#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MPGABIEPNOK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1303E840)

inline static constexpr unsigned int MPGABIEPNOK_TypeDefinitionIndex = 39246;

class MPGABIEPNOK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BFFECMPBFKD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MPGABIEPNOK_TypeDefinitionIndex)->GetStaticField(0x52070);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPGABIEPNOK__CCTOR_OFFSET))();
	}
};
