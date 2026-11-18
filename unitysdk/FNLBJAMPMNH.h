#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNLBJAMPMNH__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E75CC0)

inline static constexpr unsigned int FNLBJAMPMNH_TypeDefinitionIndex = 76453;

class FNLBJAMPMNH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HPOHFEBKBKI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FNLBJAMPMNH_TypeDefinitionIndex)->GetStaticField(0x51E80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNLBJAMPMNH__CCTOR_OFFSET))();
	}
};
