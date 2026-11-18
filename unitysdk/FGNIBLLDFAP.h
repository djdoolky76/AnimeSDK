#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNBLIKPHDEA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define FGNIBLLDFAP__CTOR_OFFSET UNITYSDK_OFFSET(0x140F4890)

inline static constexpr unsigned int FGNIBLLDFAP_TypeDefinitionIndex = 40234;

class FGNIBLLDFAP : public ::MNBLIKPHDEA
{
public:
	::MoleMole::HollowChessboard::HollowCell NHGHPCBGGCI; // 0x10
	::System::Boolean JAIINGDNLFL; // 0x1C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::Boolean JAIINGDNLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + FGNIBLLDFAP__CTOR_OFFSET))(this, ABHBKFJKINO, JAIINGDNLFL);
	}
};
