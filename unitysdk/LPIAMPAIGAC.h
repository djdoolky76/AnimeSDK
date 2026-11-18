#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APGOKGEOJJJ.h"
#include "unitysdk/CPGCOBNECDL.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define LPIAMPAIGAC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16C6DAB0)
#define LPIAMPAIGAC_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x16C6D8D0)
#define LPIAMPAIGAC_JLFPLKKPPHI_OFFSET UNITYSDK_OFFSET(0x16C6DAF0)
#define LPIAMPAIGAC_LJOIMGHANDG_OFFSET UNITYSDK_OFFSET(0x16C6DB00)
#define LPIAMPAIGAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16C6D9B0)
#define LPIAMPAIGAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6D8C0)

inline static constexpr unsigned int LPIAMPAIGAC_TypeDefinitionIndex = 73919;

class LPIAMPAIGAC : public ::APGOKGEOJJJ
{
public:
	::APGOKGEOJJJ* _ECFGFLNCJII_k__BackingField; // 0x10
	::CPGCOBNECDL _HGEFPNFCPHE_k__BackingField; // 0x18

	::System::Void _ctor(::CPGCOBNECDL IIDKBMFGAOL, ::APGOKGEOJJJ* MJCKFJJCPAA)
	{
		return ((::System::Void(*)(::PVOID, ::CPGCOBNECDL, ::APGOKGEOJJJ*))((::PBYTE)hIl2Cpp + LPIAMPAIGAC__CTOR_OFFSET))(this, IIDKBMFGAOL, MJCKFJJCPAA);
	}

	::System::Boolean FCFOEJGPDNO(::System::Collections::Generic::IList_1<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LPIAMPAIGAC_FCFOEJGPDNO_OFFSET))(this, HGKANJHHLMF);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIAMPAIGAC_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIAMPAIGAC_DPIHOJBBGLA_OFFSET))(this);
	}

	::APGOKGEOJJJ* JLFPLKKPPHI()
	{
		return ((::APGOKGEOJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIAMPAIGAC_JLFPLKKPPHI_OFFSET))(this);
	}

	::CPGCOBNECDL LJOIMGHANDG()
	{
		return ((::CPGCOBNECDL(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIAMPAIGAC_LJOIMGHANDG_OFFSET))(this);
	}
};
