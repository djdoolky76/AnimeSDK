#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/System/Object.h"

class PFBHGJKBHCL;

#define INHNNMJLEBI_CKNFNJPKGIO_KPMKOCOABDB_OFFSET UNITYSDK_OFFSET(0x1F68E780)
#define INHNNMJLEBI_CKNFNJPKGIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F68E770)

inline static constexpr unsigned int INHNNMJLEBI_CKNFNJPKGIO_TypeDefinitionIndex = 94971;

class INHNNMJLEBI_CKNFNJPKGIO : public ::System::Object
{
public:
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel IAKPGBCAAKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHNNMJLEBI_CKNFNJPKGIO__CTOR_OFFSET))(this);
	}

	::System::Boolean KPMKOCOABDB(::PFBHGJKBHCL* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::PFBHGJKBHCL*))((::PBYTE)hIl2Cpp + INHNNMJLEBI_CKNFNJPKGIO_KPMKOCOABDB_OFFSET))(this, HAAEBCOBKFF);
	}
};
