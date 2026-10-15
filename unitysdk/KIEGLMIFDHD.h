#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/System/Object.h"
class CDENJKCGLIB;
class DNFFEFPKDPC;
class FOPMCFANCBP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define KIEGLMIFDHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C901190)
#define KIEGLMIFDHD_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x1C9010D0)
#define KIEGLMIFDHD_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1C901040)

	class KIEGLMIFDHD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::DNFFEFPKDPC*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* PHNLEFPHEJJ; // 0x10
		::UnityEngine::GameObject* DPOACALMDHL; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::CDENJKCGLIB*>* PAHBOBOBKGH; // 0x20
		::FOPMCFANCBP* PBADFMGJPAM; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>*>* OPFONBJKILL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEGLMIFDHD_CTOR_OFFSET))(this);
		}

		::CDENJKCGLIB* PEFLJDOKOIL(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1)
		{
			return ((::CDENJKCGLIB*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType))((::PBYTE)hIl2Cpp + KIEGLMIFDHD_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::CDENJKCGLIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::CDENJKCGLIB*))((::PBYTE)hIl2Cpp + KIEGLMIFDHD_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

	};
