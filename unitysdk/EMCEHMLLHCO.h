#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class AONHCAEPBMO;
class KDGEBPBGGFM;

#define EMCEHMLLHCO_AIEAEEKCAFJ_OFFSET UNITYSDK_OFFSET(0x142773C0)
#define EMCEHMLLHCO_FBHOINJCLBH_OFFSET UNITYSDK_OFFSET(0x14277570)
#define EMCEHMLLHCO_FPGDOIDOIJD_OFFSET UNITYSDK_OFFSET(0x142771E0)
#define EMCEHMLLHCO_HIJNCPBFBJO_OFFSET UNITYSDK_OFFSET(0x14277440)
#define EMCEHMLLHCO_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x142770E0)
#define EMCEHMLLHCO_ONSTART_OFFSET UNITYSDK_OFFSET(0x142770A0)
#define EMCEHMLLHCO__CTOR_OFFSET UNITYSDK_OFFSET(0x142771D0)

inline static constexpr unsigned int EMCEHMLLHCO_TypeDefinitionIndex = 83867;

class EMCEHMLLHCO : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCEHMLLHCO__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCEHMLLHCO_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCEHMLLHCO_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void FPGDOIDOIJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCEHMLLHCO_FPGDOIDOIJD_OFFSET))(this);
	}

	::System::Void AIEAEEKCAFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCEHMLLHCO_AIEAEEKCAFJ_OFFSET))(this);
	}

	::System::Void HIJNCPBFBJO(::KDGEBPBGGFM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::KDGEBPBGGFM*))((::PBYTE)hIl2Cpp + EMCEHMLLHCO_HIJNCPBFBJO_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void FBHOINJCLBH(::AONHCAEPBMO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AONHCAEPBMO*))((::PBYTE)hIl2Cpp + EMCEHMLLHCO_FBHOINJCLBH_OFFSET))(this, GLAOEHCGCFO);
	}
};
