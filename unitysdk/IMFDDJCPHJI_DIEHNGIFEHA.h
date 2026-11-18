#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define IMFDDJCPHJI_DIEHNGIFEHA_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x16589E10)
#define IMFDDJCPHJI_DIEHNGIFEHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16589E00)

inline static constexpr unsigned int IMFDDJCPHJI_DIEHNGIFEHA_TypeDefinitionIndex = 67032;

class IMFDDJCPHJI_DIEHNGIFEHA : public ::System::Object
{
public:
	::HOCDHMEPPEG IPGBNEJGNLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI_DIEHNGIFEHA__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMFDDJCPHJI_DIEHNGIFEHA_HOFIFAEOLBM_OFFSET))(this, EGEGIMGMJHN);
	}
};
