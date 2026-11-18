#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }

#define GNACLIIBMED_GKMKMMJOJHG_FIGILJLHJCJ_OFFSET UNITYSDK_OFFSET(0x10F0A3D0)
#define GNACLIIBMED_GKMKMMJOJHG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0A3C0)

inline static constexpr unsigned int GNACLIIBMED_GKMKMMJOJHG_TypeDefinitionIndex = 40202;

class GNACLIIBMED_GKMKMMJOJHG : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapTrackLineWidgetContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_GKMKMMJOJHG__CTOR_OFFSET))(this);
	}

	::System::Boolean FIGILJLHJCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_GKMKMMJOJHG_FIGILJLHJCJ_OFFSET))(this);
	}
};
