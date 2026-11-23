#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

#define F52693490C007DF5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F52693490C007DF5_TypeDefinitionIndex = 739;

class F52693490C007DF5 : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID B1E6422003773C9F; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F52693490C007DF5__CTOR_OFFSET))(this);
	}
};
