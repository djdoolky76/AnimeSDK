#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCEBAMHOOJM.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"
class HIOGHIDKJMC;
class HJAGOKIHCLK;

#define JLNOLMNPIGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D8410)

inline static constexpr unsigned int JLNOLMNPIGN_TypeDefinitionIndex = 36272;

	class JLNOLMNPIGN : public ::NCEBAMHOOJM
	{
	public:
		::HIOGHIDKJMC* BPCDCCAJIMK; // 0x28
		::HJAGOKIHCLK* FIDJLAKNAJD; // 0x30
		::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode HKEACDBJCOD; // 0x38
		::System::UInt32 DOBKKDIECDO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNOLMNPIGN_CTOR_OFFSET))(this);
		}

	};
