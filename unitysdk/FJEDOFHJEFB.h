#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGPJKHNOECD;

#define FJEDOFHJEFB_OIADOIFOIHJ_OFFSET UNITYSDK_OFFSET(0x14AD6FD0)
#define FJEDOFHJEFB__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD7030)

inline static constexpr unsigned int FJEDOFHJEFB_TypeDefinitionIndex = 90657;

class FJEDOFHJEFB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEDOFHJEFB__CTOR_OFFSET))(this);
	}

	::System::Void OIADOIFOIHJ(::BGPJKHNOECD* DICPEDGFHBH)
	{
		return ((::System::Void(*)(::PVOID, ::BGPJKHNOECD*))((::PBYTE)hIl2Cpp + FJEDOFHJEFB_OIADOIFOIHJ_OFFSET))(this, DICPEDGFHBH);
	}
};
