#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E6AEF609D2F9E6C3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E6AEF609D2F9E6C3_TypeDefinitionIndex = 6006;

class E6AEF609D2F9E6C3 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E43E467F516F27D3; // 0x38
	::System::Boolean F99BE9040C70318B; // 0x3C
	::System::Boolean F72972F9F4DF568A; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6AEF609D2F9E6C3__CTOR_OFFSET))(this);
	}
};
