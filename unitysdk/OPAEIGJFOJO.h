#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPDNMFONAEH.h"
#include "unitysdk/ALODNBLGKKM.h"

namespace System { class String; }

#define OPAEIGJFOJO_EFMCNJGCMNM_OFFSET UNITYSDK_OFFSET(0x1AFC6270)
#define OPAEIGJFOJO_IGAGINDJKCH_OFFSET UNITYSDK_OFFSET(0x1AFC67A0)
#define OPAEIGJFOJO_KIIONEDFMPN_OFFSET UNITYSDK_OFFSET(0x1AFC65F0)
#define OPAEIGJFOJO_KMGIOBEPIDI_OFFSET UNITYSDK_OFFSET(0x1AFC6660)
#define OPAEIGJFOJO_OJEFBNNBELP_OFFSET UNITYSDK_OFFSET(0x1AFC66F0)
#define OPAEIGJFOJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC6250)

inline static constexpr unsigned int OPAEIGJFOJO_TypeDefinitionIndex = 58160;

class OPAEIGJFOJO : public ::PPDNMFONAEH
{
public:
	::System::Void _ctor(::ALODNBLGKKM KPGAFJBIBCC)
	{
		return ((::System::Void(*)(::PVOID, ::ALODNBLGKKM))((::PBYTE)hIl2Cpp + OPAEIGJFOJO__CTOR_OFFSET))(this, KPGAFJBIBCC);
	}

	::System::Void EFMCNJGCMNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEIGJFOJO_EFMCNJGCMNM_OFFSET))(this);
	}

	::System::String* KIIONEDFMPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEIGJFOJO_KIIONEDFMPN_OFFSET))(this);
	}

	::System::Void KMGIOBEPIDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEIGJFOJO_KMGIOBEPIDI_OFFSET))(this);
	}

	::System::String* OJEFBNNBELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEIGJFOJO_OJEFBNNBELP_OFFSET))(this);
	}

	::System::Boolean IGAGINDJKCH(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPAEIGJFOJO_IGAGINDJKCH_OFFSET))(this, NACGJJKHEJE);
	}
};
