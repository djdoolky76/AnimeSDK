#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AADD5B52CC71298E.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

#define B847661B11FF2856__CTOR_OFFSET UNITYSDK_OFFSET(0x1677AC0)

inline static constexpr unsigned int B847661B11FF2856_TypeDefinitionIndex = 2023;

class B847661B11FF2856 : public ::E379DE61A548837D
{
public:
	::System::Boolean EACDC883BA7B97F4; // 0x38
	::System::Byte _padding0[0x7];
	::AADD5B52CC71298E E3EAE8BCA6C2A2D1; // 0x40
	::AD61077CFCBEFAEA EAF5832E2EE694CD; // 0xB8
	::E865F6F8B8B44C1E FCF8E5D943E39D33; // 0xC0
	::System::Boolean A1E47D46568F4835; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B847661B11FF2856__CTOR_OFFSET))(this);
	}
};
