#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGAFOPKCBDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1006F200)

inline static constexpr unsigned int OGAFOPKCBDE_TypeDefinitionIndex = 70779;

class OGAFOPKCBDE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HLDFLHBABJI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OGAFOPKCBDE_TypeDefinitionIndex)->GetStaticField(0x3CDC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGAFOPKCBDE__CCTOR_OFFSET))();
	}
};
