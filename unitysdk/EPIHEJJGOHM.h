#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIHEJJGOHM__CTOR_OFFSET UNITYSDK_OFFSET(0x11AABAF0)

inline static constexpr unsigned int EPIHEJJGOHM_TypeDefinitionIndex = 45488;

class EPIHEJJGOHM : public ::System::Object
{
public:
	::System::Boolean FEIKDJDGKIK; // 0x10
	::System::Boolean CGEMLHFPINP; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 PIEAKILBLHG; // 0x14
	::System::Int32 DKHKPMOOHPH; // 0x18
	::System::Int32 OOGLHLBACBD; // 0x1C
	::System::Int32 HAJJOKHMANN; // 0x20
	::System::Int32 ALADHDOHKOE; // 0x24
	::System::Int32 NCMODBBKIAH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHEJJGOHM__CTOR_OFFSET))(this);
	}
};
