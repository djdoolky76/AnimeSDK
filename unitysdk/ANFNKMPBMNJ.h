#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ANFNKMPBMNJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1700C020)

inline static constexpr unsigned int ANFNKMPBMNJ_TypeDefinitionIndex = 87140;

class ANFNKMPBMNJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FDBNBLJHBCJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ANFNKMPBMNJ_TypeDefinitionIndex)->GetStaticField(0x42D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANFNKMPBMNJ__CCTOR_OFFSET))();
	}
};
