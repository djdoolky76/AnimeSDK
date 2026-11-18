#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define JMIMIJMKDME__CTOR_OFFSET UNITYSDK_OFFSET(0x17630480)

inline static constexpr unsigned int JMIMIJMKDME_TypeDefinitionIndex = 72278;

class JMIMIJMKDME : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMIJMKDME__CTOR_OFFSET))(this);
	}
};
