#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }

#define GNACLIIBMED_LNGBACPONJB_PCJLKFEFLOP_OFFSET UNITYSDK_OFFSET(0x149EFE10)
#define GNACLIIBMED_LNGBACPONJB__CTOR_OFFSET UNITYSDK_OFFSET(0x149EFE00)

inline static constexpr unsigned int GNACLIIBMED_LNGBACPONJB_TypeDefinitionIndex = 40206;

class GNACLIIBMED_LNGBACPONJB : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapTrackLineWidgetContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_LNGBACPONJB__CTOR_OFFSET))(this);
	}

	::System::Boolean PCJLKFEFLOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_LNGBACPONJB_PCJLKFEFLOP_OFFSET))(this);
	}
};
