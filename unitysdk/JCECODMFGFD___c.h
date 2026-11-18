#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigWanderMove; }
namespace System { template <typename T> class Func_1; }

#define JCECODMFGFD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1659B700)
#define JCECODMFGFD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1659B6B0)
#define JCECODMFGFD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1659B6F0)

inline static constexpr unsigned int JCECODMFGFD___c_TypeDefinitionIndex = 77816;

class JCECODMFGFD___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigWanderMove*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigWanderMove*>**)Il2CppClass::FromTypeDefinitionIndex(JCECODMFGFD___c_TypeDefinitionIndex)->GetStaticField(0x514F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JCECODMFGFD___c_TypeDefinitionIndex)->GetStaticField(0x514F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCECODMFGFD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCECODMFGFD___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigWanderMove* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigWanderMove*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCECODMFGFD___C_LPCHADDECLC_OFFSET))(this);
	}
};
