#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;
namespace System { class Action; }

#define OCIKBEJKPCB_KJHJEJPMAJD_ODHFGKNEIEP_OFFSET UNITYSDK_OFFSET(0x1005B680)
#define OCIKBEJKPCB_KJHJEJPMAJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1005B670)

inline static constexpr unsigned int OCIKBEJKPCB_KJHJEJPMAJD_TypeDefinitionIndex = 66585;

class OCIKBEJKPCB_KJHJEJPMAJD : public ::System::Object
{
public:
	::OCIKBEJKPCB* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::UInt32 IEGPOKIFOIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_KJHJEJPMAJD__CTOR_OFFSET))(this);
	}

	::System::Void ODHFGKNEIEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_KJHJEJPMAJD_ODHFGKNEIEP_OFFSET))(this);
	}
};
