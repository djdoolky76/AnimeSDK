#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MKFNBHDICNJ_CGBPMNPDKEP_FPEDJHKFEME_OFFSET UNITYSDK_OFFSET(0x17D45A80)
#define MKFNBHDICNJ_CGBPMNPDKEP__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45A70)

inline static constexpr unsigned int MKFNBHDICNJ_CGBPMNPDKEP_TypeDefinitionIndex = 61403;

class MKFNBHDICNJ_CGBPMNPDKEP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::UInt32 KEGGKEDLLEK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CGBPMNPDKEP__CTOR_OFFSET))(this);
	}

	::System::Void FPEDJHKFEME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CGBPMNPDKEP_FPEDJHKFEME_OFFSET))(this);
	}
};
