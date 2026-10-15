#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define DIKAEHJFGEE___C__DISPLAYCLASS10_1_CTOR_OFFSET UNITYSDK_OFFSET(0xF20E5C0)
#define DIKAEHJFGEE___C__DISPLAYCLASS10_1___FILLBOSSHP_B__1_OFFSET UNITYSDK_OFFSET(0xF20E690)

	template <typename T>
	class DIKAEHJFGEE___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::System::UInt32 tmpBossID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE___C__DISPLAYCLASS10_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __FillBossHp_b__1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DIKAEHJFGEE___C__DISPLAYCLASS10_1___FILLBOSSHP_B__1_OFFSET))(this, a1);
		}

	};
