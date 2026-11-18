#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FIPHELCJDIB__CCTOR_OFFSET UNITYSDK_OFFSET(0x140FF520)

inline static constexpr unsigned int FIPHELCJDIB_TypeDefinitionIndex = 44567;

class FIPHELCJDIB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LOBOJDNLLEF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FIPHELCJDIB_TypeDefinitionIndex)->GetStaticField(0x507D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIPHELCJDIB__CCTOR_OFFSET))();
	}
};
