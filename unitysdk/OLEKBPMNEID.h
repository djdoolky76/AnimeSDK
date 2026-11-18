#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

#define OLEKBPMNEID_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xE15F690)
#define OLEKBPMNEID_ONSTART_OFFSET UNITYSDK_OFFSET(0xE15F6D0)
#define OLEKBPMNEID__CTOR_OFFSET UNITYSDK_OFFSET(0xE15F710)

inline static constexpr unsigned int OLEKBPMNEID_TypeDefinitionIndex = 54332;

class OLEKBPMNEID : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEKBPMNEID__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEKBPMNEID_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEKBPMNEID_ONSTART_OFFSET))(this);
	}
};
