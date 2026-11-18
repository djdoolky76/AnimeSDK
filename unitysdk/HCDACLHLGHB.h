#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class PIPINFDCBHJ;

#define HCDACLHLGHB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17A35E40)
#define HCDACLHLGHB_GGPPMOKDIFG_OFFSET UNITYSDK_OFFSET(0x17A35ED0)
#define HCDACLHLGHB_LJGAJLJKPAC_OFFSET UNITYSDK_OFFSET(0x17A35E30)
#define HCDACLHLGHB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A35E20)

inline static constexpr unsigned int HCDACLHLGHB_TypeDefinitionIndex = 86055;

class HCDACLHLGHB : public ::ENGKPGFGGLM
{
public:
	::PIPINFDCBHJ* _FBEMOEBNDLC_k__BackingField; // 0x20
	::System::Int32 HLBKHEFJAPH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDACLHLGHB__CTOR_OFFSET))(this);
	}

	::System::Void LJGAJLJKPAC(::PIPINFDCBHJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PIPINFDCBHJ*))((::PBYTE)hIl2Cpp + HCDACLHLGHB_LJGAJLJKPAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 HLBKHEFJAPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + HCDACLHLGHB_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, HLBKHEFJAPH);
	}

	::PIPINFDCBHJ* GGPPMOKDIFG()
	{
		return ((::PIPINFDCBHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDACLHLGHB_GGPPMOKDIFG_OFFSET))(this);
	}
};
