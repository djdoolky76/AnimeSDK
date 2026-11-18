#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayerUI; }
namespace System { template <typename T> class Func_1; }

#define IJDMEPEMDBE___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15EC7FF0)
#define IJDMEPEMDBE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EC7FA0)
#define IJDMEPEMDBE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC7FE0)

inline static constexpr unsigned int IJDMEPEMDBE___c_TypeDefinitionIndex = 87322;

class IJDMEPEMDBE___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigMultiplayerUI*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigMultiplayerUI*>**)Il2CppClass::FromTypeDefinitionIndex(IJDMEPEMDBE___c_TypeDefinitionIndex)->GetStaticField(0x37D40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IJDMEPEMDBE___c_TypeDefinitionIndex)->GetStaticField(0x37D48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJDMEPEMDBE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDMEPEMDBE___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigMultiplayerUI* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigMultiplayerUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDMEPEMDBE___C_LPCHADDECLC_OFFSET))(this);
	}
};
