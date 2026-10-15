#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define MKANBGPNGOH___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB986720)
#define MKANBGPNGOH___C__DISPLAYCLASS13_0___PLAYDAMAGEHITSOUND_B__0_OFFSET UNITYSDK_OFFSET(0xB986AD0)

inline static constexpr unsigned int MKANBGPNGOH___c__DisplayClass13_0_TypeDefinitionIndex = 53855;

	class MKANBGPNGOH___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* pTarget; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANBGPNGOH___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayDamageHitSound_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANBGPNGOH___C__DISPLAYCLASS13_0___PLAYDAMAGEHITSOUND_B__0_OFFSET))(this);
		}

	};
