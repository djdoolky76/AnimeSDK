#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLNNAIFJKIE_GGMDGLMEMAF.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LLNNAIFJKIE_ILCKJLONLDC_BGFLKOCDOCF_OFFSET UNITYSDK_OFFSET(0x1402FFA0)
#define LLNNAIFJKIE_ILCKJLONLDC_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1402FE80)
#define LLNNAIFJKIE_ILCKJLONLDC_ELGGFHGEKJH_OFFSET UNITYSDK_OFFSET(0x1402FCA0)
#define LLNNAIFJKIE_ILCKJLONLDC_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x14030030)
#define LLNNAIFJKIE_ILCKJLONLDC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1402FDF0)
#define LLNNAIFJKIE_ILCKJLONLDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1402FA80)

inline static constexpr unsigned int LLNNAIFJKIE_ILCKJLONLDC_TypeDefinitionIndex = 62078;

class LLNNAIFJKIE_ILCKJLONLDC : public ::LLNNAIFJKIE_GGMDGLMEMAF
{
public:
	::System::Action* PHPHLMIBCGM; // 0x88
	::System::Action* DIDEBCLMIAO; // 0x90
	::System::Action_1<::System::Single>* PGKOJCPMLME; // 0x98
	::System::Action* GHLPBNLFJOK; // 0xA0
	::System::Boolean JOBDMANMAFO; // 0xA8
	::System::Byte _padding0[0x3];
	::System::Single DDILGAAAFPO; // 0xAC
	::System::Single PNJEIBNACJD; // 0xB0
	::System::Single HGMOJFNBGLM; // 0xB4

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct IPMMCGDMODG, ::System::Single AHEGIJAONNE, ::System::Single BNGKJKBHIGA, ::System::Single EBCODHFGNFG, ::System::Single EODDDEDPMHA, ::System::Action* FHHMOBOLLMC, ::System::Action* FLIDIDAEGHN, ::System::Action_1<::System::Single>* FBOHNHDBLEO, ::System::Action* GOHLKLOADNI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Action*, ::System::Action_1<::System::Single>*, ::System::Action*))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ILCKJLONLDC__CTOR_OFFSET))(this, IPMMCGDMODG, AHEGIJAONNE, BNGKJKBHIGA, EBCODHFGNFG, EODDDEDPMHA, FHHMOBOLLMC, FLIDIDAEGHN, FBOHNHDBLEO, GOHLKLOADNI);
	}

	::System::Boolean ELGGFHGEKJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ILCKJLONLDC_ELGGFHGEKJH_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ILCKJLONLDC_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ILCKJLONLDC_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Boolean BGFLKOCDOCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ILCKJLONLDC_BGFLKOCDOCF_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ILCKJLONLDC_GEFNCCFJNIM_OFFSET))(this);
	}
};
