#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CABLBKNPKIO;
class EBJCHPJGPGJ;

#define HKOEPAMBJCA_KCBPJGGECNM_OFFSET UNITYSDK_OFFSET(0x17B0D640)
#define HKOEPAMBJCA_LFOBIFKCLPE_OFFSET UNITYSDK_OFFSET(0x17B0D750)

inline static constexpr unsigned int HKOEPAMBJCA_TypeDefinitionIndex = 75665;

class HKOEPAMBJCA : public ::System::Object
{
public:
	static ::EBJCHPJGPGJ** StaticGet_BDJPHEDACNN()
	{
		return (::EBJCHPJGPGJ**)Il2CppClass::FromTypeDefinitionIndex(HKOEPAMBJCA_TypeDefinitionIndex)->GetStaticField(0x51460);
	}

	static ::CABLBKNPKIO* KCBPJGGECNM()
	{
		return ((::CABLBKNPKIO*(*)())((::PBYTE)hIl2Cpp + HKOEPAMBJCA_KCBPJGGECNM_OFFSET))();
	}

	static ::EBJCHPJGPGJ* LFOBIFKCLPE()
	{
		return ((::EBJCHPJGPGJ*(*)())((::PBYTE)hIl2Cpp + HKOEPAMBJCA_LFOBIFKCLPE_OFFSET))();
	}
};
