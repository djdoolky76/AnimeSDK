#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace System { class Action; }

#define BLDLCEKFKJL_AIJHLIEPKBD_EFBLEPMAPDH_OFFSET UNITYSDK_OFFSET(0xFF8B2E0)
#define BLDLCEKFKJL_AIJHLIEPKBD__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8B2D0)

inline static constexpr unsigned int BLDLCEKFKJL_AIJHLIEPKBD_TypeDefinitionIndex = 69004;

class BLDLCEKFKJL_AIJHLIEPKBD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDLCEKFKJL_AIJHLIEPKBD__CTOR_OFFSET))(this);
	}

	::System::Void EFBLEPMAPDH(::MoleMole::Config::ConfigHollowPlayer* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*))((::PBYTE)hIl2Cpp + BLDLCEKFKJL_AIJHLIEPKBD_EFBLEPMAPDH_OFFSET))(this, DFMKILICPFB);
	}
};
