#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APFPHAGPMAJ;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDA578C0)
#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1__REFRESHAVATARINTENSITY_B__1_OFFSET UNITYSDK_OFFSET(0xDA5D270)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager___c__DisplayClass21_1_TypeDefinitionIndex = 69773;

	template <typename T>
	class PPEffectManager___c__DisplayClass21_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarIntensity_b__1(::APFPHAGPMAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APFPHAGPMAJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1__REFRESHAVATARINTENSITY_B__1_OFFSET))(this, a1);
		}

	};
}
