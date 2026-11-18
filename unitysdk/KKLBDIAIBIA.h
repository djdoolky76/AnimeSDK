#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKLBDIAIBIA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16818520)
#define KKLBDIAIBIA_BHNNFBJMOGF_OFFSET UNITYSDK_OFFSET(0x16818790)
#define KKLBDIAIBIA_DGABLGNAMPM_OFFSET UNITYSDK_OFFSET(0x16818820)
#define KKLBDIAIBIA_FMJCGFACPJC_OFFSET UNITYSDK_OFFSET(0x16818450)
#define KKLBDIAIBIA_KNNCLFLCJAB_OFFSET UNITYSDK_OFFSET(0x168186C0)
#define KKLBDIAIBIA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16818620)
#define KKLBDIAIBIA__CTOR_OFFSET UNITYSDK_OFFSET(0x16818400)

inline static constexpr unsigned int KKLBDIAIBIA_TypeDefinitionIndex = 87053;

class KKLBDIAIBIA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JCHEMFNBMKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLBDIAIBIA__CTOR_OFFSET))(this);
	}

	::System::Void FMJCGFACPJC(::System::Int32 AFDFEMDDMCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKLBDIAIBIA_FMJCGFACPJC_OFFSET))(this, AFDFEMDDMCI);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLBDIAIBIA_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLBDIAIBIA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean KNNCLFLCJAB(::System::Int32 AFDFEMDDMCI, ::System::Int32 JMKAGPGHLGC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KKLBDIAIBIA_KNNCLFLCJAB_OFFSET))(this, AFDFEMDDMCI, JMKAGPGHLGC);
	}

	::System::Int32 BHNNFBJMOGF(::System::Int32 AFDFEMDDMCI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKLBDIAIBIA_BHNNFBJMOGF_OFFSET))(this, AFDFEMDDMCI);
	}

	::System::Boolean DGABLGNAMPM(::System::Int32 AFDFEMDDMCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKLBDIAIBIA_DGABLGNAMPM_OFFSET))(this, AFDFEMDDMCI);
	}
};
