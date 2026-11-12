#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6A30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS35_0__PLAYRANDOMFLY_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6A40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass35_0_TypeDefinitionIndex = 65971;

	class GridFightEffectController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightFlyEffect* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayRandomFly_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS35_0__PLAYRANDOMFLY_B__0_OFFSET))(this);
		}

	};
}
