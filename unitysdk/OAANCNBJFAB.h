#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHKMKCIPOLD;

#define OAANCNBJFAB__CTOR_OFFSET UNITYSDK_OFFSET(0xEEC7350)

inline static constexpr unsigned int OAANCNBJFAB_TypeDefinitionIndex = 77434;

class OAANCNBJFAB : public ::System::Object
{
public:
	::LHKMKCIPOLD* EFFAONJBCOG; // 0x10

	::System::Void _ctor(::LHKMKCIPOLD* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::LHKMKCIPOLD*))((::PBYTE)hIl2Cpp + OAANCNBJFAB__CTOR_OFFSET))(this, LJBPECKCCEA);
	}
};
