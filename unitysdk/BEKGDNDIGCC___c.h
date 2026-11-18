#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeaponGacha; }
namespace System { template <typename T> class Func_1; }

#define BEKGDNDIGCC___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1822F820)
#define BEKGDNDIGCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1822F7D0)
#define BEKGDNDIGCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1822F810)

inline static constexpr unsigned int BEKGDNDIGCC___c_TypeDefinitionIndex = 82720;

class BEKGDNDIGCC___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigUIWeaponGacha*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigUIWeaponGacha*>**)Il2CppClass::FromTypeDefinitionIndex(BEKGDNDIGCC___c_TypeDefinitionIndex)->GetStaticField(0x3A430);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BEKGDNDIGCC___c_TypeDefinitionIndex)->GetStaticField(0x3A438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEKGDNDIGCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIWeaponGacha* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigUIWeaponGacha*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC___C_LPCHADDECLC_OFFSET))(this);
	}
};
