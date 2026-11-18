#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KNCOIPNNFEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17919D60)

inline static constexpr unsigned int KNCOIPNNFEL_TypeDefinitionIndex = 57060;

class KNCOIPNNFEL : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCOIPNNFEL__CTOR_OFFSET))(this);
	}
};
