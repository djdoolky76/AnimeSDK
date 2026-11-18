#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/GIKIGPJEGFA.h"
#include "unitysdk/HDBDKPAJPJC.h"

class KGBFLHNJHHN;

#define IMMJGDCLMHB_DJKBJNJFEEA_OFFSET UNITYSDK_OFFSET(0x17C20210)
#define IMMJGDCLMHB_IMDEKKJIOHI_OFFSET UNITYSDK_OFFSET(0x17C20200)
#define IMMJGDCLMHB_KDHBKKIOPDP_OFFSET UNITYSDK_OFFSET(0x17C201F0)
#define IMMJGDCLMHB__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1FD10)

inline static constexpr unsigned int IMMJGDCLMHB_TypeDefinitionIndex = 17194;

class IMMJGDCLMHB : public ::GIKIGPJEGFA
{
public:
	::Foundation::Unreal::FGameplayTagContainer CLPFIGBILKN; // 0xA8

	::System::Void _ctor(::HDBDKPAJPJC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HDBDKPAJPJC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMMJGDCLMHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KDHBKKIOPDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMJGDCLMHB_KDHBKKIOPDP_OFFSET))(this);
	}

	::System::Int32 IMDEKKJIOHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMJGDCLMHB_IMDEKKJIOHI_OFFSET))(this);
	}

	::System::Int32 DJKBJNJFEEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMJGDCLMHB_DJKBJNJFEEA_OFFSET))(this);
	}
};
