#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

class PJOHHKCHGCH;

#define DBBGIOILHKB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1831F960)
#define DBBGIOILHKB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1831F830)
#define DBBGIOILHKB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1831F7A0)
#define DBBGIOILHKB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1831F8C0)
#define DBBGIOILHKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1831F690)
#define DBBGIOILHKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1831F720)
#define DBBGIOILHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1831F790)

inline static constexpr unsigned int DBBGIOILHKB_TypeDefinitionIndex = 82684;

class DBBGIOILHKB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x51; // 0x0
	::PJOHHKCHGCH* HMMMOCJAEOA; // 0x20
	::MoleMole::Config::DamageElementType EIILOAOBACD; // 0x28
	::System::UInt32 PLHBNHMIAEF; // 0x2C
	::System::UInt32 FJHKFEJAKMD; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBBGIOILHKB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGIOILHKB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGIOILHKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGIOILHKB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGIOILHKB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBGIOILHKB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB, ::MoleMole::Config::DamageElementType OBNIAHNMHPF, ::PJOHHKCHGCH* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::DamageElementType, ::PJOHHKCHGCH*))((::PBYTE)hIl2Cpp + DBBGIOILHKB_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB, OBNIAHNMHPF, HMMMOCJAEOA);
	}
};
