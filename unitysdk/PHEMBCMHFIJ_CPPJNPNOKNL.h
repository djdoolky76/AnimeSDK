#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace System { class Action; }

#define PHEMBCMHFIJ_CPPJNPNOKNL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1C657260)
#define PHEMBCMHFIJ_CPPJNPNOKNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C657250)

inline static constexpr unsigned int PHEMBCMHFIJ_CPPJNPNOKNL_TypeDefinitionIndex = 84592;

class PHEMBCMHFIJ_CPPJNPNOKNL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_CPPJNPNOKNL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ActivityRhythmClickBeatmapConfig* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig*))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_CPPJNPNOKNL_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL);
	}
};
