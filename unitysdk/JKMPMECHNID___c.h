#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JKMPMECHNID___C_FOGJEENDBJA_OFFSET UNITYSDK_OFFSET(0x1308F3A0)
#define JKMPMECHNID___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1308F350)
#define JKMPMECHNID___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1308F390)

inline static constexpr unsigned int JKMPMECHNID___c_TypeDefinitionIndex = 67917;

class JKMPMECHNID___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JKMPMECHNID___c_TypeDefinitionIndex)->GetStaticField(0x32650);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JKMPMECHNID___c_TypeDefinitionIndex)->GetStaticField(0x32658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKMPMECHNID___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMPMECHNID___C__CTOR_OFFSET))(this);
	}

	::System::Void FOGJEENDBJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMPMECHNID___C_FOGJEENDBJA_OFFSET))(this);
	}
};
