#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCPJCJOAHIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B5A160)

inline static constexpr unsigned int NCPJCJOAHIK_TypeDefinitionIndex = 39309;

class NCPJCJOAHIK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EFOPOPNHGPA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NCPJCJOAHIK_TypeDefinitionIndex)->GetStaticField(0x519A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPJCJOAHIK__CCTOR_OFFSET))();
	}
};
