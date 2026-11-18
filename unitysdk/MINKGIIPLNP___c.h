#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace System { template <typename T> class Func_1; }

#define MINKGIIPLNP___C_GANOGAIODGN_OFFSET UNITYSDK_OFFSET(0x1405F530)
#define MINKGIIPLNP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1405F4E0)
#define MINKGIIPLNP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1405F520)

inline static constexpr unsigned int MINKGIIPLNP___c_TypeDefinitionIndex = 44094;

class MINKGIIPLNP___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigAnimatorBeHitPriorities*>** StaticGet___9__6_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigAnimatorBeHitPriorities*>**)Il2CppClass::FromTypeDefinitionIndex(MINKGIIPLNP___c_TypeDefinitionIndex)->GetStaticField(0x3BCA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MINKGIIPLNP___c_TypeDefinitionIndex)->GetStaticField(0x3BCA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MINKGIIPLNP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINKGIIPLNP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigAnimatorBeHitPriorities* GANOGAIODGN()
	{
		return ((::MoleMole::Config::ConfigAnimatorBeHitPriorities*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINKGIIPLNP___C_GANOGAIODGN_OFFSET))(this);
	}
};
