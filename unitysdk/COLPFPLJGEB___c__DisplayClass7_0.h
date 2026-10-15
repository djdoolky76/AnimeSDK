#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define COLPFPLJGEB___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB6F90)
#define COLPFPLJGEB___C__DISPLAYCLASS7_0__BUILDCATLOCKFOODCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xDCB8290)

inline static constexpr unsigned int COLPFPLJGEB___c__DisplayClass7_0_TypeDefinitionIndex = 76429;

	class COLPFPLJGEB___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* foodIconPath; // 0x10
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLPFPLJGEB___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _BuildCatLockFoodCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLPFPLJGEB___C__DISPLAYCLASS7_0__BUILDCATLOCKFOODCOMMAND_B__0_OFFSET))(this);
		}

	};
