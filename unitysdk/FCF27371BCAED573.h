#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define FCF27371BCAED573__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCF27371BCAED573_TypeDefinitionIndex = 485;

class FCF27371BCAED573 : public ::E379DE61A548837D
{
public:
	::System::String* F0FCB04795220538; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCF27371BCAED573__CTOR_OFFSET))(this);
	}
};
