#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigControllableObject; }
namespace System { template <typename T> class Func_1; }

#define EKILHAOADKH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xF9DCA80)
#define EKILHAOADKH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9DCA30)
#define EKILHAOADKH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DCA70)

inline static constexpr unsigned int EKILHAOADKH___c_TypeDefinitionIndex = 89202;

class EKILHAOADKH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKILHAOADKH___c_TypeDefinitionIndex)->GetStaticField(0x433F0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigControllableObject*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigControllableObject*>**)Il2CppClass::FromTypeDefinitionIndex(EKILHAOADKH___c_TypeDefinitionIndex)->GetStaticField(0x433F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKILHAOADKH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKILHAOADKH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigControllableObject* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigControllableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKILHAOADKH___C_LPCHADDECLC_OFFSET))(this);
	}
};
