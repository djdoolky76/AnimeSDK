#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTurnBaseBattle; }
namespace System { template <typename T> class Func_1; }

#define KENIKNCMEGM___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x17645120)
#define KENIKNCMEGM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176450D0)
#define KENIKNCMEGM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17645110)

inline static constexpr unsigned int KENIKNCMEGM___c_TypeDefinitionIndex = 51173;

class KENIKNCMEGM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KENIKNCMEGM___c_TypeDefinitionIndex)->GetStaticField(0x4BDA0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigTurnBaseBattle*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigTurnBaseBattle*>**)Il2CppClass::FromTypeDefinitionIndex(KENIKNCMEGM___c_TypeDefinitionIndex)->GetStaticField(0x4BDA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KENIKNCMEGM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIKNCMEGM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTurnBaseBattle* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigTurnBaseBattle*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIKNCMEGM___C_LPCHADDECLC_OFFSET))(this);
	}
};
