#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGEOIGDFCGM;
class AOJIIFBCPEL;

#define FLEPFMMDGHE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C580E0)

inline static constexpr unsigned int FLEPFMMDGHE_TypeDefinitionIndex = 71096;

class FLEPFMMDGHE : public ::System::Object
{
public:
	::AGEOIGDFCGM* BLLKNNLHOBC; // 0x10
	::AOJIIFBCPEL* KLCNPPJCFKA; // 0x18
	::System::UInt32 OMIDGNKODON; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEPFMMDGHE__CTOR_OFFSET))(this);
	}
};
