#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FBKPPNNODEM_COELHAECCLI_DPKDCKGNLPA_OFFSET UNITYSDK_OFFSET(0x169C10B0)
#define FBKPPNNODEM_COELHAECCLI__CTOR_OFFSET UNITYSDK_OFFSET(0x169C10A0)

inline static constexpr unsigned int FBKPPNNODEM_COELHAECCLI_TypeDefinitionIndex = 46160;

class FBKPPNNODEM_COELHAECCLI : public ::System::Object
{
public:
	::System::Action* OBAPMKKOLJO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKPPNNODEM_COELHAECCLI__CTOR_OFFSET))(this);
	}

	::System::Void DPKDCKGNLPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKPPNNODEM_COELHAECCLI_DPKDCKGNLPA_OFFSET))(this);
	}
};
