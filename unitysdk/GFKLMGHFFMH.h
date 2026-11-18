#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFKLMGHFFMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x125CE060)

inline static constexpr unsigned int GFKLMGHFFMH_TypeDefinitionIndex = 40738;

class GFKLMGHFFMH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EHNGMIGMIKE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GFKLMGHFFMH_TypeDefinitionIndex)->GetStaticField(0x4E490);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFKLMGHFFMH__CCTOR_OFFSET))();
	}
};
