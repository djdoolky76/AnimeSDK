#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHEKDBPKDFF_CMGOPLKILHP_KONLPIHELPO_OFFSET UNITYSDK_OFFSET(0x14F29700)
#define CHEKDBPKDFF_CMGOPLKILHP__CTOR_OFFSET UNITYSDK_OFFSET(0x14F296F0)

inline static constexpr unsigned int CHEKDBPKDFF_CMGOPLKILHP_TypeDefinitionIndex = 42804;

class CHEKDBPKDFF_CMGOPLKILHP : public ::System::Object
{
public:
	::System::Int32 JHIGPMJNKGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_CMGOPLKILHP__CTOR_OFFSET))(this);
	}

	::System::Void KONLPIHELPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_CMGOPLKILHP_KONLPIHELPO_OFFSET))(this);
	}
};
