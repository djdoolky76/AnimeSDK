#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIHIEPNNAPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C65E380)

inline static constexpr unsigned int PIHIEPNNAPM_TypeDefinitionIndex = 76873;

class PIHIEPNNAPM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ANAMCEGDHCL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PIHIEPNNAPM_TypeDefinitionIndex)->GetStaticField(0x36390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHIEPNNAPM__CCTOR_OFFSET))();
	}
};
