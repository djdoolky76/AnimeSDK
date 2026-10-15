#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/System/Object.h"
class DNFFEFPKDPC;
class INMMPMDELKE;
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayerBase_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFJHNEJLDPG_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0x1CA284C0)
#define DFJHNEJLDPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA28520)
#define DFJHNEJLDPG_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x1CA28470)

	class DFJHNEJLDPG : public ::System::Object
	{
	public:
		::INMMPMDELKE* OFHDAHHPNPJ; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerBase_1<::DNFFEFPKDPC*>*>* DKMKPJDKHPP; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* JAGJDMEHJDM; // 0x20
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection LJDHGFECMHJ; // 0x28
		::System::Int32 MOGHLGBCKFA; // 0x2C
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType LINLNNHIBAK; // 0x30
		::System::Boolean AOCKKNBBKPB; // 0x34
		::System::Boolean HNFLBHAALCG; // 0x35
		::System::Boolean PGMNHIPKCMD; // 0x36
		::System::Byte _padding0[0x1];
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord GCGIFJAEHLP; // 0x38
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FOCNBOANONM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNEJLDPG_CTOR_OFFSET))(this);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNEJLDPG_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Void APLLCIPBJFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFJHNEJLDPG_APLLCIPBJFH_OFFSET))(this, a1);
		}

	};
