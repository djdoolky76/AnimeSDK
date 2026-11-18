#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMisc; }
namespace System { class Action; }

#define MEEMMPKAFKL_POEIFDMOEJI_GCHAMAMLEFH_OFFSET UNITYSDK_OFFSET(0x14DDF100)
#define MEEMMPKAFKL_POEIFDMOEJI__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDF0F0)

inline static constexpr unsigned int MEEMMPKAFKL_POEIFDMOEJI_TypeDefinitionIndex = 63985;

class MEEMMPKAFKL_POEIFDMOEJI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_POEIFDMOEJI__CTOR_OFFSET))(this);
	}

	::System::Void GCHAMAMLEFH(::MoleMole::Config::ConfigMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_POEIFDMOEJI_GCHAMAMLEFH_OFFSET))(this, DFMKILICPFB);
	}
};
