#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }

#define GNACLIIBMED_JBOJMCHKFHD_JPAJJBDIJLP_OFFSET UNITYSDK_OFFSET(0x14913680)
#define GNACLIIBMED_JBOJMCHKFHD__CTOR_OFFSET UNITYSDK_OFFSET(0x14913670)

inline static constexpr unsigned int GNACLIIBMED_JBOJMCHKFHD_TypeDefinitionIndex = 40201;

class GNACLIIBMED_JBOJMCHKFHD : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapTrackLineWidgetContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_JBOJMCHKFHD__CTOR_OFFSET))(this);
	}

	::System::Boolean JPAJJBDIJLP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_JBOJMCHKFHD_JPAJJBDIJLP_OFFSET))(this);
	}
};
