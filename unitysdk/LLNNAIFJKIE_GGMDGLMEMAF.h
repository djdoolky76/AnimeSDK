#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHBGPFKOJNN.h"
#include "unitysdk/LLNNAIFJKIE_DKCLBCDIMPG.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

#define LLNNAIFJKIE_GGMDGLMEMAF_DPBEBFOLDKJ_OFFSET UNITYSDK_OFFSET(0x151A6C40)
#define LLNNAIFJKIE_GGMDGLMEMAF_ELGGFHGEKJH_OFFSET UNITYSDK_OFFSET(0x151A6C00)
#define LLNNAIFJKIE_GGMDGLMEMAF__CTOR_OFFSET UNITYSDK_OFFSET(0x151A6BA0)

inline static constexpr unsigned int LLNNAIFJKIE_GGMDGLMEMAF_TypeDefinitionIndex = 62082;

class LLNNAIFJKIE_GGMDGLMEMAF : public ::LLNNAIFJKIE_DKCLBCDIMPG
{
public:
	::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct KGEBJPGLDGP; // 0x30
	::EHBGPFKOJNN MKGKAFHPLJB; // 0x80

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct IPMMCGDMODG, ::System::Single CIIPCCLOHLH, ::System::Single AJPAFKAPNNM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_GGMDGLMEMAF__CTOR_OFFSET))(this, IPMMCGDMODG, CIIPCCLOHLH, AJPAFKAPNNM);
	}

	::System::Boolean ELGGFHGEKJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_GGMDGLMEMAF_ELGGFHGEKJH_OFFSET))(this);
	}

	::System::Boolean DPBEBFOLDKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_GGMDGLMEMAF_DPBEBFOLDKJ_OFFSET))(this);
	}
};
