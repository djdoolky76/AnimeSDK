#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEDAOLMLPOB.h"
#include "unitysdk/System/Object.h"

class CMAICLLEKGO;
class EINNDDBIPAM;

#define NNHBBOBBIAE_BFDFEFHHFJC_OFFSET UNITYSDK_OFFSET(0x1316F020)
#define NNHBBOBBIAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1316F010)

inline static constexpr unsigned int NNHBBOBBIAE_TypeDefinitionIndex = 54236;

class NNHBBOBBIAE : public ::System::Object
{
public:
	::CMAICLLEKGO* PEPKAKDLBHE; // 0x10
	::EINNDDBIPAM* HAHECNDIEHO; // 0x18
	::System::Boolean JFJMCIJLJNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBBOBBIAE__CTOR_OFFSET))(this);
	}

	::MEDAOLMLPOB BFDFEFHHFJC()
	{
		return ((::MEDAOLMLPOB(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBBOBBIAE_BFDFEFHHFJC_OFFSET))(this);
	}
};
