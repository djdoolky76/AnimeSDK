#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JANJHGCDEJI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15C32E60)
#define JANJHGCDEJI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15C32DD0)
#define JANJHGCDEJI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15C32D40)
#define JANJHGCDEJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C32CC0)
#define JANJHGCDEJI__CTOR_OFFSET UNITYSDK_OFFSET(0x15C32D30)

inline static constexpr unsigned int JANJHGCDEJI_TypeDefinitionIndex = 60429;

class JANJHGCDEJI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x12F; // 0x0
	::System::UInt32 KBKAGADINHJ; // 0x20
	::System::UInt32 BBGGFOPDICP; // 0x24
	::System::UInt32 KCNOHOOPNAH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANJHGCDEJI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANJHGCDEJI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANJHGCDEJI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANJHGCDEJI_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 KCNOHOOPNAH, ::System::UInt32 KBKAGADINHJ, ::System::UInt32 BBGGFOPDICP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JANJHGCDEJI_CNHBDOMKKDE_OFFSET))(this, KCNOHOOPNAH, KBKAGADINHJ, BBGGFOPDICP);
	}
};
