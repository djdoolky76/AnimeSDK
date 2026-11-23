#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/EC41208760F598DB.h"

#define A547947A0F3B4F43__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A547947A0F3B4F43_TypeDefinitionIndex = 6707;

class A547947A0F3B4F43 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::EC41208760F598DB FA6CD835DE0516EA; // 0x38
	::System::Boolean AF473FA4E72F31F5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A547947A0F3B4F43__CTOR_OFFSET))(this);
	}
};
