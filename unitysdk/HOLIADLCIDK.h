#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHOLJNNCJA_JEMNDMDOHDG.h"

#define HOLIADLCIDK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE3080)

inline static constexpr unsigned int HOLIADLCIDK_TypeDefinitionIndex = 86266;

class HOLIADLCIDK : public ::DMHOLJNNCJA_JEMNDMDOHDG
{
public:
	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOLIADLCIDK__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}
};
