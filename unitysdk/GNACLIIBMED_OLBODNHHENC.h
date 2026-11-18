#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }

#define GNACLIIBMED_OLBODNHHENC_NOOHKMHNMJF_OFFSET UNITYSDK_OFFSET(0x13D6BF70)
#define GNACLIIBMED_OLBODNHHENC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6BF60)

inline static constexpr unsigned int GNACLIIBMED_OLBODNHHENC_TypeDefinitionIndex = 40205;

class GNACLIIBMED_OLBODNHHENC : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapTrackLineWidgetContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_OLBODNHHENC__CTOR_OFFSET))(this);
	}

	::System::Boolean NOOHKMHNMJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_OLBODNHHENC_NOOHKMHNMJF_OFFSET))(this);
	}
};
