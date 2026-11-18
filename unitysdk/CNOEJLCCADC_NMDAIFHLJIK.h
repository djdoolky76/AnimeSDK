#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace System { class Action; }

#define CNOEJLCCADC_NMDAIFHLJIK_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14978EB0)
#define CNOEJLCCADC_NMDAIFHLJIK__CTOR_OFFSET UNITYSDK_OFFSET(0x14978EA0)

inline static constexpr unsigned int CNOEJLCCADC_NMDAIFHLJIK_TypeDefinitionIndex = 59185;

class CNOEJLCCADC_NMDAIFHLJIK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOEJLCCADC_NMDAIFHLJIK__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSideScrollingLevel* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*))((::PBYTE)hIl2Cpp + CNOEJLCCADC_NMDAIFHLJIK_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
