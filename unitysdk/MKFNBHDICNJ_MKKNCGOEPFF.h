#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
class NBAPHAFDIBF;
namespace System { class Action; }

#define MKFNBHDICNJ_MKKNCGOEPFF_AAILKILONBO_OFFSET UNITYSDK_OFFSET(0x1A695E80)
#define MKFNBHDICNJ_MKKNCGOEPFF_OOBGJAOCAFC_OFFSET UNITYSDK_OFFSET(0x1A695DF0)
#define MKFNBHDICNJ_MKKNCGOEPFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68DCD0)

inline static constexpr unsigned int MKFNBHDICNJ_MKKNCGOEPFF_TypeDefinitionIndex = 61376;

class MKFNBHDICNJ_MKKNCGOEPFF : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MKKNCGOEPFF__CTOR_OFFSET))(this);
	}

	::System::Void OOBGJAOCAFC(::NBAPHAFDIBF* FGMNCNLGPAP)
	{
		return ((::System::Void(*)(::PVOID, ::NBAPHAFDIBF*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MKKNCGOEPFF_OOBGJAOCAFC_OFFSET))(this, FGMNCNLGPAP);
	}

	::System::Void AAILKILONBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MKKNCGOEPFF_AAILKILONBO_OFFSET))(this);
	}
};
