#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA81A20)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT___C__DISPLAYCLASS3_0__PLAY_B__0_OFFSET UNITYSDK_OFFSET(0xDA81FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireOrbFlyEffect___c__DisplayClass3_0_TypeDefinitionIndex = 65963;

	class GridFightBonfireOrbFlyEffect___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* onFinished; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT___C__DISPLAYCLASS3_0__PLAY_B__0_OFFSET))(this);
		}

	};
}
