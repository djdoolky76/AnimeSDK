#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PCMENEMPLGF_AEOLJHLKMOH_CBOHKPGDKEA_OFFSET UNITYSDK_OFFSET(0x1AFD6B40)
#define PCMENEMPLGF_AEOLJHLKMOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6B30)

inline static constexpr unsigned int PCMENEMPLGF_AEOLJHLKMOH_TypeDefinitionIndex = 62830;

class PCMENEMPLGF_AEOLJHLKMOH : public ::System::Object
{
public:
	::System::String* PHKOAKMHMDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AEOLJHLKMOH__CTOR_OFFSET))(this);
	}

	::System::String* CBOHKPGDKEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AEOLJHLKMOH_CBOHKPGDKEA_OFFSET))(this);
	}
};
