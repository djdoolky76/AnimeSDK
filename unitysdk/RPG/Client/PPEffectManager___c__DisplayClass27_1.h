#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APFPHAGPMAJ;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS27_1_CTOR_OFFSET UNITYSDK_OFFSET(0xE4B6300)
#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS27_1__REFRESHAVATARINTENSITY_B__1_OFFSET UNITYSDK_OFFSET(0xE4BC1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager___c__DisplayClass27_1_TypeDefinitionIndex = 71732;

	template <typename T>
	class PPEffectManager___c__DisplayClass27_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS27_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarIntensity_b__1(::APFPHAGPMAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APFPHAGPMAJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS27_1__REFRESHAVATARINTENSITY_B__1_OFFSET))(this, a1);
		}

	};
}
