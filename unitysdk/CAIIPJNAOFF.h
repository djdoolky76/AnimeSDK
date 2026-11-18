#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CAIIPJNAOFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1141ADA0)

inline static constexpr unsigned int CAIIPJNAOFF_TypeDefinitionIndex = 48526;

class CAIIPJNAOFF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OGGBGDOANLG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CAIIPJNAOFF_TypeDefinitionIndex)->GetStaticField(0x3A4E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAIIPJNAOFF__CCTOR_OFFSET))();
	}
};
