#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMGEOIEOJBH.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MUSICGAME_LIVEHOUSELEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1249ACB0)

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int LiveHouseLevelConfig_TypeDefinitionIndex = 66050;

	class LiveHouseLevelConfig : public ::System::Object
	{
	public:
		::System::Boolean IsLockHP; // 0x10
		::System::Boolean IsDisableResultUI; // 0x11
		::System::Boolean IsDisableSkill; // 0x12
		::System::Byte _padding0[0x1];
		::GMGEOIEOJBH ExitType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICGAME_LIVEHOUSELEVELCONFIG__CTOR_OFFSET))(this);
		}
	};
}
