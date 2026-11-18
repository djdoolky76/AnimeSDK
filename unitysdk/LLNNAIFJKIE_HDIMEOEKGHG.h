#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLNNAIFJKIE_BNGLFGOCENL.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define LLNNAIFJKIE_HDIMEOEKGHG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16C642F0)
#define LLNNAIFJKIE_HDIMEOEKGHG_FKMMKPIOKJI_OFFSET UNITYSDK_OFFSET(0x16C643C0)
#define LLNNAIFJKIE_HDIMEOEKGHG_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x16C64410)
#define LLNNAIFJKIE_HDIMEOEKGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x16C64160)

inline static constexpr unsigned int LLNNAIFJKIE_HDIMEOEKGHG_TypeDefinitionIndex = 62076;

class LLNNAIFJKIE_HDIMEOEKGHG : public ::LLNNAIFJKIE_BNGLFGOCENL
{
public:
	::System::String* NCHCMKEAHCD; // 0x80
	::System::Action_2<::System::String*, ::System::Boolean>* CDCKNFEKADK; // 0x88
	::System::Boolean CMBKOECNKKG; // 0x90

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct IPMMCGDMODG, ::System::Single IECIIKCEAIE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_HDIMEOEKGHG__CTOR_OFFSET))(this, IPMMCGDMODG, IECIIKCEAIE);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_HDIMEOEKGHG_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void FKMMKPIOKJI(::System::Action_2<::System::String*, ::System::Boolean>* ECHAMEKLKLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_HDIMEOEKGHG_FKMMKPIOKJI_OFFSET))(this, ECHAMEKLKLK);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_HDIMEOEKGHG_NIGDIMFIAEJ_OFFSET))(this);
	}
};
