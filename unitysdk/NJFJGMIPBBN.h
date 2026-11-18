#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJFJGMIPBBN__CCTOR_OFFSET UNITYSDK_OFFSET(0xE760020)

inline static constexpr unsigned int NJFJGMIPBBN_TypeDefinitionIndex = 85557;

class NJFJGMIPBBN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GJIEHELAKIP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NJFJGMIPBBN_TypeDefinitionIndex)->GetStaticField(0x3F5F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJFJGMIPBBN__CCTOR_OFFSET))();
	}
};
