#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGGAOIBHBCI.h"
#include "unitysdk/OPMKHNOMOMP.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DJMLMNBPAAD_AGFFGAGMFBM_OFFSET UNITYSDK_OFFSET(0x1ADC78C0)
#define DJMLMNBPAAD_DOCDLFCEPMK_OFFSET UNITYSDK_OFFSET(0x1ADC78F0)
#define DJMLMNBPAAD_KBNINHAKHAH_OFFSET UNITYSDK_OFFSET(0x1ADC78D0)
#define DJMLMNBPAAD_LACALHBICJH_OFFSET UNITYSDK_OFFSET(0x1ADC7900)
#define DJMLMNBPAAD_NNCKPNDJPEP_OFFSET UNITYSDK_OFFSET(0x1ADC78E0)
#define DJMLMNBPAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC7910)

inline static constexpr unsigned int DJMLMNBPAAD_TypeDefinitionIndex = 11260;

class DJMLMNBPAAD : public ::IGGAOIBHBCI
{
public:
	::System::Void _ctor(::OPMKHNOMOMP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OPMKHNOMOMP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DJMLMNBPAAD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* AGFFGAGMFBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLMNBPAAD_AGFFGAGMFBM_OFFSET))(this);
	}

	::System::String* KBNINHAKHAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLMNBPAAD_KBNINHAKHAH_OFFSET))(this);
	}

	::System::String* NNCKPNDJPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLMNBPAAD_NNCKPNDJPEP_OFFSET))(this);
	}

	::System::String* DOCDLFCEPMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLMNBPAAD_DOCDLFCEPMK_OFFSET))(this);
	}

	::System::String* LACALHBICJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLMNBPAAD_LACALHBICJH_OFFSET))(this);
	}
};
