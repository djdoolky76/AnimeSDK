#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSplineTag; }
namespace System { template <typename T> class Func_1; }

#define PPMFHGPNNIH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1EBC0720)
#define PPMFHGPNNIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC06D0)
#define PPMFHGPNNIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC0710)

inline static constexpr unsigned int PPMFHGPNNIH___c_TypeDefinitionIndex = 42820;

class PPMFHGPNNIH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PPMFHGPNNIH___c_TypeDefinitionIndex)->GetStaticField(0x36400);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigSplineTag*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigSplineTag*>**)Il2CppClass::FromTypeDefinitionIndex(PPMFHGPNNIH___c_TypeDefinitionIndex)->GetStaticField(0x36408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPMFHGPNNIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFHGPNNIH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSplineTag* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigSplineTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFHGPNNIH___C_LPCHADDECLC_OFFSET))(this);
	}
};
