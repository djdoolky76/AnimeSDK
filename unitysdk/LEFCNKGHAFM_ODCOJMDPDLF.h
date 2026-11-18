#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LEFCNKGHAFM_ODCOJMDPDLF_BGOEMBIEEDO_OFFSET UNITYSDK_OFFSET(0x15BD5340)
#define LEFCNKGHAFM_ODCOJMDPDLF__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD5330)

inline static constexpr unsigned int LEFCNKGHAFM_ODCOJMDPDLF_TypeDefinitionIndex = 75238;

class LEFCNKGHAFM_ODCOJMDPDLF : public ::System::Object
{
public:
	::System::String* EENKGIMOCEO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFCNKGHAFM_ODCOJMDPDLF__CTOR_OFFSET))(this);
	}

	::System::Void BGOEMBIEEDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFCNKGHAFM_ODCOJMDPDLF_BGOEMBIEEDO_OFFSET))(this);
	}
};
