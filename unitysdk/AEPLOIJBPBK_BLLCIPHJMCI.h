#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBJCLLBMALO;
class OHDCKNOCMFK;
class PNHAEMFHHEB;
namespace System::Collections { class IEnumerator; }

#define AEPLOIJBPBK_BLLCIPHJMCI_HGJAJFCMPBO_OFFSET UNITYSDK_OFFSET(0x12CEE2E0)
#define AEPLOIJBPBK_BLLCIPHJMCI_NFFMAGBKIPA_OFFSET UNITYSDK_OFFSET(0x12CEE2C0)
#define AEPLOIJBPBK_BLLCIPHJMCI__CTOR_OFFSET UNITYSDK_OFFSET(0x12CEE2B0)

inline static constexpr unsigned int AEPLOIJBPBK_BLLCIPHJMCI_TypeDefinitionIndex = 62338;

class AEPLOIJBPBK_BLLCIPHJMCI : public ::System::Object
{
public:
	::MBJCLLBMALO* EFEBFFCEJEF; // 0x10
	::OHDCKNOCMFK* KKPFEIGFAKK; // 0x18
	::PNHAEMFHHEB* EBLIGFBDBMI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLOIJBPBK_BLLCIPHJMCI__CTOR_OFFSET))(this);
	}

	::System::Void NFFMAGBKIPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLOIJBPBK_BLLCIPHJMCI_NFFMAGBKIPA_OFFSET))(this);
	}

	::System::Collections::IEnumerator* HGJAJFCMPBO()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLOIJBPBK_BLLCIPHJMCI_HGJAJFCMPBO_OFFSET))(this);
	}
};
