#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HDMMGMEGLOB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B41770)

inline static constexpr unsigned int HDMMGMEGLOB_TypeDefinitionIndex = 54491;

class HDMMGMEGLOB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMMGMEGLOB__CTOR_OFFSET))(this);
	}
};
