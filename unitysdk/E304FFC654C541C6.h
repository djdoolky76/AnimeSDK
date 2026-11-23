#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace ABC::QualitySettings { class EnvQualitySettings; }

#define E304FFC654C541C6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E304FFC654C541C6_TypeDefinitionIndex = 8118;

class E304FFC654C541C6 : public ::E379DE61A548837D
{
public:
	::ABC::QualitySettings::EnvQualitySettings* A0C63BD70C8567C3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E304FFC654C541C6__CTOR_OFFSET))(this);
	}
};
