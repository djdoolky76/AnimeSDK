#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCJMBIOBFJN.h"

namespace System { class String; }

#define AAAGIJOKMLL_EAIJCOBOFEN_OFFSET UNITYSDK_OFFSET(0x17DB86B0)
#define AAAGIJOKMLL_EHOPNFKKNMK_OFFSET UNITYSDK_OFFSET(0x17DB8650)
#define AAAGIJOKMLL_FBBMMKAHLFN_OFFSET UNITYSDK_OFFSET(0x17DB8770)
#define AAAGIJOKMLL_FCONHHMEJGM_OFFSET UNITYSDK_OFFSET(0x17DB8780)
#define AAAGIJOKMLL_JFKDLJBMAEC_OFFSET UNITYSDK_OFFSET(0x17DB8610)
#define AAAGIJOKMLL_KMBEFKBFBJC_OFFSET UNITYSDK_OFFSET(0x17DB8760)
#define AAAGIJOKMLL__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB8790)

inline static constexpr unsigned int AAAGIJOKMLL_TypeDefinitionIndex = 47491;

class AAAGIJOKMLL : public ::GCJMBIOBFJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGIJOKMLL__CTOR_OFFSET))(this);
	}

	::System::String* JFKDLJBMAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGIJOKMLL_JFKDLJBMAEC_OFFSET))(this);
	}

	::System::String* EHOPNFKKNMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGIJOKMLL_EHOPNFKKNMK_OFFSET))(this);
	}

	::System::Int32 EAIJCOBOFEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGIJOKMLL_EAIJCOBOFEN_OFFSET))(this);
	}

	::System::Boolean KMBEFKBFBJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGIJOKMLL_KMBEFKBFBJC_OFFSET))(this);
	}

	::System::Boolean FBBMMKAHLFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGIJOKMLL_FBBMMKAHLFN_OFFSET))(this);
	}

	::System::Boolean FCONHHMEJGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGIJOKMLL_FCONHHMEJGM_OFFSET))(this);
	}
};
