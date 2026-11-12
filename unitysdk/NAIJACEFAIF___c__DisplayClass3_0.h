#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define NAIJACEFAIF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC321AB0)
#define NAIJACEFAIF___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xC322630)

inline static constexpr unsigned int NAIJACEFAIF___c__DisplayClass3_0_TypeDefinitionIndex = 53468;

	class NAIJACEFAIF___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* source; // 0x10
		::RPG::GameCore::GameEntity* target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
