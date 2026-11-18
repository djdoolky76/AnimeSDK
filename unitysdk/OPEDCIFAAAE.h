#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define OPEDCIFAAAE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1948D8F0)
#define OPEDCIFAAAE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1948D860)
#define OPEDCIFAAAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1948D7E0)
#define OPEDCIFAAAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1948D850)

inline static constexpr unsigned int OPEDCIFAAAE_TypeDefinitionIndex = 63073;

class OPEDCIFAAAE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD7; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPEDCIFAAAE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEDCIFAAAE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEDCIFAAAE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEDCIFAAAE_FIGPAOKNJLN_OFFSET))(this);
	}
};
