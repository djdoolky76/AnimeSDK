#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BJKBAMNFLCA_ELDMBMLDBAA_DLCBJPEKIID_OFFSET UNITYSDK_OFFSET(0x115F3080)
#define BJKBAMNFLCA_ELDMBMLDBAA_MDODDBAFIGH_OFFSET UNITYSDK_OFFSET(0x115F2EA0)
#define BJKBAMNFLCA_ELDMBMLDBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x115F2E90)

inline static constexpr unsigned int BJKBAMNFLCA_ELDMBMLDBAA_TypeDefinitionIndex = 41567;

class BJKBAMNFLCA_ELDMBMLDBAA : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_ELDMBMLDBAA__CTOR_OFFSET))(this);
	}

	::System::Void MDODDBAFIGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_ELDMBMLDBAA_MDODDBAFIGH_OFFSET))(this);
	}

	::System::Void DLCBJPEKIID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_ELDMBMLDBAA_DLCBJPEKIID_OFFSET))(this);
	}
};
