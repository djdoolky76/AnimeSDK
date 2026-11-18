#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FJDMPNPOPMI_MHFKCBGFOBF_FOFIDEBDLOL_OFFSET UNITYSDK_OFFSET(0x1714B720)
#define FJDMPNPOPMI_MHFKCBGFOBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1714B710)

inline static constexpr unsigned int FJDMPNPOPMI_MHFKCBGFOBF_TypeDefinitionIndex = 51275;

class FJDMPNPOPMI_MHFKCBGFOBF : public ::System::Object
{
public:
	::System::Action* AMHGBGMOMLL; // 0x10
	::System::Boolean ONEBOLCOFFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_MHFKCBGFOBF__CTOR_OFFSET))(this);
	}

	::System::Void FOFIDEBDLOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_MHFKCBGFOBF_FOFIDEBDLOL_OFFSET))(this);
	}
};
