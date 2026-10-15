#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
class MMBLENLAFEK;

#define MMBLENLAFEK___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BFAC0)
#define MMBLENLAFEK___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0xB9BFEB0)

inline static constexpr unsigned int MMBLENLAFEK___c__DisplayClass4_0_TypeDefinitionIndex = 76800;

	class MMBLENLAFEK___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::INMMPMDELKE* player; // 0x10
		::MMBLENLAFEK* __4__this; // 0x18
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord targetCoord; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBLENLAFEK___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBLENLAFEK___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET))(this);
		}

	};
