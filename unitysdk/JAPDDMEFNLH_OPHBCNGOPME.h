#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class AIKGHHJKNCE;
class FBAMLABJMKF;

#define JAPDDMEFNLH_OPHBCNGOPME_JAKEGCHPBGF_OFFSET UNITYSDK_OFFSET(0x153C9860)
#define JAPDDMEFNLH_OPHBCNGOPME__CTOR_OFFSET UNITYSDK_OFFSET(0x153C9850)

inline static constexpr unsigned int JAPDDMEFNLH_OPHBCNGOPME_TypeDefinitionIndex = 67260;

class JAPDDMEFNLH_OPHBCNGOPME : public ::System::Object
{
public:
	::FBAMLABJMKF* COBEJJHGMPO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_OPHBCNGOPME__CTOR_OFFSET))(this);
	}

	::AIKGHHJKNCE* JAKEGCHPBGF(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::AIKGHHJKNCE*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_OPHBCNGOPME_JAKEGCHPBGF_OFFSET))(this, EKPEBNCLJPM);
	}
};
