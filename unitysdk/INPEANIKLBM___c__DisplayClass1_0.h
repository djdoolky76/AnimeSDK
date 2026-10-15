#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterVisibleComponent; }

#define INPEANIKLBM___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x164EB2C0)
#define INPEANIKLBM___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x164EB2D0)

inline static constexpr unsigned int INPEANIKLBM___c__DisplayClass1_0_TypeDefinitionIndex = 58586;

	class INPEANIKLBM___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterVisibleComponent* pCharVisibleComponent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPEANIKLBM___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPEANIKLBM___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
