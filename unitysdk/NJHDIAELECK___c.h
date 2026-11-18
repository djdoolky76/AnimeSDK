#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShow; }
namespace System { template <typename T> class Func_1; }

#define NJHDIAELECK___C_KJIMAGGPDCB_OFFSET UNITYSDK_OFFSET(0x1159A330)
#define NJHDIAELECK___C_MOGKJKPDDKA_OFFSET UNITYSDK_OFFSET(0x1159A340)
#define NJHDIAELECK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1159A2E0)
#define NJHDIAELECK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1159A320)

inline static constexpr unsigned int NJHDIAELECK___c_TypeDefinitionIndex = 91249;

class NJHDIAELECK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJHDIAELECK___c_TypeDefinitionIndex)->GetStaticField(0x35BC0);
	}
	static ::System::Func_1<::MoleMole::ConfigUIMainPageShow*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUIMainPageShow*>**)Il2CppClass::FromTypeDefinitionIndex(NJHDIAELECK___c_TypeDefinitionIndex)->GetStaticField(0x35BC8);
	}
	static ::System::Func_1<::MoleMole::ConfigUIMainPageShow*>** StaticGet___9__4_1()
	{
		return (::System::Func_1<::MoleMole::ConfigUIMainPageShow*>**)Il2CppClass::FromTypeDefinitionIndex(NJHDIAELECK___c_TypeDefinitionIndex)->GetStaticField(0x35BD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJHDIAELECK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHDIAELECK___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUIMainPageShow* KJIMAGGPDCB()
	{
		return ((::MoleMole::ConfigUIMainPageShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHDIAELECK___C_KJIMAGGPDCB_OFFSET))(this);
	}

	::MoleMole::ConfigUIMainPageShow* MOGKJKPDDKA()
	{
		return ((::MoleMole::ConfigUIMainPageShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHDIAELECK___C_MOGKJKPDDKA_OFFSET))(this);
	}
};
