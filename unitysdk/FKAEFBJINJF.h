#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FLFDEOIAKAP.h"

#define FKAEFBJINJF_GFKADDAHPPE_OFFSET UNITYSDK_OFFSET(0x13223A80)
#define FKAEFBJINJF_KCHDLDMDPCJ_OFFSET UNITYSDK_OFFSET(0x132238D0)
#define FKAEFBJINJF_MFFAHNPGAGJ_OFFSET UNITYSDK_OFFSET(0x132239D0)
#define FKAEFBJINJF_NHEINDEIKEB_OFFSET UNITYSDK_OFFSET(0x13223800)

inline static constexpr unsigned int FKAEFBJINJF_TypeDefinitionIndex = 40929;

class FKAEFBJINJF : public ::System::Object
{
public:
	static ::System::Void NHEINDEIKEB(::System::Int32 LCECILKAMAJ)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FKAEFBJINJF_NHEINDEIKEB_OFFSET))(LCECILKAMAJ);
	}

	static ::FLFDEOIAKAP KCHDLDMDPCJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FLFDEOIAKAP(*)(::System::Int32))((::PBYTE)hIl2Cpp + FKAEFBJINJF_KCHDLDMDPCJ_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void MFFAHNPGAGJ(::FLFDEOIAKAP NEDADHIIEHP)
	{
		return ((::System::Void(*)(::FLFDEOIAKAP))((::PBYTE)hIl2Cpp + FKAEFBJINJF_MFFAHNPGAGJ_OFFSET))(NEDADHIIEHP);
	}

	static ::System::Void GFKADDAHPPE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKAEFBJINJF_GFKADDAHPPE_OFFSET))();
	}
};
