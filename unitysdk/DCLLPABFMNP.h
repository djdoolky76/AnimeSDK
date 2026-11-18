#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DCLLPABFMNP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13E3D650)
#define DCLLPABFMNP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13E3D5C0)
#define DCLLPABFMNP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E3D540)
#define DCLLPABFMNP__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3D5B0)

inline static constexpr unsigned int DCLLPABFMNP_TypeDefinitionIndex = 63094;

class DCLLPABFMNP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xCA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCLLPABFMNP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLLPABFMNP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLLPABFMNP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLLPABFMNP_FIGPAOKNJLN_OFFSET))(this);
	}
};
