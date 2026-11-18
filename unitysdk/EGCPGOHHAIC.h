#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGCPGOHHAIC_JACIJBLFLOO.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CountDownUIOperation.h"
#include "unitysdk/MoleMole/InLevelTimerWidgetOperation.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EGCPGOHHAIC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x158A4B50)

inline static constexpr unsigned int EGCPGOHHAIC_TypeDefinitionIndex = 77838;

struct alignas(8) EGCPGOHHAIC
{
	::EGCPGOHHAIC_JACIJBLFLOO EJNFPOCMDJC; // 0x10
	::System::Single CJDMJLDDHJH; // 0x14
	::System::Single BIBKPIEODEC; // 0x18
	::System::Boolean GIPECNMEEPB; // 0x1C
	::System::Boolean KMPFFBJGLFD; // 0x1D
	::System::Byte _padding0[0x2];
	::System::String* ACPIJDKDMPK; // 0x20
	::System::String* NNIOAGDLCPN; // 0x28
	::System::Boolean PHFIJADCLHI; // 0x30
	::System::Byte _padding1[0x3];
	::MoleMole::FlowCanvas::Nodes::CountDownUIOperation FKAEKOILLFC; // 0x34
	::System::Int32 DGDFPBMPOCM; // 0x38
	::MoleMole::InLevelTimerWidgetOperation ALFMMHPDHNL; // 0x3C

	/*
	static ::EGCPGOHHAIC COKNIICCODC()
	{
		return ((::EGCPGOHHAIC(*)())((::PBYTE)hIl2Cpp + EGCPGOHHAIC_COKNIICCODC_OFFSET))();
	}
	*/
};
