#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLNNLLPMOGO_HMMCENMNKNF_IHHAAKGJBHJ_OFFSET UNITYSDK_OFFSET(0x19F21D50)
#define BLNNLLPMOGO_HMMCENMNKNF_IMEOMINLMPH_OFFSET UNITYSDK_OFFSET(0x19F21D80)
#define BLNNLLPMOGO_HMMCENMNKNF__CTOR_OFFSET UNITYSDK_OFFSET(0x19F21D40)

inline static constexpr unsigned int BLNNLLPMOGO_HMMCENMNKNF_TypeDefinitionIndex = 12437;

class BLNNLLPMOGO_HMMCENMNKNF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNNLLPMOGO_HMMCENMNKNF__CTOR_OFFSET))(this);
	}

	static ::System::Int32 IHHAAKGJBHJ()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BLNNLLPMOGO_HMMCENMNKNF_IHHAAKGJBHJ_OFFSET))();
	}

	static ::System::Int32 IMEOMINLMPH()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BLNNLLPMOGO_HMMCENMNKNF_IMEOMINLMPH_OFFSET))();
	}
};
