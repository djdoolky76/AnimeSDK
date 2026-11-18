#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { template <typename T> class Func_1; }

#define KOLACFGNPNL___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15803980)
#define KOLACFGNPNL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15803930)
#define KOLACFGNPNL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15803970)

inline static constexpr unsigned int KOLACFGNPNL___c_TypeDefinitionIndex = 53251;

class KOLACFGNPNL___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigGroupVideo*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigGroupVideo*>**)Il2CppClass::FromTypeDefinitionIndex(KOLACFGNPNL___c_TypeDefinitionIndex)->GetStaticField(0x38390);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KOLACFGNPNL___c_TypeDefinitionIndex)->GetStaticField(0x38398);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOLACFGNPNL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLACFGNPNL___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGroupVideo* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigGroupVideo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLACFGNPNL___C_LPCHADDECLC_OFFSET))(this);
	}
};
