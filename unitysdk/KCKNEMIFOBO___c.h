#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowNpc; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define KCKNEMIFOBO___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x1297A670)
#define KCKNEMIFOBO___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1297A680)
#define KCKNEMIFOBO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1297A620)
#define KCKNEMIFOBO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1297A660)

inline static constexpr unsigned int KCKNEMIFOBO___c_TypeDefinitionIndex = 39815;

class KCKNEMIFOBO___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigHollowNpc*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowNpc*>**)Il2CppClass::FromTypeDefinitionIndex(KCKNEMIFOBO___c_TypeDefinitionIndex)->GetStaticField(0x41070);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KCKNEMIFOBO___c_TypeDefinitionIndex)->GetStaticField(0x41078);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigHollowNpc*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowNpc*>**)Il2CppClass::FromTypeDefinitionIndex(KCKNEMIFOBO___c_TypeDefinitionIndex)->GetStaticField(0x41080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCKNEMIFOBO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKNEMIFOBO___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowNpc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowNpc*))((::PBYTE)hIl2Cpp + KCKNEMIFOBO___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigHollowNpc* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowNpc*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKNEMIFOBO___C_LPCHADDECLC_OFFSET))(this);
	}
};
