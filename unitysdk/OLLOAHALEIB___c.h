#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHackerDrone; }
namespace System { template <typename T> class Func_1; }

#define OLLOAHALEIB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1369ED90)
#define OLLOAHALEIB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1369ED40)
#define OLLOAHALEIB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1369ED80)

inline static constexpr unsigned int OLLOAHALEIB___c_TypeDefinitionIndex = 82111;

class OLLOAHALEIB___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigHackerDrone*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHackerDrone*>**)Il2CppClass::FromTypeDefinitionIndex(OLLOAHALEIB___c_TypeDefinitionIndex)->GetStaticField(0x3CE50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OLLOAHALEIB___c_TypeDefinitionIndex)->GetStaticField(0x3CE58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLOAHALEIB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOAHALEIB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHackerDrone* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHackerDrone*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOAHALEIB___C_LPCHADDECLC_OFFSET))(this);
	}
};
