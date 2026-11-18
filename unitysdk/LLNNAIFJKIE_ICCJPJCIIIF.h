#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLNNAIFJKIE_BNGLFGOCENL.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLNNAIFJKIE_ICCJPJCIIIF_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1850FB70)
#define LLNNAIFJKIE_ICCJPJCIIIF_EOJEJBPFODF_OFFSET UNITYSDK_OFFSET(0x1850FC40)
#define LLNNAIFJKIE_ICCJPJCIIIF_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1850FC90)
#define LLNNAIFJKIE_ICCJPJCIIIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1850F9E0)

inline static constexpr unsigned int LLNNAIFJKIE_ICCJPJCIIIF_TypeDefinitionIndex = 62079;

class LLNNAIFJKIE_ICCJPJCIIIF : public ::LLNNAIFJKIE_BNGLFGOCENL
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* PEEADLONPFI; // 0x80
	::System::Action_1<::System::Collections::Generic::List_1<::System::Boolean>*>* AHCHLLMGFLI; // 0x88

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct IPMMCGDMODG, ::System::Single IECIIKCEAIE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ICCJPJCIIIF__CTOR_OFFSET))(this, IPMMCGDMODG, IECIIKCEAIE);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ICCJPJCIIIF_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void EOJEJBPFODF(::System::Action_1<::System::Collections::Generic::List_1<::System::Boolean>*>* MCENAEGIPBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ICCJPJCIIIF_EOJEJBPFODF_OFFSET))(this, MCENAEGIPBN);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_ICCJPJCIIIF_NIGDIMFIAEJ_OFFSET))(this);
	}
};
