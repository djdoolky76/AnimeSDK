#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ANCMHBBFOED___C_IMJIHICONBI_OFFSET UNITYSDK_OFFSET(0x17DDFD00)
#define ANCMHBBFOED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DDFCB0)
#define ANCMHBBFOED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDFCF0)

inline static constexpr unsigned int ANCMHBBFOED___c_TypeDefinitionIndex = 55176;

class ANCMHBBFOED___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ANCMHBBFOED___c_TypeDefinitionIndex)->GetStaticField(0x36BE0);
	}
	static ::System::Action** StaticGet___9__119_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ANCMHBBFOED___c_TypeDefinitionIndex)->GetStaticField(0x36BE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCMHBBFOED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED___C__CTOR_OFFSET))(this);
	}

	::System::Void IMJIHICONBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED___C_IMJIHICONBI_OFFSET))(this);
	}
};
