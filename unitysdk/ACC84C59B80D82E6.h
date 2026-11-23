#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define ACC84C59B80D82E6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ACC84C59B80D82E6_TypeDefinitionIndex = 1313;

class ACC84C59B80D82E6 : public ::E379DE61A548837D
{
public:
	::System::Int32 B289D9A1F114D305; // 0x38
	::System::Int32 AB62713ED9E5EFA3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACC84C59B80D82E6__CTOR_OFFSET))(this);
	}
};
