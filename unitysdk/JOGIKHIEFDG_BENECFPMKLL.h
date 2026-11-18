#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JOGIKHIEFDG_BENECFPMKLL_KMCINMBPFDC_OFFSET UNITYSDK_OFFSET(0x130A0050)
#define JOGIKHIEFDG_BENECFPMKLL__CTOR_OFFSET UNITYSDK_OFFSET(0x130A0040)

inline static constexpr unsigned int JOGIKHIEFDG_BENECFPMKLL_TypeDefinitionIndex = 84947;

class JOGIKHIEFDG_BENECFPMKLL : public ::System::Object
{
public:
	::System::String* FCCLIEJAKLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGIKHIEFDG_BENECFPMKLL__CTOR_OFFSET))(this);
	}

	::System::String* KMCINMBPFDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGIKHIEFDG_BENECFPMKLL_KMCINMBPFDC_OFFSET))(this);
	}
};
