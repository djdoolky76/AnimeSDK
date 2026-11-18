#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define INDJKGLHMAO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x141FD960)
#define INDJKGLHMAO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x141FD8D0)
#define INDJKGLHMAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x141FD850)
#define INDJKGLHMAO__CTOR_OFFSET UNITYSDK_OFFSET(0x141FD8C0)

inline static constexpr unsigned int INDJKGLHMAO_TypeDefinitionIndex = 43295;

class INDJKGLHMAO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xAA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INDJKGLHMAO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDJKGLHMAO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDJKGLHMAO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDJKGLHMAO_FIGPAOKNJLN_OFFSET))(this);
	}
};
