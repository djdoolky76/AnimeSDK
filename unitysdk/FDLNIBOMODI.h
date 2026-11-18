#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace System { class EventArgs; }
namespace System { class String; }

#define FDLNIBOMODI_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x1617D020)
#define FDLNIBOMODI_BDEILPDILMC_OFFSET UNITYSDK_OFFSET(0x1617D030)
#define FDLNIBOMODI_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1617CC90)
#define FDLNIBOMODI_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1617D170)
#define FDLNIBOMODI_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1617CEA0)
#define FDLNIBOMODI__CTOR_OFFSET UNITYSDK_OFFSET(0x1617CC80)

inline static constexpr unsigned int FDLNIBOMODI_TypeDefinitionIndex = 71919;

class FDLNIBOMODI
{
public:
	::System::String* KLKCCPALMBM; // 0x30

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + FDLNIBOMODI__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FDLNIBOMODI_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLNIBOMODI_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLNIBOMODI_BAJIIBGJLGG_OFFSET))(this);
	}

	::System::Void BDEILPDILMC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FDLNIBOMODI_BDEILPDILMC_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FDLNIBOMODI_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
