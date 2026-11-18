#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }

#define GNACLIIBMED_OAHDHPBADON_JIICPBBMBFC_OFFSET UNITYSDK_OFFSET(0x15F3C710)
#define GNACLIIBMED_OAHDHPBADON__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3C700)

inline static constexpr unsigned int GNACLIIBMED_OAHDHPBADON_TypeDefinitionIndex = 40198;

class GNACLIIBMED_OAHDHPBADON : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapTrackLineWidgetContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_OAHDHPBADON__CTOR_OFFSET))(this);
	}

	::System::Boolean JIICPBBMBFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_OAHDHPBADON_JIICPBBMBFC_OFFSET))(this);
	}
};
