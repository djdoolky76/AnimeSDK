#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }
namespace System { template <typename T> class Func_1; }

#define KNOAAMJMBAA___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15800A60)
#define KNOAAMJMBAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15800A10)
#define KNOAAMJMBAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15800A50)

inline static constexpr unsigned int KNOAAMJMBAA___c_TypeDefinitionIndex = 86952;

class KNOAAMJMBAA___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigAutoBattleAccessoryEffect*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigAutoBattleAccessoryEffect*>**)Il2CppClass::FromTypeDefinitionIndex(KNOAAMJMBAA___c_TypeDefinitionIndex)->GetStaticField(0x41480);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KNOAAMJMBAA___c_TypeDefinitionIndex)->GetStaticField(0x41488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOAAMJMBAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOAAMJMBAA___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigAutoBattleAccessoryEffect* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigAutoBattleAccessoryEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOAAMJMBAA___C_LPCHADDECLC_OFFSET))(this);
	}
};
