#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHNNHLEDFIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15334DA0)

inline static constexpr unsigned int CHNNHLEDFIC_TypeDefinitionIndex = 74905;

class CHNNHLEDFIC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GNDCHCJMKNC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CHNNHLEDFIC_TypeDefinitionIndex)->GetStaticField(0x3A640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHNNHLEDFIC__CCTOR_OFFSET))();
	}
};
