#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/PIGCOHEMPLH.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMDPKKAMKAC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1410E770)
#define FMDPKKAMKAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1410E760)

inline static constexpr unsigned int FMDPKKAMKAC_TypeDefinitionIndex = 71609;

class FMDPKKAMKAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* HIDKBLMEAPE; // 0x10
	::System::Action* EKJEJLDAHLB; // 0x18
	::System::Int32 IDLHFIIJPEM; // 0x20
	::System::Int32 KCKNANEAKKG; // 0x24
	::System::UInt64 DGEBDBEOEFO; // 0x28
	::PIGCOHEMPLH LIHLMHMEOPD; // 0x30
	::System::Boolean AFJDCPGNBEB; // 0x34
	::System::Boolean HNJDKMECENL; // 0x35
	::System::Boolean LKIEJFMNGJL; // 0x36
	::System::Boolean EHGMNHMIHCA; // 0x37

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDPKKAMKAC__CTOR_OFFSET))(this);
	}

	::FMDPKKAMKAC* DGNAAPGKIPL()
	{
		return ((::FMDPKKAMKAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDPKKAMKAC_DGNAAPGKIPL_OFFSET))(this);
	}
};
