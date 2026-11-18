#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace System { template <typename T> class Func_1; }

#define LDHNDNLLMFC___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x17739BB0)
#define LDHNDNLLMFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17739B60)
#define LDHNDNLLMFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17739BA0)

inline static constexpr unsigned int LDHNDNLLMFC___c_TypeDefinitionIndex = 42749;

class LDHNDNLLMFC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDHNDNLLMFC___c_TypeDefinitionIndex)->GetStaticField(0x38400);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigSideScrollingLevel*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigSideScrollingLevel*>**)Il2CppClass::FromTypeDefinitionIndex(LDHNDNLLMFC___c_TypeDefinitionIndex)->GetStaticField(0x38408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDHNDNLLMFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHNDNLLMFC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSideScrollingLevel* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigSideScrollingLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHNDNLLMFC___C_LPCHADDECLC_OFFSET))(this);
	}
};
