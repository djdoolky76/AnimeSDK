#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PCEJKLONCBI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x184602D0)
#define PCEJKLONCBI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18460240)
#define PCEJKLONCBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x184601C0)
#define PCEJKLONCBI__CTOR_OFFSET UNITYSDK_OFFSET(0x18460230)

inline static constexpr unsigned int PCEJKLONCBI_TypeDefinitionIndex = 48626;

class PCEJKLONCBI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x2D; // 0x0
	::System::UInt32 LJIBLLDJLJG; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCEJKLONCBI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJKLONCBI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJKLONCBI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJKLONCBI_FIGPAOKNJLN_OFFSET))(this);
	}
};
