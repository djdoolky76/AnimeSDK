#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTriggerCaches; }
namespace System { class Action; }

#define HKHFNCCLAHH_NANCHJPFJOB_PFIHEJFJLMO_OFFSET UNITYSDK_OFFSET(0x12E629A0)
#define HKHFNCCLAHH_NANCHJPFJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x12E62990)

inline static constexpr unsigned int HKHFNCCLAHH_NANCHJPFJOB_TypeDefinitionIndex = 71491;

class HKHFNCCLAHH_NANCHJPFJOB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHFNCCLAHH_NANCHJPFJOB__CTOR_OFFSET))(this);
	}

	::System::Void PFIHEJFJLMO(::MoleMole::Config::ConfigTriggerCaches* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCaches*))((::PBYTE)hIl2Cpp + HKHFNCCLAHH_NANCHJPFJOB_PFIHEJFJLMO_OFFSET))(this, DFMKILICPFB);
	}
};
