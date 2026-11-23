#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class A071A61C513770B2;

#define F5FB16C81B7E0124__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F5FB16C81B7E0124_TypeDefinitionIndex = 1351;

class F5FB16C81B7E0124 : public ::E379DE61A548837D
{
public:
	::System::Int32 E1482AC4EA5C07ED; // 0x38
	::System::Byte _padding0[0x4];
	::A071A61C513770B2* A5BD5097222A2787; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5FB16C81B7E0124__CTOR_OFFSET))(this);
	}
};
