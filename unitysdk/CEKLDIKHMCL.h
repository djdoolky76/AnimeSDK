#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKPAPMOMLIE.h"
#include "unitysdk/MoleMole/Config/InteractTargetType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

class MNBLIKPHDEA;
namespace System { class Action; }

#define CEKLDIKHMCL_HJNEFOKBAGG_OFFSET UNITYSDK_OFFSET(0x1694CCD0)

inline static constexpr unsigned int CEKLDIKHMCL_TypeDefinitionIndex = 90090;

struct alignas(8) CEKLDIKHMCL
{
	::MoleMole::HollowChessboard::HollowCell PPAHLMKPHIK; // 0x10
	::System::Byte _padding0[0x4];
	::MNBLIKPHDEA* HLFFCMIFFIB; // 0x20
	::MoleMole::Config::InteractTargetType OEFNMCAHNBN; // 0x28
	::System::Boolean CBBMEOPJKCG; // 0x2C
	::System::Byte _padding1[0x3];
	::EKPAPMOMLIE DMJBFBDLKIN; // 0x30
	::MoleMole::InputLogicEventType MBEHILFGMGI; // 0x34
	::System::Action* OOMOEOAMJBA; // 0x38

	/*
	static ::CEKLDIKHMCL HJNEFOKBAGG()
	{
		return ((::CEKLDIKHMCL(*)())((::PBYTE)hIl2Cpp + CEKLDIKHMCL_HJNEFOKBAGG_OFFSET))();
	}
	*/
};
