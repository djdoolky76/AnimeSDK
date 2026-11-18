#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GENNHGHDLJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FB2B0)

inline static constexpr unsigned int GENNHGHDLJB_TypeDefinitionIndex = 78572;

class GENNHGHDLJB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GCGNFGDMPDH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GENNHGHDLJB_TypeDefinitionIndex)->GetStaticField(0x44110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GENNHGHDLJB__CCTOR_OFFSET))();
	}
};
