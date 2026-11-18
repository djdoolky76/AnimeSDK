#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAOAKNOBGIJ;
class LHKMKCIPOLD;
class MKFNBHDICNJ;
namespace System { template <typename T> class Action_1; }

#define MKFNBHDICNJ_DECEIGABMOP_BOHHCBAONIH_OFFSET UNITYSDK_OFFSET(0x14D8B7D0)
#define MKFNBHDICNJ_DECEIGABMOP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8B7C0)

inline static constexpr unsigned int MKFNBHDICNJ_DECEIGABMOP_TypeDefinitionIndex = 61388;

class MKFNBHDICNJ_DECEIGABMOP : public ::System::Object
{
public:
	::System::Action_1<::LHKMKCIPOLD*>* DLIDACICJBO; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::UInt32 ACHBBPJIBIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DECEIGABMOP__CTOR_OFFSET))(this);
	}

	::System::Void BOHHCBAONIH(::LAOAKNOBGIJ* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::LAOAKNOBGIJ*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DECEIGABMOP_BOHHCBAONIH_OFFSET))(this, BHDNBGLCNOM);
	}
};
