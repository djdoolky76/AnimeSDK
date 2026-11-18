#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define EACJKDEODMB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15465B40)
#define EACJKDEODMB_EFJHAKCCLLE_OFFSET UNITYSDK_OFFSET(0x15465BD0)
#define EACJKDEODMB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15465C60)
#define EACJKDEODMB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15465AB0)
#define EACJKDEODMB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15465A30)
#define EACJKDEODMB__CTOR_OFFSET UNITYSDK_OFFSET(0x15465AA0)

inline static constexpr unsigned int EACJKDEODMB_TypeDefinitionIndex = 90127;

class EACJKDEODMB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD2; // 0x0
	::System::Single PMLOGFLOLNJ; // 0x20
	::System::Single HBOJLFKAOOH; // 0x24
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x28
	::System::UInt32 GMNAMKOGCCO; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACJKDEODMB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACJKDEODMB__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACJKDEODMB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::System::UInt32 JOPKCFMMFBL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + EACJKDEODMB_CNHBDOMKKDE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, JOPKCFMMFBL);
	}

	::System::Void EFJHAKCCLLE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::System::UInt32 JOPKCFMMFBL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + EACJKDEODMB_EFJHAKCCLLE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, JOPKCFMMFBL);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACJKDEODMB_FIGPAOKNJLN_OFFSET))(this);
	}
};
