#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IGBNLCNGFON.h"

class MLFADFNMJFO;
namespace System { class String; }

#define AJLICKFEGGD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17DDBFD0)
#define AJLICKFEGGD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17DDC090)
#define AJLICKFEGGD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17DDBF40)
#define AJLICKFEGGD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DDBEC0)
#define AJLICKFEGGD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDBF30)

inline static constexpr unsigned int AJLICKFEGGD_TypeDefinitionIndex = 64288;

class AJLICKFEGGD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x5B; // 0x0
	::System::String* DNPDCNPMMJN; // 0x20
	::IGBNLCNGFON GLJPAABDGPB; // 0x28
	::System::UInt32 MIJJBPIGJNJ; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJLICKFEGGD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLICKFEGGD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLICKFEGGD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 MIJJBPIGJNJ, ::System::String* DNPDCNPMMJN, ::MLFADFNMJFO* KBBHHGMKBCC, ::IGBNLCNGFON GLJPAABDGPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::MLFADFNMJFO*, ::IGBNLCNGFON))((::PBYTE)hIl2Cpp + AJLICKFEGGD_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, MIJJBPIGJNJ, DNPDCNPMMJN, KBBHHGMKBCC, GLJPAABDGPB);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLICKFEGGD_FIGPAOKNJLN_OFFSET))(this);
	}
};
