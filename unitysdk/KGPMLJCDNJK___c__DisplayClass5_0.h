#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGLKHAAGJB;

#define KGPMLJCDNJK___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F4B70)
#define KGPMLJCDNJK___C__DISPLAYCLASS5_0___ONTEAMTOWERSNEWPLAYERSKILLMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB3F4E70)

inline static constexpr unsigned int KGPMLJCDNJK___c__DisplayClass5_0_TypeDefinitionIndex = 79040;

	class KGPMLJCDNJK___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::DFGLKHAAGJB* skillInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnTeamTowersNewPlayerSkillMessage_b__0(::DFGLKHAAGJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFGLKHAAGJB*))((::PBYTE)hIl2Cpp + KGPMLJCDNJK___C__DISPLAYCLASS5_0___ONTEAMTOWERSNEWPLAYERSKILLMESSAGE_B__0_OFFSET))(this, a1);
		}

	};
