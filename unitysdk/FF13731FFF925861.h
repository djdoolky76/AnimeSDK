#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FF13731FFF925861__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3220)

inline static constexpr unsigned int FF13731FFF925861_TypeDefinitionIndex = 9855;

class FF13731FFF925861 : public ::E379DE61A548837D
{
public:
	::System::Int32 F15DED49F43372B1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF13731FFF925861__CTOR_OFFSET))(this);
	}
};
