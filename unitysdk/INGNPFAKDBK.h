#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define INGNPFAKDBK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x141FDF60)
#define INGNPFAKDBK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x141FDED0)
#define INGNPFAKDBK__CCTOR_OFFSET UNITYSDK_OFFSET(0x141FDE50)
#define INGNPFAKDBK__CTOR_OFFSET UNITYSDK_OFFSET(0x141FDEC0)

inline static constexpr unsigned int INGNPFAKDBK_TypeDefinitionIndex = 64319;

class INGNPFAKDBK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB7; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGNPFAKDBK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNPFAKDBK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNPFAKDBK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNPFAKDBK_FIGPAOKNJLN_OFFSET))(this);
	}
};
