#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineSubSystem; }
namespace System { template <typename T> class Func_1; }

#define BCDEOLCDDNB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x136116E0)
#define BCDEOLCDDNB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13611690)
#define BCDEOLCDDNB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136116D0)

inline static constexpr unsigned int BCDEOLCDDNB___c_TypeDefinitionIndex = 74544;

class BCDEOLCDDNB___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigZipLineSubSystem*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigZipLineSubSystem*>**)Il2CppClass::FromTypeDefinitionIndex(BCDEOLCDDNB___c_TypeDefinitionIndex)->GetStaticField(0x45C40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BCDEOLCDDNB___c_TypeDefinitionIndex)->GetStaticField(0x45C48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCDEOLCDDNB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDEOLCDDNB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigZipLineSubSystem* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigZipLineSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDEOLCDDNB___C_LPCHADDECLC_OFFSET))(this);
	}
};
