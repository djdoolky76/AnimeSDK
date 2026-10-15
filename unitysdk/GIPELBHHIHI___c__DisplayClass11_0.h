#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIPELBHHIHI;
class GIPELBHHIHI_AEHOOFFKNCB;
namespace RPG::GameCore { class GameEntity; }

#define GIPELBHHIHI___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4EE30)
#define GIPELBHHIHI___C__DISPLAYCLASS11_0__TRYCREATEPOSESWITCHER_B__0_OFFSET UNITYSDK_OFFSET(0x15A50790)

	class GIPELBHHIHI___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::GIPELBHHIHI_AEHOOFFKNCB* volumeV2; // 0x10
		::GIPELBHHIHI* __4__this; // 0x18
		::System::UInt32 groupID; // 0x20
		::System::UInt32 instanceID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryCreatePoseSwitcher_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIPELBHHIHI___C__DISPLAYCLASS11_0__TRYCREATEPOSESWITCHER_B__0_OFFSET))(this, a1);
		}

	};
