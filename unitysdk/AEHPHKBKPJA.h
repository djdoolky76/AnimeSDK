#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKFLMHICIJG.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"
class JJEILFJMLON;
class OKEBGEBIPNE;

#define AEHPHKBKPJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D703430)

inline static constexpr unsigned int AEHPHKBKPJA_TypeDefinitionIndex = 37206;

	class AEHPHKBKPJA : public ::DKFLMHICIJG
	{
	public:
		::JJEILFJMLON* FIDJLAKNAJD; // 0x28
		::OKEBGEBIPNE* BPCDCCAJIMK; // 0x30
		::System::Boolean LHECEINIKOA; // 0x38
		::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode HKEACDBJCOD; // 0x39
		::System::UInt32 DOBKKDIECDO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHPHKBKPJA_CTOR_OFFSET))(this);
		}

	};
