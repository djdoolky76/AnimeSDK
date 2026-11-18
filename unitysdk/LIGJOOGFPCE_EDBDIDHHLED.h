#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIGJOOGFPCE_CDIDNKBCJBC;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }

#define LIGJOOGFPCE_EDBDIDHHLED_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x15660B70)
#define LIGJOOGFPCE_EDBDIDHHLED_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x15660A20)
#define LIGJOOGFPCE_EDBDIDHHLED__CTOR_OFFSET UNITYSDK_OFFSET(0x15660A10)

inline static constexpr unsigned int LIGJOOGFPCE_EDBDIDHHLED_TypeDefinitionIndex = 92785;

class LIGJOOGFPCE_EDBDIDHHLED : public ::System::Object
{
public:
	::LIGJOOGFPCE_CDIDNKBCJBC* FGBNBFHOKAA; // 0x10
	::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* OMBBFKFPNCA; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGJOOGFPCE_EDBDIDHHLED__CTOR_OFFSET))(this);
	}

	::System::Void LDMKNICFFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGJOOGFPCE_EDBDIDHHLED_LDMKNICFFNB_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM(::MoleMole::MultipleVideoPlayerManager* PMKFNOGFCNA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + LIGJOOGFPCE_EDBDIDHHLED_AACLKPHGMLM_OFFSET))(this, PMKFNOGFCNA);
	}
};
