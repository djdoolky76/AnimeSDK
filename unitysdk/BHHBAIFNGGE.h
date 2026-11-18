#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BHHBAIFNGGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11505F50)

inline static constexpr unsigned int BHHBAIFNGGE_TypeDefinitionIndex = 63434;

class BHHBAIFNGGE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IEKOAJEEDMK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BHHBAIFNGGE_TypeDefinitionIndex)->GetStaticField(0x42E10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHBAIFNGGE__CCTOR_OFFSET))();
	}
};
