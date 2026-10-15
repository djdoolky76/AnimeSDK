#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define COLPFPLJGEB___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB6310)
#define COLPFPLJGEB___C__DISPLAYCLASS5_0__BUILDCATTARGETLOCKCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xDCB8260)

inline static constexpr unsigned int COLPFPLJGEB___c__DisplayClass5_0_TypeDefinitionIndex = 76428;

	class COLPFPLJGEB___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x10
		::System::UInt32 targetCatConfigID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLPFPLJGEB___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _BuildCatTargetLockCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLPFPLJGEB___C__DISPLAYCLASS5_0__BUILDCATTARGETLOCKCOMMAND_B__0_OFFSET))(this);
		}

	};
