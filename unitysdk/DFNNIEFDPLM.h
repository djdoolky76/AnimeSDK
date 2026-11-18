#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DFNNIEFDPLM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E71C5D0)
#define DFNNIEFDPLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71C150)
#define DFNNIEFDPLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71C5C0)

inline static constexpr unsigned int DFNNIEFDPLM_TypeDefinitionIndex = 93740;

class DFNNIEFDPLM : public ::System::Object
{
public:
	::System::UInt32 GEAJDPPEJHE; // 0x10
	::System::UInt32 FJOIFHFMBCA; // 0x14
	::System::UInt32 JOABFILLGDD; // 0x18
	::System::UInt32 JOCOFFGOBND; // 0x1C
	::System::UInt32 PCBDNKELNMK; // 0x20
	::System::UInt32 EEKAOFHHEGM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNIEFDPLM__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNIEFDPLM_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNIEFDPLM_DPIHOJBBGLA_OFFSET))(this);
	}
};
