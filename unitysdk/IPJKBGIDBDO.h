#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPJKBGIDBDO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1658FAB0)

inline static constexpr unsigned int IPJKBGIDBDO_TypeDefinitionIndex = 90596;

class IPJKBGIDBDO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NNGOHCAAHFO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPJKBGIDBDO_TypeDefinitionIndex)->GetStaticField(0x514C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPJKBGIDBDO__CCTOR_OFFSET))();
	}
};
