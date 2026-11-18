#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace System { template <typename T> class Func_1; }

#define DNKGNCDLGEJ___C_KJIMAGGPDCB_OFFSET UNITYSDK_OFFSET(0xFDC9CE0)
#define DNKGNCDLGEJ___C_MOGKJKPDDKA_OFFSET UNITYSDK_OFFSET(0xFDC9CD0)
#define DNKGNCDLGEJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC9C80)
#define DNKGNCDLGEJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC9CC0)

inline static constexpr unsigned int DNKGNCDLGEJ___c_TypeDefinitionIndex = 69212;

class DNKGNCDLGEJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DNKGNCDLGEJ___c_TypeDefinitionIndex)->GetStaticField(0x45EB0);
	}
	static ::System::Func_1<::MoleMole::ConfigUIMainPageSkinShow*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUIMainPageSkinShow*>**)Il2CppClass::FromTypeDefinitionIndex(DNKGNCDLGEJ___c_TypeDefinitionIndex)->GetStaticField(0x45EB8);
	}
	static ::System::Func_1<::MoleMole::ConfigUIMainPageSkinShow*>** StaticGet___9__4_1()
	{
		return (::System::Func_1<::MoleMole::ConfigUIMainPageSkinShow*>**)Il2CppClass::FromTypeDefinitionIndex(DNKGNCDLGEJ___c_TypeDefinitionIndex)->GetStaticField(0x45EC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNKGNCDLGEJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUIMainPageSkinShow* MOGKJKPDDKA()
	{
		return ((::MoleMole::ConfigUIMainPageSkinShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ___C_MOGKJKPDDKA_OFFSET))(this);
	}

	::MoleMole::ConfigUIMainPageSkinShow* KJIMAGGPDCB()
	{
		return ((::MoleMole::ConfigUIMainPageSkinShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ___C_KJIMAGGPDCB_OFFSET))(this);
	}
};
