#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHFIMEPJHN.h"
#include "unitysdk/EMKPHEHAFJI_NFKNMANAECK.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KNPMCIAOJPL.h"

#define EMKPHEHAFJI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14278070)
#define EMKPHEHAFJI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14278110)
#define EMKPHEHAFJI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14277F40)
#define EMKPHEHAFJI_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14277FD0)
#define EMKPHEHAFJI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14277E30)
#define EMKPHEHAFJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x14277EC0)
#define EMKPHEHAFJI__CTOR_OFFSET UNITYSDK_OFFSET(0x14277F30)

inline static constexpr unsigned int EMKPHEHAFJI_TypeDefinitionIndex = 73900;

class EMKPHEHAFJI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xCF; // 0x0
	::System::UInt32 GGKMIBNBONM; // 0x20
	::System::UInt32 OCNILHNBNDD; // 0x24
	::DOHFIMEPJHN IBKMOKKPGKK; // 0x28
	::System::Boolean LDNOCNGMPID; // 0x2C
	::System::Boolean MBEMOHDDEMA; // 0x2D
	::System::Boolean IECLFDGAJAI; // 0x2E
	::System::Byte _padding0[0x1];
	::KNPMCIAOJPL KIAKFOGFCAK; // 0x30
	::EMKPHEHAFJI_NFKNMANAECK EELLIMPJPDP; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKPHEHAFJI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKPHEHAFJI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKPHEHAFJI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKPHEHAFJI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKPHEHAFJI_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::EMKPHEHAFJI_NFKNMANAECK OBNIAHNMHPF, ::DOHFIMEPJHN BABKLDMHKEB, ::System::Boolean MBEMOHDDEMA, ::System::Boolean LDNOCNGMPID, ::KNPMCIAOJPL KIAKFOGFCAK, ::System::Boolean IECLFDGAJAI)
	{
		return ((::System::Void(*)(::PVOID, ::EMKPHEHAFJI_NFKNMANAECK, ::DOHFIMEPJHN, ::System::Boolean, ::System::Boolean, ::KNPMCIAOJPL, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKPHEHAFJI_CNHBDOMKKDE_OFFSET))(this, OBNIAHNMHPF, BABKLDMHKEB, MBEMOHDDEMA, LDNOCNGMPID, KIAKFOGFCAK, IECLFDGAJAI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKPHEHAFJI_FIGPAOKNJLN_OFFSET))(this);
	}
};
