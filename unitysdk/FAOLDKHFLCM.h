#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IGBNLCNGFON.h"

class MLFADFNMJFO;
namespace System { class String; }

#define FAOLDKHFLCM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x135611F0)
#define FAOLDKHFLCM_DMIHHIBKEBM_OFFSET UNITYSDK_OFFSET(0x135612D0)
#define FAOLDKHFLCM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x135613B0)
#define FAOLDKHFLCM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13561160)
#define FAOLDKHFLCM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13561310)
#define FAOLDKHFLCM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13561050)
#define FAOLDKHFLCM__CCTOR_OFFSET UNITYSDK_OFFSET(0x135610E0)
#define FAOLDKHFLCM__CTOR_OFFSET UNITYSDK_OFFSET(0x13561150)

inline static constexpr unsigned int FAOLDKHFLCM_TypeDefinitionIndex = 81019;

class FAOLDKHFLCM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x90; // 0x0
	::System::String* DNPDCNPMMJN; // 0x20
	::MLFADFNMJFO* KBBHHGMKBCC; // 0x28
	::IGBNLCNGFON GLJPAABDGPB; // 0x30
	::System::UInt32 MIJJBPIGJNJ; // 0x34
	::System::Boolean CBEMIBDPPNA; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 DFEKIMAKINB; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAOLDKHFLCM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLDKHFLCM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLDKHFLCM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLDKHFLCM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 MIJJBPIGJNJ, ::System::String* DNPDCNPMMJN, ::MLFADFNMJFO* KBBHHGMKBCC, ::IGBNLCNGFON GLJPAABDGPB, ::System::Boolean CBEMIBDPPNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::MLFADFNMJFO*, ::IGBNLCNGFON, ::System::Boolean))((::PBYTE)hIl2Cpp + FAOLDKHFLCM_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, MIJJBPIGJNJ, DNPDCNPMMJN, KBBHHGMKBCC, GLJPAABDGPB, CBEMIBDPPNA);
	}

	::System::UInt32 DMIHHIBKEBM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLDKHFLCM_DMIHHIBKEBM_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLDKHFLCM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLDKHFLCM_FIGPAOKNJLN_OFFSET))(this);
	}
};
