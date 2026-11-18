#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIGBHACJLFF.h"
#include "unitysdk/PMJGFLIMNPB.h"

#define PJPIILMJBPN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x150CF990)
#define PJPIILMJBPN__CTOR_OFFSET UNITYSDK_OFFSET(0x150CF9A0)

inline static constexpr unsigned int PJPIILMJBPN_TypeDefinitionIndex = 82503;

class PJPIILMJBPN : public ::OIGBHACJLFF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIILMJBPN__CTOR_OFFSET))(this);
	}

	::PMJGFLIMNPB get_Type()
	{
		return ((::PMJGFLIMNPB(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIILMJBPN_GET_TYPE_OFFSET))(this);
	}
};
