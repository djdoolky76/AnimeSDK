#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class EBFDCHJJBNN;
class LKMGBNOPFFF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIIJOHPCCNG_DDNJBCEPELE_OFFSET UNITYSDK_OFFSET(0x12933B10)
#define OIIJOHPCCNG_DKODHKPFONC_OFFSET UNITYSDK_OFFSET(0x12934340)
#define OIIJOHPCCNG_EHANBFIECOJ_OFFSET UNITYSDK_OFFSET(0x12934250)
#define OIIJOHPCCNG_GCDFALCFANI_OFFSET UNITYSDK_OFFSET(0x12933CF0)
#define OIIJOHPCCNG_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x12933910)
#define OIIJOHPCCNG_NOAFHLBDCGN_OFFSET UNITYSDK_OFFSET(0x12934050)
#define OIIJOHPCCNG_ONSTART_OFFSET UNITYSDK_OFFSET(0x129338D0)
#define OIIJOHPCCNG__CTOR_OFFSET UNITYSDK_OFFSET(0x12933A70)

inline static constexpr unsigned int OIIJOHPCCNG_TypeDefinitionIndex = 82209;

class OIIJOHPCCNG : public ::DJBPFFLIECG
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GBBJBOBBBAE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIJOHPCCNG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIJOHPCCNG_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIJOHPCCNG_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void DDNJBCEPELE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIJOHPCCNG_DDNJBCEPELE_OFFSET))(this);
	}

	::System::Void GCDFALCFANI(::System::UInt32 LOIDIJKNAAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIIJOHPCCNG_GCDFALCFANI_OFFSET))(this, LOIDIJKNAAP);
	}

	::System::Void NOAFHLBDCGN(::LKMGBNOPFFF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::LKMGBNOPFFF*))((::PBYTE)hIl2Cpp + OIIJOHPCCNG_NOAFHLBDCGN_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void EHANBFIECOJ(::System::String* MGMDLMBEDJF, ::System::String* AKLHKLIGPCI, ::System::Int32 JKBLDFBGBPK, ::System::Int32 PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OIIJOHPCCNG_EHANBFIECOJ_OFFSET))(this, MGMDLMBEDJF, AKLHKLIGPCI, JKBLDFBGBPK, PMGFIHJAJHL);
	}

	::System::Void DKODHKPFONC(::EBFDCHJJBNN* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EBFDCHJJBNN*))((::PBYTE)hIl2Cpp + OIIJOHPCCNG_DKODHKPFONC_OFFSET))(this, GLAOEHCGCFO);
	}
};
