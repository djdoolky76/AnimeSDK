#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A970A434E9CC38AD/BAF1DF3478CD3AAE.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BDC8B159A19ACF96.h"

class AB642D1382756991;

#define A50D6D3753F67FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3930)

inline static constexpr unsigned int A50D6D3753F67FDF_TypeDefinitionIndex = 472;

class A50D6D3753F67FDF : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* BAE2F5579A978D7A; // 0x38
	::System::Boolean FAEB97CE61DC5405; // 0x40
	::System::Boolean A127F16E26E36480; // 0x41
	::System::Byte _padding0[0x2];
	::E68AA4EB51923C98::BDC8B159A19ACF96 A5DDBD7EFED287C5; // 0x44
	::A970A434E9CC38AD::BAF1DF3478CD3AAE EF1DF4FF03135A24; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A50D6D3753F67FDF__CTOR_OFFSET))(this);
	}
};
