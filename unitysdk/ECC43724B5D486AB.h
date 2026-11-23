#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F6092175BD347C48;

#define ECC43724B5D486AB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ECC43724B5D486AB_TypeDefinitionIndex = 8977;

class ECC43724B5D486AB : public ::E379DE61A548837D
{
public:
	::System::Boolean A1E22B90DE1E4067; // 0x38
	::System::Byte _padding0[0x7];
	::F6092175BD347C48* ACF6D07A20493EBC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECC43724B5D486AB__CTOR_OFFSET))(this);
	}
};
