#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class JGBMOOJHMBF;

#define HMENNFHKEOE_LBJFEEJHPPK_OBKHFBCFOAL_OFFSET UNITYSDK_OFFSET(0x16CFC570)
#define HMENNFHKEOE_LBJFEEJHPPK_OOPHPGMEOCO_OFFSET UNITYSDK_OFFSET(0x16CFC780)
#define HMENNFHKEOE_LBJFEEJHPPK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFC560)

inline static constexpr unsigned int HMENNFHKEOE_LBJFEEJHPPK_TypeDefinitionIndex = 53335;

class HMENNFHKEOE_LBJFEEJHPPK : public ::System::Object
{
public:
	::FBHPDPBIGPK* LNCJHJHAJAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LBJFEEJHPPK__CTOR_OFFSET))(this);
	}

	::System::Void OBKHFBCFOAL(::JGBMOOJHMBF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LBJFEEJHPPK_OBKHFBCFOAL_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void OOPHPGMEOCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LBJFEEJHPPK_OOPHPGMEOCO_OFFSET))(this);
	}
};
