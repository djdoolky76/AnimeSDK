#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/LBGNABCNKHE.h"

#define LFIAHPMMCAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F62A240)

inline static constexpr unsigned int LFIAHPMMCAC_TypeDefinitionIndex = 94808;

class LFIAHPMMCAC : public ::CGGLJLECNJM
{
public:
	::LBGNABCNKHE PDOMEJHJPBF; // 0x20
	::System::Int32 CIIGCDOADJC; // 0x24
	::System::Int32 MDPGLDEFMJF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIAHPMMCAC__CTOR_OFFSET))(this);
	}
};
