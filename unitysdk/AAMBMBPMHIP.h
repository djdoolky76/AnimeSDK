#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAMBMBPMHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C91E40)

inline static constexpr unsigned int AAMBMBPMHIP_TypeDefinitionIndex = 78436;

class AAMBMBPMHIP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NBLLHPOAIFP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AAMBMBPMHIP_TypeDefinitionIndex)->GetStaticField(0x3A180);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMBMBPMHIP__CCTOR_OFFSET))();
	}
};
