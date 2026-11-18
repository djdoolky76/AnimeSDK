#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFLGIPMHGLM;
class MPHLLEOEFID;

#define HGFPBHGPFFM_HKIHGCKCFAG_IPNMICEMIAN_OFFSET UNITYSDK_OFFSET(0x13D8C340)
#define HGFPBHGPFFM_HKIHGCKCFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8C330)

inline static constexpr unsigned int HGFPBHGPFFM_HKIHGCKCFAG_TypeDefinitionIndex = 79278;

class HGFPBHGPFFM_HKIHGCKCFAG : public ::System::Object
{
public:
	::AFLGIPMHGLM* BOBIKBDKFCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFPBHGPFFM_HKIHGCKCFAG__CTOR_OFFSET))(this);
	}

	::MPHLLEOEFID* IPNMICEMIAN()
	{
		return ((::MPHLLEOEFID*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFPBHGPFFM_HKIHGCKCFAG_IPNMICEMIAN_OFFSET))(this);
	}
};
