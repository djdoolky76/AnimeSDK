#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F1197E754E9B2A73;

#define F2A34AC3A0361B94__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F2A34AC3A0361B94_TypeDefinitionIndex = 1645;

class F2A34AC3A0361B94 : public ::E379DE61A548837D
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x38
	::System::Byte _padding0[0x4];
	::F1197E754E9B2A73* F3D49608DC72BB45; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2A34AC3A0361B94__CTOR_OFFSET))(this);
	}
};
