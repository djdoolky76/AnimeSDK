#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJPDGONFBFB;
class OAEFGCLEHHO;
namespace System { class Action; }

#define BJKBAMNFLCA_MENDINNFDIP_MEMIPFGPJJL_OFFSET UNITYSDK_OFFSET(0x113EE5A0)
#define BJKBAMNFLCA_MENDINNFDIP__CTOR_OFFSET UNITYSDK_OFFSET(0x113EE590)

inline static constexpr unsigned int BJKBAMNFLCA_MENDINNFDIP_TypeDefinitionIndex = 41559;

class BJKBAMNFLCA_MENDINNFDIP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::JJPDGONFBFB* ECDFBPODEOB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_MENDINNFDIP__CTOR_OFFSET))(this);
	}

	::System::Void MEMIPFGPJJL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_MENDINNFDIP_MEMIPFGPJJL_OFFSET))(this, BHDNBGLCNOM);
	}
};
