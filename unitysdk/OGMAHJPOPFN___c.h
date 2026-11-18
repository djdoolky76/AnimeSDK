#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamEntity; }
namespace System { template <typename T> class Func_1; }

#define OGMAHJPOPFN___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xE14E0D0)
#define OGMAHJPOPFN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE14E080)
#define OGMAHJPOPFN___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE14E0C0)

inline static constexpr unsigned int OGMAHJPOPFN___c_TypeDefinitionIndex = 43093;

class OGMAHJPOPFN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OGMAHJPOPFN___c_TypeDefinitionIndex)->GetStaticField(0x428B0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigTeamEntity*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigTeamEntity*>**)Il2CppClass::FromTypeDefinitionIndex(OGMAHJPOPFN___c_TypeDefinitionIndex)->GetStaticField(0x428B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGMAHJPOPFN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMAHJPOPFN___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTeamEntity* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigTeamEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMAHJPOPFN___C_LPCHADDECLC_OFFSET))(this);
	}
};
