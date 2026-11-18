#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MELOMBGJHIK___C_PCPFELGAKDI_OFFSET UNITYSDK_OFFSET(0x11F481E0)
#define MELOMBGJHIK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F48190)
#define MELOMBGJHIK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F481D0)

inline static constexpr unsigned int MELOMBGJHIK___c_TypeDefinitionIndex = 54445;

class MELOMBGJHIK___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MELOMBGJHIK___c_TypeDefinitionIndex)->GetStaticField(0x3E7C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MELOMBGJHIK___c_TypeDefinitionIndex)->GetStaticField(0x3E7C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELOMBGJHIK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELOMBGJHIK___C__CTOR_OFFSET))(this);
	}

	::System::Void PCPFELGAKDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELOMBGJHIK___C_PCPFELGAKDI_OFFSET))(this);
	}
};
