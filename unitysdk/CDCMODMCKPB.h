#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CDCMODMCKPB__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1A7B0)

inline static constexpr unsigned int CDCMODMCKPB_TypeDefinitionIndex = 65865;

class CDCMODMCKPB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMODMCKPB__CTOR_OFFSET))(this);
	}
};
