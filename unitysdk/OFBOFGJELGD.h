#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OFBOFGJELGD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F73CB0)

inline static constexpr unsigned int OFBOFGJELGD_TypeDefinitionIndex = 77825;

class OFBOFGJELGD : public ::System::Object
{
public:
	::System::String* GNNECNPFKCE; // 0x10
	::MoleMole::Config::ScreenEffectType MFLCCPAHBKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBOFGJELGD__CTOR_OFFSET))(this);
	}
};
