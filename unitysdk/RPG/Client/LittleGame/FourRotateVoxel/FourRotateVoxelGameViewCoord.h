#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_1_OFFSET UNITYSDK_OFFSET(0x3C30B30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_2_OFFSET UNITYSDK_OFFSET(0x1CA08100)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_AIEADKNIADN_OFFSET UNITYSDK_OFFSET(0x3C30B00)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA08B50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C30900)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_CTOR_OFFSET UNITYSDK_OFFSET(0x3C30670)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_DCABIGOIJCN_OFFSET UNITYSDK_OFFSET(0x3C30BC0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CA07640)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C30A50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C309C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CA075B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C309B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GET_DETAILPOSITION_OFFSET UNITYSDK_OFFSET(0x1690)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x3C30650)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_1_OFFSET UNITYSDK_OFFSET(0x3C30AD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_2_OFFSET UNITYSDK_OFFSET(0x1CA08010)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_HAFOLABPGFH_OFFSET UNITYSDK_OFFSET(0x3C30AA0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_IPNKDGIAEOL_1_OFFSET UNITYSDK_OFFSET(0x3C309A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_IPNKDGIAEOL_OFFSET UNITYSDK_OFFSET(0x1CA07330)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_KJGMCDBJPLM_1_OFFSET UNITYSDK_OFFSET(0x1CA07E00)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_KJGMCDBJPLM_OFFSET UNITYSDK_OFFSET(0x3C30A70)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MGFPCIABMNE_OFFSET UNITYSDK_OFFSET(0x3C30BF0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_1_OFFSET UNITYSDK_OFFSET(0x3C30B90)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_2_OFFSET UNITYSDK_OFFSET(0x1CA081F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_MKGCOBMBCFL_OFFSET UNITYSDK_OFFSET(0x3C30B60)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_OLPHFMDKLNJ_OFFSET UNITYSDK_OFFSET(0x3C30CE0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_PODMLDJDABJ_OFFSET UNITYSDK_OFFSET(0x3C30C60)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEVIEWCOORD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C30A60)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	struct alignas(4) FourRotateVoxelGameViewCoord
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::UnityEngine::Vector3 _Position; // 0x1C
		static ::System::Int32* StaticGet_MAX_COORD_NUM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x2520);
		}

		static ::System::Single* StaticGet_VoxelSize()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x2524);
		}

		static ::System::Int32* StaticGet_MAX_COORD_PLUS_ONE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x2528);
		}

		static ::System::Single* StaticGet_HalfVoxelSize()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameViewCoord")->GetStaticField(0x252C);
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
