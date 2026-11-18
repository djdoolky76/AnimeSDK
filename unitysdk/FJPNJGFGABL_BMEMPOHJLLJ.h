#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { class Action; }

#define FJPNJGFGABL_BMEMPOHJLLJ_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x11D800C0)
#define FJPNJGFGABL_BMEMPOHJLLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11D800B0)

inline static constexpr unsigned int FJPNJGFGABL_BMEMPOHJLLJ_TypeDefinitionIndex = 49429;

class FJPNJGFGABL_BMEMPOHJLLJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPNJGFGABL_BMEMPOHJLLJ__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigOnGoingTypeDurationData* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOnGoingTypeDurationData*))((::PBYTE)hIl2Cpp + FJPNJGFGABL_BMEMPOHJLLJ_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL);
	}
};
