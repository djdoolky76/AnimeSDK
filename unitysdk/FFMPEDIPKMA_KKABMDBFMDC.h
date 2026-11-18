#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class FPKIFHKCBEK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFMPEDIPKMA_KKABMDBFMDC_BODGALEPAMF_OFFSET UNITYSDK_OFFSET(0x17140370)
#define FFMPEDIPKMA_KKABMDBFMDC_KLFPPLMOMIM_1_OFFSET UNITYSDK_OFFSET(0x171407E0)
#define FFMPEDIPKMA_KKABMDBFMDC_KLFPPLMOMIM_OFFSET UNITYSDK_OFFSET(0x17140240)
#define FFMPEDIPKMA_KKABMDBFMDC_PFBFOEIDHPE_OFFSET UNITYSDK_OFFSET(0x17140580)
#define FFMPEDIPKMA_KKABMDBFMDC__CTOR_OFFSET UNITYSDK_OFFSET(0x17140230)

inline static constexpr unsigned int FFMPEDIPKMA_KKABMDBFMDC_TypeDefinitionIndex = 90287;

class FFMPEDIPKMA_KKABMDBFMDC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* BCDNCEBHNDJ; // 0x10
	::AIJGGGANLLD BCILAIPOMFI; // 0x18
	::System::Int32 GKCJCKMNHLP; // 0x38
	::System::Int32 KOMCHMAIGIL; // 0x3C
	::System::Boolean MCJCCJOEKGN; // 0x40
	::System::Boolean LHONNDHGJFF; // 0x41
	::System::Byte _padding0[0x2];
	::System::Int32 KOMCNLHINMB; // 0x44
	::System::Int32 GIEIBEMEPMH; // 0x48
	::System::Int32 JLPLNIHNBMJ; // 0x4C
	::System::Single MNJAHBIAKHL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_KKABMDBFMDC__CTOR_OFFSET))(this);
	}

	::System::Void KLFPPLMOMIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_KKABMDBFMDC_KLFPPLMOMIM_OFFSET))(this);
	}

	::System::Void BODGALEPAMF(::DJDDGKFCNAJ_IGOPHLMOGAO FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_KKABMDBFMDC_BODGALEPAMF_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void PFBFOEIDHPE(::FPKIFHKCBEK* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::FPKIFHKCBEK*))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_KKABMDBFMDC_PFBFOEIDHPE_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void KLFPPLMOMIM_1(::FPKIFHKCBEK* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::FPKIFHKCBEK*))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_KKABMDBFMDC_KLFPPLMOMIM_1_OFFSET))(this, EIFONLCJOPG);
	}
};
