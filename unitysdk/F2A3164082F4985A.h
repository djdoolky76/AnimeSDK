#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/FB15B066A5E7656D.h"

#define F2A3164082F4985A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F2A3164082F4985A_TypeDefinitionIndex = 8115;

class F2A3164082F4985A : public ::E379DE61A548837D
{
public:
	::FB15B066A5E7656D A81F7151FC46C7F0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2A3164082F4985A__CTOR_OFFSET))(this);
	}
};
