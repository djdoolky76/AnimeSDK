#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class JPKMBBAHKDH;
class KPNIFGIKELE;
class MLFADFNMJFO;
namespace System { class String; }

#define EAKBKPNPOKN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x106289E0)
#define EAKBKPNPOKN_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x10628760)
#define EAKBKPNPOKN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x106288B0)
#define EAKBKPNPOKN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10628820)
#define EAKBKPNPOKN_IMPBLIICALG_OFFSET UNITYSDK_OFFSET(0x10628AD0)
#define EAKBKPNPOKN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10628940)
#define EAKBKPNPOKN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10628670)
#define EAKBKPNPOKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x106287A0)
#define EAKBKPNPOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x10628810)

inline static constexpr unsigned int EAKBKPNPOKN_TypeDefinitionIndex = 82040;

class EAKBKPNPOKN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xBD; // 0x0
	::System::String* PKGDBDFHOMO; // 0x20
	::KPNIFGIKELE* IKHJEGECGJA; // 0x28
	::System::String* AADJPMHPNAH; // 0x30
	::JPKMBBAHKDH* BNEEOEOEKGL; // 0x38
	::MLFADFNMJFO* LBPBFHIPIBF; // 0x40
	::System::UInt32 HBCMGOLIOPB; // 0x48
	::System::Byte _padding0[0x4];
	::System::UInt64 ACHBBPJIBIE; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAKBKPNPOKN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBKPNPOKN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBKPNPOKN_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBKPNPOKN_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBKPNPOKN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBKPNPOKN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBKPNPOKN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::KPNIFGIKELE* CMAOBDOAKEI, ::JPKMBBAHKDH* BCCOFAHJEII, ::System::UInt32 HBCMGOLIOPB)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*, ::JPKMBBAHKDH*, ::System::UInt32))((::PBYTE)hIl2Cpp + EAKBKPNPOKN_CNHBDOMKKDE_OFFSET))(this, CMAOBDOAKEI, BCCOFAHJEII, HBCMGOLIOPB);
	}

	::System::Int32 IMPBLIICALG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBKPNPOKN_IMPBLIICALG_OFFSET))(this);
	}
};
