#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EEKLLMBKLJB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1353D0B0)
#define EEKLLMBKLJB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1353D020)
#define EEKLLMBKLJB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1353CF90)
#define EEKLLMBKLJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1353CF10)
#define EEKLLMBKLJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1353CF80)

inline static constexpr unsigned int EEKLLMBKLJB_TypeDefinitionIndex = 51688;

class EEKLLMBKLJB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x73; // 0x0
	::System::UInt64 ACHBBPJIBIE; // 0x20
	::System::Int32 BCCENALHBHL; // 0x28
	::System::Int32 CJIAKHEHAKE; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEKLLMBKLJB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKLLMBKLJB__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKLLMBKLJB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKLLMBKLJB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt64 ACHBBPJIBIE, ::System::Int32 BCCENALHBHL, ::System::Int32 CJIAKHEHAKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EEKLLMBKLJB_CNHBDOMKKDE_OFFSET))(this, ACHBBPJIBIE, BCCENALHBHL, CJIAKHEHAKE);
	}
};
