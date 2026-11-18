#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectEntityDither; }
namespace System { class Action; }

#define DPIHIPFHAOE_AJNKNEBELJF_PBBCLNGGLKA_OFFSET UNITYSDK_OFFSET(0x15881190)
#define DPIHIPFHAOE_AJNKNEBELJF__CTOR_OFFSET UNITYSDK_OFFSET(0x15881180)

inline static constexpr unsigned int DPIHIPFHAOE_AJNKNEBELJF_TypeDefinitionIndex = 44560;

class DPIHIPFHAOE_AJNKNEBELJF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHIPFHAOE_AJNKNEBELJF__CTOR_OFFSET))(this);
	}

	::System::Void PBBCLNGGLKA(::MoleMole::Config::ConfigViewObjectEntityDither* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectEntityDither*))((::PBYTE)hIl2Cpp + DPIHIPFHAOE_AJNKNEBELJF_PBBCLNGGLKA_OFFSET))(this, DFMKILICPFB);
	}
};
