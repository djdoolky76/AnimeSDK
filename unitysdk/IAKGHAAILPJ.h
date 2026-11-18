#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IAKGHAAILPJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1012C300)

inline static constexpr unsigned int IAKGHAAILPJ_TypeDefinitionIndex = 83383;

class IAKGHAAILPJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OLLJGKAOHJJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IAKGHAAILPJ_TypeDefinitionIndex)->GetStaticField(0x3B210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAKGHAAILPJ__CCTOR_OFFSET))();
	}
};
