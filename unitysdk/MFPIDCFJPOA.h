#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDHEDHANGDA;
class IPHCMHKIFNO;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFPIDCFJPOA_BNLCMEBLLKP_OFFSET UNITYSDK_OFFSET(0x15E2AF40)
#define MFPIDCFJPOA_IPFMLLFIOHE_OFFSET UNITYSDK_OFFSET(0x15E2B2C0)
#define MFPIDCFJPOA_JDLDLAFHPCD_OFFSET UNITYSDK_OFFSET(0x15E2B480)
#define MFPIDCFJPOA_KBJOKGEFLPC_OFFSET UNITYSDK_OFFSET(0x15E2AD60)
#define MFPIDCFJPOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2AD50)

inline static constexpr unsigned int MFPIDCFJPOA_TypeDefinitionIndex = 74868;

class MFPIDCFJPOA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IDHEDHANGDA*>* KBGCJLPMMKJ; // 0x10
	::IPHCMHKIFNO* MKOMFJIBKMK; // 0x18
	::System::Boolean HLAGFPMAAHP; // 0x20

	::System::Void _ctor(::IPHCMHKIFNO* MKOMFJIBKMK)
	{
		return ((::System::Void(*)(::PVOID, ::IPHCMHKIFNO*))((::PBYTE)hIl2Cpp + MFPIDCFJPOA__CTOR_OFFSET))(this, MKOMFJIBKMK);
	}

	::System::Void KBJOKGEFLPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIDCFJPOA_KBJOKGEFLPC_OFFSET))(this);
	}

	::System::Void IPFMLLFIOHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIDCFJPOA_IPFMLLFIOHE_OFFSET))(this);
	}

	::System::Void JDLDLAFHPCD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MFPIDCFJPOA_JDLDLAFHPCD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void BNLCMEBLLKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIDCFJPOA_BNLCMEBLLKP_OFFSET))(this);
	}
};
