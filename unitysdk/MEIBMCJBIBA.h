#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCPACNPOIGM.h"
#include "unitysdk/DJDCADPMGKF.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEIBMCJBIBA_ALDNPHAOKPK_OFFSET UNITYSDK_OFFSET(0x1E3B7480)
#define MEIBMCJBIBA_BEANMPMLJDN_OFFSET UNITYSDK_OFFSET(0x1E3B7520)
#define MEIBMCJBIBA_BMLOAFAGJPK_OFFSET UNITYSDK_OFFSET(0x1E3B73E0)
#define MEIBMCJBIBA_BOEHIGJPPFE_OFFSET UNITYSDK_OFFSET(0x1E3B7570)
#define MEIBMCJBIBA_ICCGAHGBPEE_OFFSET UNITYSDK_OFFSET(0x1E3B74D0)
#define MEIBMCJBIBA_JELMMMJMLAE_OFFSET UNITYSDK_OFFSET(0x1E3B7430)
#define MEIBMCJBIBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B0D40)

inline static constexpr unsigned int MEIBMCJBIBA_TypeDefinitionIndex = 94585;

class MEIBMCJBIBA : public ::LCPACNPOIGM
{
public:
	::System::Void _ctor(::DJDCADPMGKF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DJDCADPMGKF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MEIBMCJBIBA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BMLOAFAGJPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIBMCJBIBA_BMLOAFAGJPK_OFFSET))(this);
	}

	::System::String* JELMMMJMLAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIBMCJBIBA_JELMMMJMLAE_OFFSET))(this);
	}

	::System::String* ALDNPHAOKPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIBMCJBIBA_ALDNPHAOKPK_OFFSET))(this);
	}

	::System::Int32 ICCGAHGBPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIBMCJBIBA_ICCGAHGBPEE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BEANMPMLJDN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIBMCJBIBA_BEANMPMLJDN_OFFSET))(this);
	}

	::System::String* BOEHIGJPPFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIBMCJBIBA_BOEHIGJPPFE_OFFSET))(this);
	}
};
