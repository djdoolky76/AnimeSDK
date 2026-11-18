#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelEndPerform; }
namespace System { template <typename T> class Func_1; }

#define KJKHMICPAOD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1268B100)
#define KJKHMICPAOD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1268B0B0)
#define KJKHMICPAOD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1268B0F0)

inline static constexpr unsigned int KJKHMICPAOD___c_TypeDefinitionIndex = 87428;

class KJKHMICPAOD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KJKHMICPAOD___c_TypeDefinitionIndex)->GetStaticField(0x3B800);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigLevelEndPerform*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigLevelEndPerform*>**)Il2CppClass::FromTypeDefinitionIndex(KJKHMICPAOD___c_TypeDefinitionIndex)->GetStaticField(0x3B808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJKHMICPAOD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelEndPerform* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigLevelEndPerform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD___C_LPCHADDECLC_OFFSET))(this);
	}
};
