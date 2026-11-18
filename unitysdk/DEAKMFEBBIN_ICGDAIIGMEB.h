#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPrivateMessageContext; }

#define DEAKMFEBBIN_ICGDAIIGMEB_AGBELEEJIMB_OFFSET UNITYSDK_OFFSET(0x153695A0)
#define DEAKMFEBBIN_ICGDAIIGMEB__CTOR_OFFSET UNITYSDK_OFFSET(0x15368F60)

inline static constexpr unsigned int DEAKMFEBBIN_ICGDAIIGMEB_TypeDefinitionIndex = 67715;

class DEAKMFEBBIN_ICGDAIIGMEB : public ::System::Object
{
public:
	::MoleMole::UIPrivateMessageContext* DGMGHJOEOGB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_ICGDAIIGMEB__CTOR_OFFSET))(this);
	}

	::System::Void AGBELEEJIMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_ICGDAIIGMEB_AGBELEEJIMB_OFFSET))(this);
	}
};
