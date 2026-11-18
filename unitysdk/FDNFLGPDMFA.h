#pragma once
#include "unitysdk/unitysdk.h"

#define FDNFLGPDMFA_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1E71E4D0)
#define FDNFLGPDMFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71E520)

inline static constexpr unsigned int FDNFLGPDMFA_TypeDefinitionIndex = 94299;

class FDNFLGPDMFA
{
public:
	::System::Int32 DLCPIJDBOKP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNFLGPDMFA__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNFLGPDMFA_AIMAIGLGDBE_OFFSET))(this);
	}
};
