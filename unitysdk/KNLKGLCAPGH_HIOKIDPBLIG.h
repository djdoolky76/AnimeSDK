#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_HIOKIDPBLIG_HCJLBLOKMGA_OFFSET UNITYSDK_OFFSET(0x126A9BA0)
#define KNLKGLCAPGH_HIOKIDPBLIG__CTOR_OFFSET UNITYSDK_OFFSET(0x126A9B90)

inline static constexpr unsigned int KNLKGLCAPGH_HIOKIDPBLIG_TypeDefinitionIndex = 41109;

class KNLKGLCAPGH_HIOKIDPBLIG : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HIOKIDPBLIG__CTOR_OFFSET))(this);
	}

	::System::Void HCJLBLOKMGA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HIOKIDPBLIG_HCJLBLOKMGA_OFFSET))(this, BHDNBGLCNOM);
	}
};
