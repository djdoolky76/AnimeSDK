#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HOCLPGINGNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1470BED0)

inline static constexpr unsigned int HOCLPGINGNN_TypeDefinitionIndex = 73937;

class HOCLPGINGNN : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCLPGINGNN__CTOR_OFFSET))(this);
	}
};
