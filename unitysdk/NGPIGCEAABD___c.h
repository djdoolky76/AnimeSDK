#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NGPIGCEAABD___C_PBHBLFLMAAH_OFFSET UNITYSDK_OFFSET(0x13757350)
#define NGPIGCEAABD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13757300)
#define NGPIGCEAABD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13757340)

inline static constexpr unsigned int NGPIGCEAABD___c_TypeDefinitionIndex = 58503;

class NGPIGCEAABD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NGPIGCEAABD___c_TypeDefinitionIndex)->GetStaticField(0x48ED0);
	}
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NGPIGCEAABD___c_TypeDefinitionIndex)->GetStaticField(0x48ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGPIGCEAABD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPIGCEAABD___C__CTOR_OFFSET))(this);
	}

	::System::Void PBHBLFLMAAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPIGCEAABD___C_PBHBLFLMAAH_OFFSET))(this);
	}
};
