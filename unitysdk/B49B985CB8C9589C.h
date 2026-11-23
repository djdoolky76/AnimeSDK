#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace ABC::QualitySettings { class CharacterQualitySettings; }

#define B49B985CB8C9589C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B49B985CB8C9589C_TypeDefinitionIndex = 7866;

class B49B985CB8C9589C : public ::E379DE61A548837D
{
public:
	::ABC::QualitySettings::CharacterQualitySettings* AD69EDDB087EB824; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B49B985CB8C9589C__CTOR_OFFSET))(this);
	}
};
