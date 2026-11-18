#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CPDLCHCGMEE.h"

namespace System { class String; }

#define KPJAJIJHHIL_HHBEBIPCFNO_BCJHPHJNNDK_OFFSET UNITYSDK_OFFSET(0x15BA9EB0)
#define KPJAJIJHHIL_HHBEBIPCFNO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA9EA0)

inline static constexpr unsigned int KPJAJIJHHIL_HHBEBIPCFNO_TypeDefinitionIndex = 76470;

class KPJAJIJHHIL_HHBEBIPCFNO : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJAJIJHHIL_HHBEBIPCFNO__CTOR_OFFSET))(this);
	}

	::System::Boolean BCJHPHJNNDK(::CPDLCHCGMEE IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CPDLCHCGMEE))((::PBYTE)hIl2Cpp + KPJAJIJHHIL_HHBEBIPCFNO_BCJHPHJNNDK_OFFSET))(this, IPMMCGDMODG);
	}
};
