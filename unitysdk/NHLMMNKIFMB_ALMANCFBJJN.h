#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NECFCJGAJML.h"
#include "unitysdk/System/Object.h"

class NHLMMNKIFMB;
namespace System { class Action; }

#define NHLMMNKIFMB_ALMANCFBJJN_KJOBIAHDIPG_OFFSET UNITYSDK_OFFSET(0xE19DE80)
#define NHLMMNKIFMB_ALMANCFBJJN__CTOR_OFFSET UNITYSDK_OFFSET(0xE19D030)

inline static constexpr unsigned int NHLMMNKIFMB_ALMANCFBJJN_TypeDefinitionIndex = 71032;

class NHLMMNKIFMB_ALMANCFBJJN : public ::System::Object
{
public:
	::NECFCJGAJML JBAAOKJHJMH; // 0x10
	::NECFCJGAJML JBNIIHBJAJD; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_ALMANCFBJJN__CTOR_OFFSET))(this);
	}

	::System::Action* KJOBIAHDIPG(::NHLMMNKIFMB* FBNGLHEEPFH)
	{
		return ((::System::Action*(*)(::PVOID, ::NHLMMNKIFMB*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_ALMANCFBJJN_KJOBIAHDIPG_OFFSET))(this, FBNGLHEEPFH);
	}
};
