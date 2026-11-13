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

#define KIEGLMIFDHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A30C260)
#define KIEGLMIFDHD_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x1A30C1A0)
#define KIEGLMIFDHD_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1A30C110)

inline static constexpr unsigned int KIEGLMIFDHD_TypeDefinitionIndex = 44166;

	class KIEGLMIFDHD : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* DPOACALMDHL; // 0x10
		::System::Collections::Generic::Dictionary_2<::DNFFEFPKDPC*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* PHNLEFPHEJJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::CDENJKCGLIB*>* PAHBOBOBKGH; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>*>* OPFONBJKILL; // 0x28
		::FOPMCFANCBP* PBADFMGJPAM; // 0x30
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
