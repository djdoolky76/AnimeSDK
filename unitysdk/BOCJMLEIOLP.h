#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BOCJMLEIOLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C54460)

inline static constexpr unsigned int BOCJMLEIOLP_TypeDefinitionIndex = 59465;

class BOCJMLEIOLP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MEDHEFIMNPH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BOCJMLEIOLP_TypeDefinitionIndex)->GetStaticField(0x49770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOCJMLEIOLP__CCTOR_OFFSET))();
	}
};
