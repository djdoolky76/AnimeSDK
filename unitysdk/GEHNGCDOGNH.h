#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

#define GEHNGCDOGNH_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x13251C60)
#define GEHNGCDOGNH_PFIKPCBLIDH_OFFSET UNITYSDK_OFFSET(0x13251C50)
#define GEHNGCDOGNH__CTOR_OFFSET UNITYSDK_OFFSET(0x13251C40)

inline static constexpr unsigned int GEHNGCDOGNH_TypeDefinitionIndex = 68786;

class GEHNGCDOGNH : public ::JNAGFFCCOHI
{
public:
	::System::UInt32 _OPGDMEGKDEO_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 HHEGANCPILH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEHNGCDOGNH__CTOR_OFFSET))(this, HHEGANCPILH);
	}

	::System::Void PFIKPCBLIDH(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEHNGCDOGNH_PFIKPCBLIDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 LFGIDEIHCID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHNGCDOGNH_LFGIDEIHCID_OFFSET))(this);
	}
};
