#pragma once
#include "unitysdk/unitysdk.h"

#define JGMAPLLHMED_MPGMKIJCIEJ_OFFSET UNITYSDK_OFFSET(0x18738470)
#define JGMAPLLHMED__CTOR_OFFSET UNITYSDK_OFFSET(0x18738570)

inline static constexpr unsigned int JGMAPLLHMED_TypeDefinitionIndex = 50730;

class JGMAPLLHMED
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMAPLLHMED__CTOR_OFFSET))(this);
	}

	::System::Void MPGMKIJCIEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMAPLLHMED_MPGMKIJCIEJ_OFFSET))(this);
	}
};
