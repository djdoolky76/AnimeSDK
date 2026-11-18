#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"

#define AAJNGGPHOOD_PEGINJNMFKI_OFFSET UNITYSDK_OFFSET(0x17DB93C0)
#define AAJNGGPHOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB9340)

inline static constexpr unsigned int AAJNGGPHOOD_TypeDefinitionIndex = 83388;

class AAJNGGPHOOD : public ::LFDDLEHKGIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGGPHOOD__CTOR_OFFSET))(this);
	}

	::System::Void PEGINJNMFKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGGPHOOD_PEGINJNMFKI_OFFSET))(this);
	}
};
