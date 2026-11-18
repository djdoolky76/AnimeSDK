#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineMap; }
namespace System { template <typename T> class Func_1; }

#define INEHCLLKDDK___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14A34D70)
#define INEHCLLKDDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A34D20)
#define INEHCLLKDDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A34D60)

inline static constexpr unsigned int INEHCLLKDDK___c_TypeDefinitionIndex = 84465;

class INEHCLLKDDK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(INEHCLLKDDK___c_TypeDefinitionIndex)->GetStaticField(0x3E1D0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigZipLineMap*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigZipLineMap*>**)Il2CppClass::FromTypeDefinitionIndex(INEHCLLKDDK___c_TypeDefinitionIndex)->GetStaticField(0x3E1D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INEHCLLKDDK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEHCLLKDDK___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigZipLineMap* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigZipLineMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + INEHCLLKDDK___C_LPCHADDECLC_OFFSET))(this);
	}
};
