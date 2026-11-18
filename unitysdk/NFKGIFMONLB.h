#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEMHOAFEGEN.h"
#include "unitysdk/GGAHAPLOJNH.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFKGIFMONLB_ALDNPHAOKPK_OFFSET UNITYSDK_OFFSET(0x1E8281D0)
#define NFKGIFMONLB_BEANMPMLJDN_OFFSET UNITYSDK_OFFSET(0x1E828130)
#define NFKGIFMONLB_BMLOAFAGJPK_OFFSET UNITYSDK_OFFSET(0x1E828270)
#define NFKGIFMONLB_BOEHIGJPPFE_OFFSET UNITYSDK_OFFSET(0x1E828220)
#define NFKGIFMONLB_ICCGAHGBPEE_OFFSET UNITYSDK_OFFSET(0x1E828180)
#define NFKGIFMONLB_JELMMMJMLAE_OFFSET UNITYSDK_OFFSET(0x1E8280E0)
#define NFKGIFMONLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8280D0)

inline static constexpr unsigned int NFKGIFMONLB_TypeDefinitionIndex = 94704;

class NFKGIFMONLB : public ::MEMHOAFEGEN
{
public:
	::System::Void _ctor(::GGAHAPLOJNH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GGAHAPLOJNH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFKGIFMONLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JELMMMJMLAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKGIFMONLB_JELMMMJMLAE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BEANMPMLJDN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKGIFMONLB_BEANMPMLJDN_OFFSET))(this);
	}

	::System::Int32 ICCGAHGBPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKGIFMONLB_ICCGAHGBPEE_OFFSET))(this);
	}

	::System::String* ALDNPHAOKPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKGIFMONLB_ALDNPHAOKPK_OFFSET))(this);
	}

	::System::String* BOEHIGJPPFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKGIFMONLB_BOEHIGJPPFE_OFFSET))(this);
	}

	::System::Int32 BMLOAFAGJPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKGIFMONLB_BMLOAFAGJPK_OFFSET))(this);
	}
};
