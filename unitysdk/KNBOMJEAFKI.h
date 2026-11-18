#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"

#define KNBOMJEAFKI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1634CBD0)
#define KNBOMJEAFKI_FDILGGKOLKA_OFFSET UNITYSDK_OFFSET(0x1634CB10)
#define KNBOMJEAFKI_FDOMNOFOPEC_OFFSET UNITYSDK_OFFSET(0x1634CB00)
#define KNBOMJEAFKI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1634CB20)
#define KNBOMJEAFKI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1634CA70)
#define KNBOMJEAFKI_NDJDDCFJHLJ_OFFSET UNITYSDK_OFFSET(0x1634CBC0)
#define KNBOMJEAFKI_ODLMDMBKAKD_OFFSET UNITYSDK_OFFSET(0x1634CBB0)
#define KNBOMJEAFKI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1634C9F0)
#define KNBOMJEAFKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1634CA60)

inline static constexpr unsigned int KNBOMJEAFKI_TypeDefinitionIndex = 70687;

class KNBOMJEAFKI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x143; // 0x0
	::MoleMole::Config::LevelEndType _NALMABBPACP_k__BackingField; // 0x20
	::System::Boolean _IIACHNHGJKH_k__BackingField; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBOMJEAFKI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOMJEAFKI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOMJEAFKI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FDOMNOFOPEC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNBOMJEAFKI_FDOMNOFOPEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FDILGGKOLKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOMJEAFKI_FDILGGKOLKA_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOMJEAFKI_FIGPAOKNJLN_OFFSET))(this);
	}

	::MoleMole::Config::LevelEndType ODLMDMBKAKD()
	{
		return ((::MoleMole::Config::LevelEndType(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOMJEAFKI_ODLMDMBKAKD_OFFSET))(this);
	}

	::System::Void NDJDDCFJHLJ(::MoleMole::Config::LevelEndType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KNBOMJEAFKI_NDJDDCFJHLJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean DOFCLPCLHOJ, ::MoleMole::Config::LevelEndType AMPNBJCCOLA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KNBOMJEAFKI_CNHBDOMKKDE_OFFSET))(this, DOFCLPCLHOJ, AMPNBJCCOLA);
	}
};
