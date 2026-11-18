#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLNNAIFJKIE_BNGLFGOCENL.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { template <typename T> class Action_1; }

#define LLNNAIFJKIE_CKBEBBCCJMI_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x13D07290)
#define LLNNAIFJKIE_CKBEBBCCJMI_IKDOCOPAJJF_OFFSET UNITYSDK_OFFSET(0x13D07400)
#define LLNNAIFJKIE_CKBEBBCCJMI_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x13D073B0)
#define LLNNAIFJKIE_CKBEBBCCJMI__CTOR_OFFSET UNITYSDK_OFFSET(0x13D070F0)

inline static constexpr unsigned int LLNNAIFJKIE_CKBEBBCCJMI_TypeDefinitionIndex = 62074;

class LLNNAIFJKIE_CKBEBBCCJMI : public ::LLNNAIFJKIE_BNGLFGOCENL
{
public:
	::System::Action_1<::System::Boolean>* HAFPPBCPOFJ; // 0x80
	::System::Boolean CPHDDAGKHLB; // 0x88

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct IPMMCGDMODG, ::System::Single IECIIKCEAIE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_CKBEBBCCJMI__CTOR_OFFSET))(this, IPMMCGDMODG, IECIIKCEAIE);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_CKBEBBCCJMI_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_CKBEBBCCJMI_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void IKDOCOPAJJF(::System::Action_1<::System::Boolean>* PONFFDEKNIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_CKBEBBCCJMI_IKDOCOPAJJF_OFFSET))(this, PONFFDEKNIP);
	}
};
