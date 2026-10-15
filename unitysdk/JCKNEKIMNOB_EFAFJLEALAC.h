#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }

#define JCKNEKIMNOB_EFAFJLEALAC_CTOR_OFFSET UNITYSDK_OFFSET(0x165A4DE0)

	class JCKNEKIMNOB_EFAFJLEALAC : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* BNPBNGOACHG; // 0x10
		::System::Single BJMAMHMCOEL; // 0x18
		::System::Boolean PODBDMJEMJP; // 0x1C
		::System::Boolean NGOIPLNIEIN; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKNEKIMNOB_EFAFJLEALAC_CTOR_OFFSET))(this);
		}

	};
