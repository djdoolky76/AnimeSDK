#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FPOELMMNKJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C77B0)

inline static constexpr unsigned int FPOELMMNKJC_TypeDefinitionIndex = 62124;

class FPOELMMNKJC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LOMDBPLOMIB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FPOELMMNKJC_TypeDefinitionIndex)->GetStaticField(0x49B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPOELMMNKJC__CCTOR_OFFSET))();
	}
};
