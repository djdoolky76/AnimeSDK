#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace System { template <typename T> class Func_1; }

#define OPDGMACGPKK___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x119504B0)
#define OPDGMACGPKK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11950460)
#define OPDGMACGPKK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119504A0)

inline static constexpr unsigned int OPDGMACGPKK___c_TypeDefinitionIndex = 58418;

class OPDGMACGPKK___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigZipLine*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigZipLine*>**)Il2CppClass::FromTypeDefinitionIndex(OPDGMACGPKK___c_TypeDefinitionIndex)->GetStaticField(0x42930);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OPDGMACGPKK___c_TypeDefinitionIndex)->GetStaticField(0x42938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDGMACGPKK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDGMACGPKK___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigZipLine* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigZipLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDGMACGPKK___C_LPCHADDECLC_OFFSET))(this);
	}
};
