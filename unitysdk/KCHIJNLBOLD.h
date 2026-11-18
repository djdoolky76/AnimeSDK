#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIBGLKCJGDE.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KCHIJNLBOLD_COMPARETO_OFFSET UNITYSDK_OFFSET(0x13CE5820)
#define KCHIJNLBOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE56A0)

inline static constexpr unsigned int KCHIJNLBOLD_TypeDefinitionIndex = 93177;

class KCHIJNLBOLD : public ::System::Object
{
public:
	::System::String* HGAACDMMMJL; // 0x10
	::System::String* EGGIOFFNNCE; // 0x18
	::System::String* APCCHNLGDBI; // 0x20
	::System::String* LGPDNGKAFII; // 0x28
	::System::Int32 NANFNPCCHCJ; // 0x30
	::System::Single CIIPCCLOHLH; // 0x34
	::System::Single AJPAFKAPNNM; // 0x38
	::BIBGLKCJGDE KAMJLKGLFDB; // 0x3C
	::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem IPMMCGDMODG; // 0x40
	::System::Int32 LHDHLAEPFBH; // 0x50

	::System::Void _ctor(::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem IPMMCGDMODG, ::System::Single CIIPCCLOHLH, ::System::Int32 JBINFMAIOJN, ::BIBGLKCJGDE OBNIAHNMHPF, ::System::Int32 LHDHLAEPFBH, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Single, ::System::Int32, ::BIBGLKCJGDE, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KCHIJNLBOLD__CTOR_OFFSET))(this, IPMMCGDMODG, CIIPCCLOHLH, JBINFMAIOJN, OBNIAHNMHPF, LHDHLAEPFBH, MDPPNMIPDMP);
	}

	::System::Int32 CompareTo(::KCHIJNLBOLD* JIGDFDGHFMN)
	{
		return ((::System::Int32(*)(::PVOID, ::KCHIJNLBOLD*))((::PBYTE)hIl2Cpp + KCHIJNLBOLD_COMPARETO_OFFSET))(this, JIGDFDGHFMN);
	}
};
