#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class BD3A9F619D176EFE;

#define FA8FF379B9D890D1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FA8FF379B9D890D1_TypeDefinitionIndex = 9034;

class FA8FF379B9D890D1 : public ::E379DE61A548837D
{
public:
	::BD3A9F619D176EFE* B8760D69C1344187; // 0x38
	::System::Boolean A562209ED2D7C681; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA8FF379B9D890D1__CTOR_OFFSET))(this);
	}
};
