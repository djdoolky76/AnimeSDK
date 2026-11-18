#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCICLBLOILG;
class MPHLLEOEFID;

#define HGFPBHGPFFM_MJJIOOPHEPP_LACHNJEFIFF_OFFSET UNITYSDK_OFFSET(0x17AF6020)
#define HGFPBHGPFFM_MJJIOOPHEPP__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF6010)

inline static constexpr unsigned int HGFPBHGPFFM_MJJIOOPHEPP_TypeDefinitionIndex = 79279;

class HGFPBHGPFFM_MJJIOOPHEPP : public ::System::Object
{
public:
	::JCICLBLOILG* BOBIKBDKFCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFPBHGPFFM_MJJIOOPHEPP__CTOR_OFFSET))(this);
	}

	::MPHLLEOEFID* LACHNJEFIFF()
	{
		return ((::MPHLLEOEFID*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFPBHGPFFM_MJJIOOPHEPP_LACHNJEFIFF_OFFSET))(this);
	}
};
