#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKFLMHICIJG.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"
class JJEILFJMLON;
class OKEBGEBIPNE;

#define AEHPHKBKPJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C553680)

inline static constexpr unsigned int AEHPHKBKPJA_TypeDefinitionIndex = 36278;

	class AEHPHKBKPJA : public ::DKFLMHICIJG
	{
	public:
		::OKEBGEBIPNE* BPCDCCAJIMK; // 0x28
		::JJEILFJMLON* FIDJLAKNAJD; // 0x30
		::System::UInt32 DOBKKDIECDO; // 0x38
		::System::Boolean LHECEINIKOA; // 0x3C
		::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode HKEACDBJCOD; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHPHKBKPJA_CTOR_OFFSET))(this);
		}

	};
