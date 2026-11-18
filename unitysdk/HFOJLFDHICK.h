#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDJDLIJPGDP.h"

#define HFOJLFDHICK__CTOR_OFFSET UNITYSDK_OFFSET(0x10100150)

inline static constexpr unsigned int HFOJLFDHICK_TypeDefinitionIndex = 73952;

class HFOJLFDHICK : public ::FDJDLIJPGDP
{
public:
	::System::Int32 JKIMNINDBFI; // 0x18
	::System::Int32 EGHNPJAINLK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOJLFDHICK__CTOR_OFFSET))(this);
	}
};
