#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { template <typename T> class Func_1; }

#define ANODDHDMICG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x134E79F0)
#define ANODDHDMICG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134E79A0)
#define ANODDHDMICG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134E79E0)

inline static constexpr unsigned int ANODDHDMICG___c_TypeDefinitionIndex = 58919;

class ANODDHDMICG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ANODDHDMICG___c_TypeDefinitionIndex)->GetStaticField(0x4B460);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigHack*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHack*>**)Il2CppClass::FromTypeDefinitionIndex(ANODDHDMICG___c_TypeDefinitionIndex)->GetStaticField(0x4B468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANODDHDMICG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANODDHDMICG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHack* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHack*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANODDHDMICG___C_LPCHADDECLC_OFFSET))(this);
	}
};
