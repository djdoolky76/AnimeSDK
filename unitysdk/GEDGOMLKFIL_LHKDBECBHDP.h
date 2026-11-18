#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class DBJDGODFDCA;

#define GEDGOMLKFIL_LHKDBECBHDP_EHDHDFFCKKH_OFFSET UNITYSDK_OFFSET(0x10EE7410)
#define GEDGOMLKFIL_LHKDBECBHDP__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE7400)

inline static constexpr unsigned int GEDGOMLKFIL_LHKDBECBHDP_TypeDefinitionIndex = 50929;

class GEDGOMLKFIL_LHKDBECBHDP : public ::System::Object
{
public:
	::DBJDGODFDCA* FECOKAKFPLK; // 0x10
	::MoleMole::EntityHandle EDFNGHMIMOC; // 0x18
	::MoleMole::EntityHandle CNLKCLNNPFK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDGOMLKFIL_LHKDBECBHDP__CTOR_OFFSET))(this);
	}

	::System::Void EHDHDFFCKKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDGOMLKFIL_LHKDBECBHDP_EHDHDFFCKKH_OFFSET))(this);
	}
};
