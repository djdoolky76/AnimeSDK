#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FE9251F5C0BCB70D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FE9251F5C0BCB70D_TypeDefinitionIndex = 920;

class FE9251F5C0BCB70D : public ::E379DE61A548837D
{
public:
	::System::UInt64 E169CEB6909E132A; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE9251F5C0BCB70D__CTOR_OFFSET))(this);
	}
};
