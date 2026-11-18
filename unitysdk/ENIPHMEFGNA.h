#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COACNJPOBKK.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ENIPHMEFGNA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14AAFCB0)
#define ENIPHMEFGNA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14AAFD10)
#define ENIPHMEFGNA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14AAFC20)
#define ENIPHMEFGNA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14AAFDA0)
#define ENIPHMEFGNA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14AAFB10)
#define ENIPHMEFGNA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AAFBA0)
#define ENIPHMEFGNA__CTOR_OFFSET UNITYSDK_OFFSET(0x14AAFC10)

inline static constexpr unsigned int ENIPHMEFGNA_TypeDefinitionIndex = 55268;

class ENIPHMEFGNA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x107; // 0x0
	::System::Int32 NLBPOACGCDA; // 0x20
	::COACNJPOBKK KGCCHLKJHJF; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENIPHMEFGNA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPHMEFGNA__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPHMEFGNA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPHMEFGNA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 CLHLJKKAAPO, ::COACNJPOBKK OOJBEKEDLGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::COACNJPOBKK))((::PBYTE)hIl2Cpp + ENIPHMEFGNA_CNHBDOMKKDE_OFFSET))(this, CLHLJKKAAPO, OOJBEKEDLGA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPHMEFGNA_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPHMEFGNA_OHFHFOHMBJH_OFFSET))(this);
	}
};
