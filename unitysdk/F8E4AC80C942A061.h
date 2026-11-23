#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define F8E4AC80C942A061__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F8E4AC80C942A061_TypeDefinitionIndex = 250;

class F8E4AC80C942A061 : public ::E379DE61A548837D
{
public:
	::System::Boolean F053134EFAF2C429; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single AB58EC884C7A56FD; // 0x3C
	::System::Boolean B48E5995AB02DACB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8E4AC80C942A061__CTOR_OFFSET))(this);
	}
};
