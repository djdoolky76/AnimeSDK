#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NJMHBNJKNMI___C_GJCJOEPDKJD_OFFSET UNITYSDK_OFFSET(0xFD02240)
#define NJMHBNJKNMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD021F0)
#define NJMHBNJKNMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD02230)

inline static constexpr unsigned int NJMHBNJKNMI___c_TypeDefinitionIndex = 67825;

class NJMHBNJKNMI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJMHBNJKNMI___c_TypeDefinitionIndex)->GetStaticField(0x50F00);
	}
	static ::System::Action** StaticGet___9__1_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NJMHBNJKNMI___c_TypeDefinitionIndex)->GetStaticField(0x50F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMHBNJKNMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBNJKNMI___C__CTOR_OFFSET))(this);
	}

	::System::Void GJCJOEPDKJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBNJKNMI___C_GJCJOEPDKJD_OFFSET))(this);
	}
};
