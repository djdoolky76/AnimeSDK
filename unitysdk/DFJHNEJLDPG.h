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

#define DFJHNEJLDPG_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0x1C9F9E10)
#define DFJHNEJLDPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F9E70)
#define DFJHNEJLDPG_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x1C9F9DC0)

inline static constexpr unsigned int DFJHNEJLDPG_TypeDefinitionIndex = 43177;

	class DFJHNEJLDPG : public ::System::Object
	{
	public:
		::INMMPMDELKE* OFHDAHHPNPJ; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* JAGJDMEHJDM; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerBase_1<::DNFFEFPKDPC*>*>* DKMKPJDKHPP; // 0x20
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection LJDHGFECMHJ; // 0x28
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FOCNBOANONM; // 0x2C
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType LINLNNHIBAK; // 0x44
		::System::Int32 MOGHLGBCKFA; // 0x48
		::System::Boolean HNFLBHAALCG; // 0x4C
		::System::Boolean PGMNHIPKCMD; // 0x4D
		::System::Boolean AOCKKNBBKPB; // 0x4E
		::System::Byte _padding0[0x1];
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord GCGIFJAEHLP; // 0x50
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
