#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace F48A8942E486C846 { class B50D1255563ADE66; }

#define B4710E3847234EE4_FA88D144C422884A_OFFSET UNITYSDK_OFFSET(0x3C2E220)
#define B4710E3847234EE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4710E3847234EE4_TypeDefinitionIndex = 11490;

class B4710E3847234EE4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4710E3847234EE4__CTOR_OFFSET))(this);
	}

	::F48A8942E486C846::B50D1255563ADE66* FA88D144C422884A()
	{
		return ((::F48A8942E486C846::B50D1255563ADE66*(*)(::PVOID))((::PBYTE)hIl2Cpp + B4710E3847234EE4_FA88D144C422884A_OFFSET))(this);
	}
};
