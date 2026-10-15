#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define DIKAEHJFGEE___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF2091A0)
#define DIKAEHJFGEE___C__DISPLAYCLASS10_0___FILLBOSSHP_B__0_OFFSET UNITYSDK_OFFSET(0xF209320)

inline static constexpr unsigned int DIKAEHJFGEE___c__DisplayClass10_0_TypeDefinitionIndex = 57608;

	class DIKAEHJFGEE___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 monsterId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FillBossHp_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DIKAEHJFGEE___C__DISPLAYCLASS10_0___FILLBOSSHP_B__0_OFFSET))(this, a1);
		}

	};
