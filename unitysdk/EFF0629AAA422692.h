#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/A844E55E7752C22E.h"
#include "unitysdk/E379DE61A548837D.h"

class EA595708488A3BE5;

#define EFF0629AAA422692__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EFF0629AAA422692_TypeDefinitionIndex = 9741;

class EFF0629AAA422692 : public ::E379DE61A548837D
{
public:
	::B39AAAD1233537D7::A844E55E7752C22E FD90624C6802937A; // 0x38
	::System::Byte _padding0[0x4];
	::EA595708488A3BE5* AEAA808870D39634; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF0629AAA422692__CTOR_OFFSET))(this);
	}
};
