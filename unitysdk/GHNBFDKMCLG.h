#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GHNBFDKMCLG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D593B0)

inline static constexpr unsigned int GHNBFDKMCLG_TypeDefinitionIndex = 44072;

class GHNBFDKMCLG : public ::System::Object
{
public:
	::System::Single GMOONNPGBPI; // 0x10
	::System::Single AMJIOOPPCME; // 0x14
	::System::Int32 MJNHHOHGHJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNBFDKMCLG__CTOR_OFFSET))(this);
	}
};
