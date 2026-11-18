#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEEFMEHGMAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D71CD0)

inline static constexpr unsigned int NEEFMEHGMAF_TypeDefinitionIndex = 71779;

class NEEFMEHGMAF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DGCPHNKELOE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NEEFMEHGMAF_TypeDefinitionIndex)->GetStaticField(0x4C670);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEEFMEHGMAF__CCTOR_OFFSET))();
	}
};
