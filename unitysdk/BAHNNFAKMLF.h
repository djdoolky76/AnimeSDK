#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BAHNNFAKMLF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11BE61C0)
#define BAHNNFAKMLF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11BE6220)
#define BAHNNFAKMLF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11BE6130)
#define BAHNNFAKMLF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE60B0)
#define BAHNNFAKMLF__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE6120)

inline static constexpr unsigned int BAHNNFAKMLF_TypeDefinitionIndex = 57627;

class BAHNNFAKMLF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x158; // 0x0
	::System::Boolean NNJLDLIHINN; // 0x20
	::System::Boolean FBILHHBPEHD; // 0x21

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHNNFAKMLF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHNNFAKMLF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHNNFAKMLF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean FBILHHBPEHD, ::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BAHNNFAKMLF_CNHBDOMKKDE_OFFSET))(this, FBILHHBPEHD, NNJLDLIHINN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHNNFAKMLF_FIGPAOKNJLN_OFFSET))(this);
	}
};
