#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EAGCMJCCJJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BDBB90)

inline static constexpr unsigned int EAGCMJCCJJP_TypeDefinitionIndex = 79791;

class EAGCMJCCJJP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AILDDEAPCHI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EAGCMJCCJJP_TypeDefinitionIndex)->GetStaticField(0x45EE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGCMJCCJJP__CCTOR_OFFSET))();
	}
};
