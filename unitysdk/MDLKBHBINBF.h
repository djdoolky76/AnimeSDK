#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define MDLKBHBINBF_DLBMCODFPON_OFFSET UNITYSDK_OFFSET(0x151C1E50)
#define MDLKBHBINBF__CTOR_OFFSET UNITYSDK_OFFSET(0x151C1E00)

inline static constexpr unsigned int MDLKBHBINBF_TypeDefinitionIndex = 88257;

class MDLKBHBINBF : public ::System::EventArgs
{
public:
	::System::Boolean LCGNHLHPDLE; // 0x10
	::System::Boolean MDHPPJGDMBC; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLKBHBINBF__CTOR_OFFSET))(this);
	}

	::System::UInt32 DLBMCODFPON()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLKBHBINBF_DLBMCODFPON_OFFSET))(this);
	}
};
