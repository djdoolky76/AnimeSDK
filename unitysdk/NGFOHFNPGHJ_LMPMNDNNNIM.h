#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

class JBLJJCPIAAO;
namespace System { class Action; }

#define NGFOHFNPGHJ_LMPMNDNNNIM_IBCAFCAKNKG_OFFSET UNITYSDK_OFFSET(0xE196BE0)
#define NGFOHFNPGHJ_LMPMNDNNNIM__CTOR_OFFSET UNITYSDK_OFFSET(0xE196BD0)

inline static constexpr unsigned int NGFOHFNPGHJ_LMPMNDNNNIM_TypeDefinitionIndex = 69520;

class NGFOHFNPGHJ_LMPMNDNNNIM : public ::System::Object
{
public:
	::JBLJJCPIAAO* DEBKBINGBHJ; // 0x10
	::System::Action* POCANNAFFOA; // 0x18
	::HPBIMDNDPLK OAKGFCEGIAE; // 0x20
	::System::Int32 ABHBKFJKINO; // 0x24
	::System::Boolean FLMNJOFKIKI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFOHFNPGHJ_LMPMNDNNNIM__CTOR_OFFSET))(this);
	}

	::System::Void IBCAFCAKNKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFOHFNPGHJ_LMPMNDNNNIM_IBCAFCAKNKG_OFFSET))(this);
	}
};
