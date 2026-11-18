#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FFGPCDBGHMN___C_BKCNHOJIJLF_OFFSET UNITYSDK_OFFSET(0x156B8F10)
#define FFGPCDBGHMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156B8EC0)
#define FFGPCDBGHMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156B8F00)

inline static constexpr unsigned int FFGPCDBGHMN___c_TypeDefinitionIndex = 73717;

class FFGPCDBGHMN___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FFGPCDBGHMN___c_TypeDefinitionIndex)->GetStaticField(0x434E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FFGPCDBGHMN___c_TypeDefinitionIndex)->GetStaticField(0x434E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFGPCDBGHMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPCDBGHMN___C__CTOR_OFFSET))(this);
	}

	::System::Void BKCNHOJIJLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPCDBGHMN___C_BKCNHOJIJLF_OFFSET))(this);
	}
};
