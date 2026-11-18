#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCGJLGJHIKB;
namespace System { class Action; }

#define JCGJLGJHIKB_BPMLIEEJEMN_NEPHFBHIJIL_OFFSET UNITYSDK_OFFSET(0x15C36A80)
#define JCGJLGJHIKB_BPMLIEEJEMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15C36A70)

inline static constexpr unsigned int JCGJLGJHIKB_BPMLIEEJEMN_TypeDefinitionIndex = 50882;

class JCGJLGJHIKB_BPMLIEEJEMN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::JCGJLGJHIKB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGJLGJHIKB_BPMLIEEJEMN__CTOR_OFFSET))(this);
	}

	::System::Void NEPHFBHIJIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGJLGJHIKB_BPMLIEEJEMN_NEPHFBHIJIL_OFFSET))(this);
	}
};
