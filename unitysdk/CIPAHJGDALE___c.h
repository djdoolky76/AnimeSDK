#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CIPAHJGDALE___C_CFLJCGCJKGJ_OFFSET UNITYSDK_OFFSET(0x18DD9130)
#define CIPAHJGDALE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DD90E0)
#define CIPAHJGDALE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD9120)

inline static constexpr unsigned int CIPAHJGDALE___c_TypeDefinitionIndex = 63526;

class CIPAHJGDALE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CIPAHJGDALE___c_TypeDefinitionIndex)->GetStaticField(0x40380);
	}
	static ::System::Action** StaticGet___9__11_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CIPAHJGDALE___c_TypeDefinitionIndex)->GetStaticField(0x40388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIPAHJGDALE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPAHJGDALE___C__CTOR_OFFSET))(this);
	}

	::System::Void CFLJCGCJKGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPAHJGDALE___C_CFLJCGCJKGJ_OFFSET))(this);
	}
};
