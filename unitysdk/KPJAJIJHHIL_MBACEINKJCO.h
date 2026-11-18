#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CPDLCHCGMEE.h"

namespace System { class String; }

#define KPJAJIJHHIL_MBACEINKJCO_JIEKFNACOIA_OFFSET UNITYSDK_OFFSET(0x15804E50)
#define KPJAJIJHHIL_MBACEINKJCO__CTOR_OFFSET UNITYSDK_OFFSET(0x15804E40)

inline static constexpr unsigned int KPJAJIJHHIL_MBACEINKJCO_TypeDefinitionIndex = 76471;

class KPJAJIJHHIL_MBACEINKJCO : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJAJIJHHIL_MBACEINKJCO__CTOR_OFFSET))(this);
	}

	::System::Boolean JIEKFNACOIA(::CPDLCHCGMEE IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CPDLCHCGMEE))((::PBYTE)hIl2Cpp + KPJAJIJHHIL_MBACEINKJCO_JIEKFNACOIA_OFFSET))(this, IPMMCGDMODG);
	}
};
