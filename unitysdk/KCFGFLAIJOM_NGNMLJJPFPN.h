#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KCFGFLAIJOM_NGNMLJJPFPN__CTOR_OFFSET UNITYSDK_OFFSET(0x157DE560)

inline static constexpr unsigned int KCFGFLAIJOM_NGNMLJJPFPN_TypeDefinitionIndex = 67814;

class KCFGFLAIJOM_NGNMLJJPFPN : public ::System::Object
{
public:
	::System::Action* PNCBKGGEPEM; // 0x10
	::System::Single MMNNLOMMNGL; // 0x18
	::System::Boolean OBOMKGBILDH; // 0x1C
	::System::Boolean MHOIBAODPID; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFGFLAIJOM_NGNMLJJPFPN__CTOR_OFFSET))(this);
	}
};
