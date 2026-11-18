#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GLLAMAMOIMK___C_IMJGKJDHAIA_OFFSET UNITYSDK_OFFSET(0x179FAB10)
#define GLLAMAMOIMK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179FAAC0)
#define GLLAMAMOIMK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179FAB00)

inline static constexpr unsigned int GLLAMAMOIMK___c_TypeDefinitionIndex = 85021;

class GLLAMAMOIMK___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__19_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GLLAMAMOIMK___c_TypeDefinitionIndex)->GetStaticField(0x3DD80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GLLAMAMOIMK___c_TypeDefinitionIndex)->GetStaticField(0x3DD88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLAMAMOIMK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAMAMOIMK___C__CTOR_OFFSET))(this);
	}

	::System::Void IMJGKJDHAIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAMAMOIMK___C_IMJGKJDHAIA_OFFSET))(this);
	}
};
