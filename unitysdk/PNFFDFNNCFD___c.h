#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNFFDFNNCFD___C_HOCJKPFBKPK_OFFSET UNITYSDK_OFFSET(0x1C698AB0)
#define PNFFDFNNCFD___C_OAPAHGKCPOD_OFFSET UNITYSDK_OFFSET(0x1C698C80)
#define PNFFDFNNCFD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C698A60)
#define PNFFDFNNCFD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C698AA0)

inline static constexpr unsigned int PNFFDFNNCFD___c_TypeDefinitionIndex = 59679;

class PNFFDFNNCFD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PNFFDFNNCFD___c_TypeDefinitionIndex)->GetStaticField(0x45A10);
	}
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PNFFDFNNCFD___c_TypeDefinitionIndex)->GetStaticField(0x45A18);
	}
	static ::System::Action** StaticGet___9__18_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PNFFDFNNCFD___c_TypeDefinitionIndex)->GetStaticField(0x45A20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNFFDFNNCFD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFFDFNNCFD___C__CTOR_OFFSET))(this);
	}

	::System::Void HOCJKPFBKPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFFDFNNCFD___C_HOCJKPFBKPK_OFFSET))(this);
	}

	::System::Void OAPAHGKCPOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFFDFNNCFD___C_OAPAHGKCPOD_OFFSET))(this);
	}
};
