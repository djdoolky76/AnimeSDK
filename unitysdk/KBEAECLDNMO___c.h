#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace System { template <typename T> class Func_1; }

#define KBEAECLDNMO___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x130A7E20)
#define KBEAECLDNMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130A7DD0)
#define KBEAECLDNMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130A7E10)

inline static constexpr unsigned int KBEAECLDNMO___c_TypeDefinitionIndex = 83145;

class KBEAECLDNMO___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigMultiplayer*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigMultiplayer*>**)Il2CppClass::FromTypeDefinitionIndex(KBEAECLDNMO___c_TypeDefinitionIndex)->GetStaticField(0x4A050);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBEAECLDNMO___c_TypeDefinitionIndex)->GetStaticField(0x4A058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEAECLDNMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEAECLDNMO___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigMultiplayer* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigMultiplayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEAECLDNMO___C_LPCHADDECLC_OFFSET))(this);
	}
};
