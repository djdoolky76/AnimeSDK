#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GPPMPHICDEA_FCPDMPLFNFB_JDELIJBNOCP_OFFSET UNITYSDK_OFFSET(0x16F19FC0)
#define GPPMPHICDEA_FCPDMPLFNFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F19FB0)

inline static constexpr unsigned int GPPMPHICDEA_FCPDMPLFNFB_TypeDefinitionIndex = 42659;

class GPPMPHICDEA_FCPDMPLFNFB : public ::System::Object
{
public:
	::System::Action* DMPEOJCCCLO; // 0x10
	::System::UInt32 PKMFBJMJCOO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FCPDMPLFNFB__CTOR_OFFSET))(this);
	}

	::System::Void JDELIJBNOCP(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FCPDMPLFNFB_JDELIJBNOCP_OFFSET))(this, DJCNCELJPOM);
	}
};
