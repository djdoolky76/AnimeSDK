#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLNNAIFJKIE_BNGLFGOCENL.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define LLNNAIFJKIE_GNGIADANAHH_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16378CE0)
#define LLNNAIFJKIE_GNGIADANAHH_MABNAONDGLD_OFFSET UNITYSDK_OFFSET(0x16378DB0)
#define LLNNAIFJKIE_GNGIADANAHH_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x16378E00)
#define LLNNAIFJKIE_GNGIADANAHH__CTOR_OFFSET UNITYSDK_OFFSET(0x16378B40)

inline static constexpr unsigned int LLNNAIFJKIE_GNGIADANAHH_TypeDefinitionIndex = 62077;

class LLNNAIFJKIE_GNGIADANAHH : public ::LLNNAIFJKIE_BNGLFGOCENL
{
public:
	::System::Action_2<::System::Boolean, ::System::String*>* NBGNLKDJCJA; // 0x80
	::System::String* KABLKDJPOEO; // 0x88
	::System::Boolean FHCFBLCMOLA; // 0x90

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct IPMMCGDMODG, ::System::Single IECIIKCEAIE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_GNGIADANAHH__CTOR_OFFSET))(this, IPMMCGDMODG, IECIIKCEAIE);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_GNGIADANAHH_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void MABNAONDGLD(::System::Action_2<::System::Boolean, ::System::String*>* PPAEKFMCGDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_GNGIADANAHH_MABNAONDGLD_OFFSET))(this, PPAEKFMCGDB);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_GNGIADANAHH_NIGDIMFIAEJ_OFFSET))(this);
	}
};
