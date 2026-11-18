#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGoalPath; }
namespace System { template <typename T> class Func_1; }

#define GBNNJGJPLGO___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x141279D0)
#define GBNNJGJPLGO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14127980)
#define GBNNJGJPLGO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141279C0)

inline static constexpr unsigned int GBNNJGJPLGO___c_TypeDefinitionIndex = 90906;

class GBNNJGJPLGO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GBNNJGJPLGO___c_TypeDefinitionIndex)->GetStaticField(0x409F0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigGoalPath*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigGoalPath*>**)Il2CppClass::FromTypeDefinitionIndex(GBNNJGJPLGO___c_TypeDefinitionIndex)->GetStaticField(0x409F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBNNJGJPLGO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNNJGJPLGO___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGoalPath* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigGoalPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNNJGJPLGO___C_LPCHADDECLC_OFFSET))(this);
	}
};
