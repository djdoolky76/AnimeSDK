#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

#define FAICJDDLJLI_CGNKNMIFDFH_OFFSET UNITYSDK_OFFSET(0x1725E010)
#define FAICJDDLJLI_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x1725E270)
#define FAICJDDLJLI_IECLBKNFIPH_OFFSET UNITYSDK_OFFSET(0x1725E090)
#define FAICJDDLJLI_KLGOHOPOKEN_OFFSET UNITYSDK_OFFSET(0x1725E260)
#define FAICJDDLJLI_MJCNKCCBDDC_OFFSET UNITYSDK_OFFSET(0x1725E080)
#define FAICJDDLJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1725E000)

inline static constexpr unsigned int FAICJDDLJLI_TypeDefinitionIndex = 74668;

class FAICJDDLJLI : public ::JNAGFFCCOHI
{
public:
	::System::Int32 _BBCAABFLBNL_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICJDDLJLI__CTOR_OFFSET))(this);
	}

	::System::Boolean CGNKNMIFDFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICJDDLJLI_CGNKNMIFDFH_OFFSET))(this);
	}

	::System::Void MJCNKCCBDDC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAICJDDLJLI_MJCNKCCBDDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IECLBKNFIPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICJDDLJLI_IECLBKNFIPH_OFFSET))(this);
	}

	::System::Int32 KLGOHOPOKEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICJDDLJLI_KLGOHOPOKEN_OFFSET))(this);
	}

	::System::Int64 DFIGOHGIDJN()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICJDDLJLI_DFIGOHGIDJN_OFFSET))(this);
	}
};
