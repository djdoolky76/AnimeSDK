#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JDLNGKLEHLK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A59B30)

inline static constexpr unsigned int JDLNGKLEHLK_TypeDefinitionIndex = 68332;

class JDLNGKLEHLK : public ::System::Object
{
public:
	::System::String* CIPOPCAGGGI; // 0x10
	::System::Int32 KEDBFHFLBHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLNGKLEHLK__CTOR_OFFSET))(this);
	}
};
