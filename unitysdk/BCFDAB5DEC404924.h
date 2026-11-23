#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BCFDAB5DEC404924__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BCFDAB5DEC404924_TypeDefinitionIndex = 6372;

class BCFDAB5DEC404924 : public ::E379DE61A548837D
{
public:
	::System::Int32 E81E262D628F7782; // 0x38
	::System::Int32 B52159D12CABD6DB; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAB5DEC404924__CTOR_OFFSET))(this);
	}
};
