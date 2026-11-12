#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_1_OFFSET UNITYSDK_OFFSET(0x3E7FA70)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_2_OFFSET UNITYSDK_OFFSET(0x1DBCB830)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_OFFSET UNITYSDK_OFFSET(0x3E7FA40)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBCC280)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E7F840)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CTOR_OFFSET UNITYSDK_OFFSET(0x3E7F5B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_DCABIGOIJCN_OFFSET UNITYSDK_OFFSET(0x3E7FB00)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DBCAD70)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E7F990)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E7F900)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DBCACE0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E7F8F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GET_DETAILPOSITION_OFFSET UNITYSDK_OFFSET(0x1690)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x3E7F590)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_1_OFFSET UNITYSDK_OFFSET(0x3E7FA10)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_2_OFFSET UNITYSDK_OFFSET(0x1DBCB740)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_OFFSET UNITYSDK_OFFSET(0x3E7F9E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_IPNKDGIAEOL_1_OFFSET UNITYSDK_OFFSET(0x3E7F8E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_IPNKDGIAEOL_OFFSET UNITYSDK_OFFSET(0x1DBCAA60)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_KJGMCDBJPLM_1_OFFSET UNITYSDK_OFFSET(0x1DBCB530)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_KJGMCDBJPLM_OFFSET UNITYSDK_OFFSET(0x3E7F9B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MGFPCIABMNE_OFFSET UNITYSDK_OFFSET(0x3E7FB30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_1_OFFSET UNITYSDK_OFFSET(0x3E7FAD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_2_OFFSET UNITYSDK_OFFSET(0x1DBCB920)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_OFFSET UNITYSDK_OFFSET(0x3E7FAA0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_OLPHFMDKLNJ_OFFSET UNITYSDK_OFFSET(0x3E7FC20)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_PODMLDJDABJ_OFFSET UNITYSDK_OFFSET(0x3E7FBA0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E7F9A0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameViewCoord_TypeDefinitionIndex = 44150;

	struct alignas(4) FourRotateVoxelGameViewCoord
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::UnityEngine::Vector3 _Position; // 0x1C
		static ::System::Single* StaticGet_HalfVoxelSize()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x14F0);
		}

		static ::System::Int32* StaticGet_MAX_COORD_NUM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x14F4);
		}

		static ::System::Single* StaticGet_VoxelSize()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x14F8);
		}

		static ::System::Int32* StaticGet_MAX_COORD_PLUS_ONE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x14FC);
		}

		// static const ::System::Object EPS; // 0x0
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DetailPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GET_DETAILPOSITION_OFFSET))(this);
		}

		/*
		static ::System::Int32 IPNKDGIAEOL(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Int32(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_IPNKDGIAEOL_OFFSET))(a1);
		}
		*/

		::System::Int32 IPNKDGIAEOL_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_IPNKDGIAEOL_1_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_EQUALS_OFFSET))(this, a1);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_TOSTRING_OFFSET))(this);
		}

		::System::Single KJGMCDBJPLM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_KJGMCDBJPLM_OFFSET))(this, a1);
		}

		static ::System::Single KJGMCDBJPLM_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_KJGMCDBJPLM_1_OFFSET))(a1, a2);
		}

		/*
		::System::Single HAFOLABPGFH(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_OFFSET))(this, a1);
		}
		*/

		::System::Single HAFOLABPGFH_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_1_OFFSET))(this, a1);
		}

		static ::System::Single HAFOLABPGFH_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_2_OFFSET))(a1, a2);
		}

		/*
		::System::Single AIEADKNIADN(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_OFFSET))(this, a1);
		}
		*/

		::System::Single AIEADKNIADN_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_1_OFFSET))(this, a1);
		}

		static ::System::Single AIEADKNIADN_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_2_OFFSET))(a1, a2);
		}

		/*
		::System::Single MKGCOBMBCFL(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_OFFSET))(this, a1);
		}
		*/

		::System::Single MKGCOBMBCFL_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_1_OFFSET))(this, a1);
		}

		static ::System::Single MKGCOBMBCFL_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_2_OFFSET))(a1, a2);
		}

		/*
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord DCABIGOIJCN(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_DCABIGOIJCN_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord MGFPCIABMNE()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MGFPCIABMNE_OFFSET))(this);
		}
		*/

		/*
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord PODMLDJDABJ()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_PODMLDJDABJ_OFFSET))(this);
		}
		*/

		/*
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord OLPHFMDKLNJ()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_OLPHFMDKLNJ_OFFSET))(this);
		}
		*/

	};
}
