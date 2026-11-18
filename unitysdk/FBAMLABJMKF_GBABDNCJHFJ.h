#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class FBAMLABJMKF_BIHKDPEHCHE;

#define FBAMLABJMKF_GBABDNCJHFJ_GDGBBIEHFPG_OFFSET UNITYSDK_OFFSET(0x14AB9E80)
#define FBAMLABJMKF_GBABDNCJHFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB9E70)

inline static constexpr unsigned int FBAMLABJMKF_GBABDNCJHFJ_TypeDefinitionIndex = 78158;

class FBAMLABJMKF_GBABDNCJHFJ : public ::System::Object
{
public:
	::FBAMLABJMKF_BIHKDPEHCHE* EEMOEMFLABI; // 0x10
	::System::Single BFMMEICFNCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_GBABDNCJHFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean GDGBBIEHFPG(::AIKGHHJKNCE* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_GBABDNCJHFJ_GDGBBIEHFPG_OFFSET))(this, CDKCJAKODPN);
	}
};
