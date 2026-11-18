#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class DMMJOIJLDAN;
class LJELFDJAHOD;

#define DMMJOIJLDAN_GFMKBJJAMIM_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x16978990)
#define DMMJOIJLDAN_GFMKBJJAMIM_PEJFEPJJDMI_OFFSET UNITYSDK_OFFSET(0x16978970)
#define DMMJOIJLDAN_GFMKBJJAMIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16978960)

inline static constexpr unsigned int DMMJOIJLDAN_GFMKBJJAMIM_TypeDefinitionIndex = 63544;

class DMMJOIJLDAN_GFMKBJJAMIM : public ::System::Object
{
public:
	::DMMJOIJLDAN* KLHPEBKNIFB; // 0x10
	::LJELFDJAHOD* NFCFCMIOOKJ; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN_GFMKBJJAMIM__CTOR_OFFSET))(this);
	}

	::System::Void PEJFEPJJDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN_GFMKBJJAMIM_PEJFEPJJDMI_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN_GFMKBJJAMIM_MJMKFFANPBL_OFFSET))(this);
	}
};
