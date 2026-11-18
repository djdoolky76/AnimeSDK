#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSwitchTeamActivity; }
namespace System { template <typename T> class Func_1; }

#define BGKDILAGODH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x143E6670)
#define BGKDILAGODH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143E6620)
#define BGKDILAGODH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143E6660)

inline static constexpr unsigned int BGKDILAGODH___c_TypeDefinitionIndex = 91832;

class BGKDILAGODH___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigSwitchTeamActivity*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigSwitchTeamActivity*>**)Il2CppClass::FromTypeDefinitionIndex(BGKDILAGODH___c_TypeDefinitionIndex)->GetStaticField(0x49720);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BGKDILAGODH___c_TypeDefinitionIndex)->GetStaticField(0x49728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGKDILAGODH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDILAGODH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSwitchTeamActivity* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigSwitchTeamActivity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDILAGODH___C_LPCHADDECLC_OFFSET))(this);
	}
};
