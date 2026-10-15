#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGNMNNDEDE;

#define RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD4FC8B0)
#define RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0__ONHOYOGROUPACTIVECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xD50A8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MainMissionData___c__DisplayClass14_0_TypeDefinitionIndex = 66132;

	class MainMissionData___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnHoYoGroupActiveChange_b__0(::DMGNMNNDEDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMGNMNNDEDE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0__ONHOYOGROUPACTIVECHANGE_B__0_OFFSET))(this, a1);
		}

	};
}
