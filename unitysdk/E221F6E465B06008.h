#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define E221F6E465B06008_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2874B40)
#define E221F6E465B06008__CTOR_OFFSET UNITYSDK_OFFSET(0x2874CA0)

inline static constexpr unsigned int E221F6E465B06008_TypeDefinitionIndex = 16081;

class E221F6E465B06008 : public ::ABEBA93AD61764EF
{
public:
	::System::Single FB50BF49C5F38023; // 0x18
	::System::Single FE385ADB74AFA8EB; // 0x1C
	::System::Single F87AB3ACB82FA0CD; // 0x20
	::System::Single B09193E1CBD4C557; // 0x24
	::UnityEngine::E46B881AA2636190 A697880F7A1A5050; // 0x28

	::System::Boolean FC3208D7B8C7EE04(::E221F6E465B06008* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E221F6E465B06008*))((::PBYTE)hIl2Cpp + E221F6E465B06008_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E221F6E465B06008__CTOR_OFFSET))(this);
	}
};
