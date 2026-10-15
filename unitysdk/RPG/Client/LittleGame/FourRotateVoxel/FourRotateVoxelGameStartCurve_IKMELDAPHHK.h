#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_IKMELDAPHHK_CTOR_OFFSET UNITYSDK_OFFSET(0xD465830)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_IKMELDAPHHK_TypeDefinitionIndex = 76842;

	class FourRotateVoxelGameStartCurve_IKMELDAPHHK : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* BBDCBHHPIAC; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* MEFCBNDGIHP; // 0x18
		::System::Single ENNDJOBGOHD; // 0x20
		::System::Single KKEDLMJBCFB; // 0x24
		::System::Boolean KAGICIAJEEA; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single EFFHPBELOPI; // 0x2C
		::System::Single CBKJGLIOCDA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_IKMELDAPHHK_CTOR_OFFSET))(this);
		}

	};
}
