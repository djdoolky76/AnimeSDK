#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define NAIJACEFAIF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9CDC0)
#define NAIJACEFAIF___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBA9D970)

inline static constexpr unsigned int NAIJACEFAIF___c__DisplayClass3_0_TypeDefinitionIndex = 52362;

	class NAIJACEFAIF___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* target; // 0x10
		::RPG::GameCore::GameEntity* source; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
