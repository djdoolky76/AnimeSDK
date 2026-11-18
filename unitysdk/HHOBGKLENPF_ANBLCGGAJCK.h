#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HHOBGKLENPF_ANBLCGGAJCK_GCGJHCJECPC_OFFSET UNITYSDK_OFFSET(0x146FC5E0)
#define HHOBGKLENPF_ANBLCGGAJCK_JDOGHJPGCDN_OFFSET UNITYSDK_OFFSET(0x146FC5F0)
#define HHOBGKLENPF_ANBLCGGAJCK__CTOR_OFFSET UNITYSDK_OFFSET(0x146FC5D0)

inline static constexpr unsigned int HHOBGKLENPF_ANBLCGGAJCK_TypeDefinitionIndex = 54308;

class HHOBGKLENPF_ANBLCGGAJCK : public ::System::Object
{
public:
	::System::Action* KKPCHLMMKDL; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_ANBLCGGAJCK__CTOR_OFFSET))(this);
	}

	::System::Boolean GCGJHCJECPC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_ANBLCGGAJCK_GCGJHCJECPC_OFFSET))(this);
	}

	::System::Void JDOGHJPGCDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_ANBLCGGAJCK_JDOGHJPGCDN_OFFSET))(this);
	}
};
