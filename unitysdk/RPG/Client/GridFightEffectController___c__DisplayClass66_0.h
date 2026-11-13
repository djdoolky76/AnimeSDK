#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAnimEffect; }
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS66_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D157AB0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS66_0__PLAYSHOPRANKUPENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1D157AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass66_0_TypeDefinitionIndex = 65993;

	class GridFightEffectController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::GridFightAnimEffect* effect; // 0x20
		::UnityEngine::Transform* transform; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS66_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayShopRankUpEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS66_0__PLAYSHOPRANKUPENTRANCE_B__0_OFFSET))(this);
		}

	};
}
