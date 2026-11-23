#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FCE63B7B7A16D2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCE63B7B7A16D2FD_TypeDefinitionIndex = 166;

class FCE63B7B7A16D2FD : public ::E379DE61A548837D
{
public:
	::System::UInt32 F8C264FCB92CC8B2; // 0x38
	::System::UInt32 F0A8D0B9981AB119; // 0x3C
	::System::UInt32 E1482AC4EA5C07ED; // 0x40
	::System::Boolean A04A64697797FE1C; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCE63B7B7A16D2FD__CTOR_OFFSET))(this);
	}
};
