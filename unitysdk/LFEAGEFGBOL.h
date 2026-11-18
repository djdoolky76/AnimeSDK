#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/LFEAGEFGBOL_OJANKGBGHED.h"

#define LFEAGEFGBOL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A605730)
#define LFEAGEFGBOL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A605780)
#define LFEAGEFGBOL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A6056A0)
#define LFEAGEFGBOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A605620)
#define LFEAGEFGBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A605690)

inline static constexpr unsigned int LFEAGEFGBOL_TypeDefinitionIndex = 89239;

class LFEAGEFGBOL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xEA; // 0x0
	::LFEAGEFGBOL_OJANKGBGHED AKPBIGKFDPC; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFEAGEFGBOL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEAGEFGBOL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEAGEFGBOL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::LFEAGEFGBOL_OJANKGBGHED HBOMCFOOLPD)
	{
		return ((::System::Void(*)(::PVOID, ::LFEAGEFGBOL_OJANKGBGHED))((::PBYTE)hIl2Cpp + LFEAGEFGBOL_CNHBDOMKKDE_OFFSET))(this, HBOMCFOOLPD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEAGEFGBOL_FIGPAOKNJLN_OFFSET))(this);
	}
};
