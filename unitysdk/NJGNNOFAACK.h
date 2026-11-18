#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJGNNOFAACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE26760)

inline static constexpr unsigned int NJGNNOFAACK_TypeDefinitionIndex = 91049;

class NJGNNOFAACK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MJGPEFJCLAD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NJGNNOFAACK_TypeDefinitionIndex)->GetStaticField(0x39870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJGNNOFAACK__CCTOR_OFFSET))();
	}
};
