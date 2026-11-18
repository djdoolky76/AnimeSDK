#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NHHNCLIJJOB___C_GKKIEFJKPNG_OFFSET UNITYSDK_OFFSET(0x12FEA6D0)
#define NHHNCLIJJOB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FEA680)
#define NHHNCLIJJOB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEA6C0)

inline static constexpr unsigned int NHHNCLIJJOB___c_TypeDefinitionIndex = 61226;

class NHHNCLIJJOB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NHHNCLIJJOB___c_TypeDefinitionIndex)->GetStaticField(0x47460);
	}
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NHHNCLIJJOB___c_TypeDefinitionIndex)->GetStaticField(0x47468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHHNCLIJJOB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHNCLIJJOB___C__CTOR_OFFSET))(this);
	}

	::System::Void GKKIEFJKPNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHNCLIJJOB___C_GKKIEFJKPNG_OFFSET))(this);
	}
};
