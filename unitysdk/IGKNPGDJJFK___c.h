#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IGKNPGDJJFK___C_OOMLBKJNGPH_OFFSET UNITYSDK_OFFSET(0xB92D180)
#define IGKNPGDJJFK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB92D130)
#define IGKNPGDJJFK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB92D170)

inline static constexpr unsigned int IGKNPGDJJFK___c_TypeDefinitionIndex = 42403;

class IGKNPGDJJFK___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IGKNPGDJJFK___c_TypeDefinitionIndex)->GetStaticField(0x443E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IGKNPGDJJFK___c_TypeDefinitionIndex)->GetStaticField(0x443E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGKNPGDJJFK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNPGDJJFK___C__CTOR_OFFSET))(this);
	}

	::System::Void OOMLBKJNGPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNPGDJJFK___C_OOMLBKJNGPH_OFFSET))(this);
	}
};
