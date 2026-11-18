#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CEKNEMMJFPA__CTOR_OFFSET UNITYSDK_OFFSET(0x199FDA00)

inline static constexpr unsigned int CEKNEMMJFPA_TypeDefinitionIndex = 63228;

class CEKNEMMJFPA : public ::System::Object
{
public:
	::System::String* LPGNLKFEODH; // 0x10
	::System::Int32 IFCOEONGHLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKNEMMJFPA__CTOR_OFFSET))(this);
	}
};
