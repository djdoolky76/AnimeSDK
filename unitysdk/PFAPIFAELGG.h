#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/System/ValueType.h"

#define PFAPIFAELGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x6B8930)
#define PFAPIFAELGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6B8990)

inline static constexpr unsigned int PFAPIFAELGG_TypeDefinitionIndex = 43391;

struct alignas(4) PFAPIFAELGG
{
	::System::Boolean Equals(::MoleMole::Config::CameraDelayMoveMode HAAEBCOBKFF, ::MoleMole::Config::CameraDelayMoveMode BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode))((::PBYTE)hIl2Cpp + PFAPIFAELGG_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::CameraDelayMoveMode EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode))((::PBYTE)hIl2Cpp + PFAPIFAELGG_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
