#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JKPBHGHBELM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18742140)

inline static constexpr unsigned int JKPBHGHBELM_TypeDefinitionIndex = 79921;

class JKPBHGHBELM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BBNMGLBEHOG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JKPBHGHBELM_TypeDefinitionIndex)->GetStaticField(0x40F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKPBHGHBELM__CCTOR_OFFSET))();
	}
};
