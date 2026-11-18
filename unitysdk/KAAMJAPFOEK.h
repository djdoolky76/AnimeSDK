#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KAAMJAPFOEK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B77320)

inline static constexpr unsigned int KAAMJAPFOEK_TypeDefinitionIndex = 52757;

class KAAMJAPFOEK : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAMJAPFOEK__CTOR_OFFSET))(this);
	}
};
