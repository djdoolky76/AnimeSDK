#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class FEKNDOFCGGA;
class FKGALBKGLMD;
class KNFGPEMEEJF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFCJALCINJI_DNLGKNGHACE_OFFSET UNITYSDK_OFFSET(0xE192310)
#define NFCJALCINJI_FIDEICAPGND_OFFSET UNITYSDK_OFFSET(0xE191ED0)
#define NFCJALCINJI_GBMHJJEAPII_OFFSET UNITYSDK_OFFSET(0xE1925C0)
#define NFCJALCINJI_ILPIMHMFGFG_OFFSET UNITYSDK_OFFSET(0xE1921C0)
#define NFCJALCINJI_KBAAECCKFLK_OFFSET UNITYSDK_OFFSET(0xE191FF0)
#define NFCJALCINJI_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xE191D10)
#define NFCJALCINJI_ONSTART_OFFSET UNITYSDK_OFFSET(0xE191DB0)
#define NFCJALCINJI_PCGGPEBNFDH_OFFSET UNITYSDK_OFFSET(0xE192750)
#define NFCJALCINJI__CTOR_OFFSET UNITYSDK_OFFSET(0xE191EC0)

inline static constexpr unsigned int NFCJALCINJI_TypeDefinitionIndex = 47541;

class NFCJALCINJI : public ::DJBPFFLIECG
{
public:
	::FKGALBKGLMD* OPOLMJLMHCD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI_ONSTART_OFFSET))(this);
	}

	::System::Void FIDEICAPGND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI_FIDEICAPGND_OFFSET))(this);
	}

	::System::Void KBAAECCKFLK(::System::UInt32 GGDKLHKOMNK, ::System::Action* EDNJGMKPFHG, ::System::Action* IFKOKLCPMNF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NFCJALCINJI_KBAAECCKFLK_OFFSET))(this, GGDKLHKOMNK, EDNJGMKPFHG, IFKOKLCPMNF);
	}

	::System::Void ILPIMHMFGFG(::KNFGPEMEEJF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::KNFGPEMEEJF*))((::PBYTE)hIl2Cpp + NFCJALCINJI_ILPIMHMFGFG_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DNLGKNGHACE(::System::Collections::Generic::List_1<::System::UInt32>* JGGELGHFMLI, ::System::Action* EDNJGMKPFHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + NFCJALCINJI_DNLGKNGHACE_OFFSET))(this, JGGELGHFMLI, EDNJGMKPFHG);
	}

	::System::Void GBMHJJEAPII(::System::Action_1<::FEKNDOFCGGA*>* EDNJGMKPFHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::FEKNDOFCGGA*>*))((::PBYTE)hIl2Cpp + NFCJALCINJI_GBMHJJEAPII_OFFSET))(this, EDNJGMKPFHG);
	}

	::System::Void PCGGPEBNFDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI_PCGGPEBNFDH_OFFSET))(this);
	}
};
