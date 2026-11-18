#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LCCLBGFMBFE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB63E0)

inline static constexpr unsigned int LCCLBGFMBFE_TypeDefinitionIndex = 46685;

class LCCLBGFMBFE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCLBGFMBFE__CTOR_OFFSET))(this);
	}
};
