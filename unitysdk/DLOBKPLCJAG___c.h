#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace System { template <typename T> class Func_1; }

#define DLOBKPLCJAG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x12BB60C0)
#define DLOBKPLCJAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB6070)
#define DLOBKPLCJAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB60B0)

inline static constexpr unsigned int DLOBKPLCJAG___c_TypeDefinitionIndex = 91800;

class DLOBKPLCJAG___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigUIWeapon*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigUIWeapon*>**)Il2CppClass::FromTypeDefinitionIndex(DLOBKPLCJAG___c_TypeDefinitionIndex)->GetStaticField(0x3A9A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DLOBKPLCJAG___c_TypeDefinitionIndex)->GetStaticField(0x3A9A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLOBKPLCJAG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBKPLCJAG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIWeapon* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigUIWeapon*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBKPLCJAG___C_LPCHADDECLC_OFFSET))(this);
	}
};
