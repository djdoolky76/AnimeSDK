#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class OLHCPDPPIIH;

#define JHHKAENMEAO_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1A4779D0)
#define JHHKAENMEAO_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1A477AD0)
#define JHHKAENMEAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477A60)

inline static constexpr unsigned int JHHKAENMEAO_TypeDefinitionIndex = 59800;

class JHHKAENMEAO : public ::PKMJPMFCNBK
{
public:
	::OLHCPDPPIIH* FJNOAAONPLG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHKAENMEAO__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHKAENMEAO_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHKAENMEAO_KHJELIBOECB_OFFSET))(this);
	}
};
