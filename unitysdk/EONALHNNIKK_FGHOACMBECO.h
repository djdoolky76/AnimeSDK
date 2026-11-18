#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace System { class Action; }

#define EONALHNNIKK_FGHOACMBECO_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x11CC7050)
#define EONALHNNIKK_FGHOACMBECO__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC7040)

inline static constexpr unsigned int EONALHNNIKK_FGHOACMBECO_TypeDefinitionIndex = 83840;

class EONALHNNIKK_FGHOACMBECO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONALHNNIKK_FGHOACMBECO__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigAnimatorBeHitPriorities* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*))((::PBYTE)hIl2Cpp + EONALHNNIKK_FGHOACMBECO_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
