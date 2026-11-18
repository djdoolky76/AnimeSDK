#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLGPPIDPNCM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1241FE10)

inline static constexpr unsigned int DLGPPIDPNCM_TypeDefinitionIndex = 64234;

class DLGPPIDPNCM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FBNNBFJPLGE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DLGPPIDPNCM_TypeDefinitionIndex)->GetStaticField(0x50720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLGPPIDPNCM__CCTOR_OFFSET))();
	}
};
