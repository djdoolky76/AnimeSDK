#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define HKKEHACKJDK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19E2F290)
#define HKKEHACKJDK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19E2F200)
#define HKKEHACKJDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E2F180)
#define HKKEHACKJDK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2F1F0)

inline static constexpr unsigned int HKKEHACKJDK_TypeDefinitionIndex = 55022;

class HKKEHACKJDK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x2A; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKKEHACKJDK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHACKJDK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHACKJDK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHACKJDK_FIGPAOKNJLN_OFFSET))(this);
	}
};
