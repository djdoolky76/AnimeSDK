#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_LNKGCGDKHHA;
namespace MoleMole { class GlobalPrepatchData; }
namespace System { class Exception; }

#define CHFJLNEHAAF_DJAHDCBGDNK__CTOR_OFFSET UNITYSDK_OFFSET(0x128F8B50)

inline static constexpr unsigned int CHFJLNEHAAF_DJAHDCBGDNK_TypeDefinitionIndex = 87341;

class CHFJLNEHAAF_DJAHDCBGDNK : public ::System::Object
{
public:
	::MoleMole::GlobalPrepatchData* LJBPECKCCEA; // 0x10
	::CHFJLNEHAAF_LNKGCGDKHHA* CAOMDIOGDHL; // 0x18
	::System::Exception* BENPBLMOAKD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_DJAHDCBGDNK__CTOR_OFFSET))(this);
	}
};
