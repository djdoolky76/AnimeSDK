#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JEKJOIELDNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A0D590)

inline static constexpr unsigned int JEKJOIELDNB_TypeDefinitionIndex = 80038;

class JEKJOIELDNB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HDEOIPELOOO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JEKJOIELDNB_TypeDefinitionIndex)->GetStaticField(0x48200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKJOIELDNB__CCTOR_OFFSET))();
	}
};
