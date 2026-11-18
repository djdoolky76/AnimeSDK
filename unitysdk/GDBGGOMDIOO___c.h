#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { template <typename T> class Func_1; }

#define GDBGGOMDIOO___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x125C4980)
#define GDBGGOMDIOO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125C4930)
#define GDBGGOMDIOO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125C4970)

inline static constexpr unsigned int GDBGGOMDIOO___c_TypeDefinitionIndex = 72497;

class GDBGGOMDIOO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDBGGOMDIOO___c_TypeDefinitionIndex)->GetStaticField(0x3AE80);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigTeamInspireZone*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigTeamInspireZone*>**)Il2CppClass::FromTypeDefinitionIndex(GDBGGOMDIOO___c_TypeDefinitionIndex)->GetStaticField(0x3AE88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDBGGOMDIOO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBGGOMDIOO___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTeamInspireZone* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigTeamInspireZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBGGOMDIOO___C_LPCHADDECLC_OFFSET))(this);
	}
};
