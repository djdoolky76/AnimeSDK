#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LittleGameAbilityAttributeModifierType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define BCDFHNMLPFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B1AE0)

	class BCDFHNMLPFJ : public ::System::Object
	{
	public:
		::System::Int32 EHDGNHHPNMK; // 0x10
		::RPG::Client::LittleGame::LittleGameAbilityAttributeModifierType JMNJLFACCLM; // 0x14
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDFHNMLPFJ_CTOR_OFFSET))(this);
		}

	};
