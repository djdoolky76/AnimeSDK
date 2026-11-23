#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/F46DC030031B393C.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/System/Nullable_1.h"

#define F979883DC3E3A380__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F979883DC3E3A380_TypeDefinitionIndex = 7202;

class F979883DC3E3A380 : public ::E379DE61A548837D
{
public:
	::E0B58AD87D1F143C::F46DC030031B393C E8A596AC44E741A9; // 0x38
	::System::Nullable_1<::System::Boolean> AF7291B52766D4E0; // 0x3C
	::System::Nullable_1<::System::Boolean> EA002D4CF421FB09; // 0x3E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F979883DC3E3A380__CTOR_OFFSET))(this);
	}
};
