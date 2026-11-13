#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define NHGNBMFAINF_ALIGJKCICHG_OFFSET UNITYSDK_OFFSET(0x14895810)
#define NHGNBMFAINF_BGFGBADLKCJ_OFFSET UNITYSDK_OFFSET(0x14895B30)
#define NHGNBMFAINF_CCTOR_OFFSET UNITYSDK_OFFSET(0x14895BA0)
#define NHGNBMFAINF_GPDOEHKMLOK_OFFSET UNITYSDK_OFFSET(0x14895950)
#define NHGNBMFAINF_MJDEFKGACDG_OFFSET UNITYSDK_OFFSET(0x14895AB0)

inline static constexpr unsigned int NHGNBMFAINF_TypeDefinitionIndex = 81527;

	class NHGNBMFAINF : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2Int* StaticGet_BMFIPKPLLJM()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "NHGNBMFAINF")->GetStaticField(0xBF20);
		}

		static ::UnityEngine::Vector2Int* StaticGet_BBNMBHNPIDM()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "NHGNBMFAINF")->GetStaticField(0xBF28);
		}

		static ::UnityEngine::Vector2Int* StaticGet_JBGHFDAKJDD()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "NHGNBMFAINF")->GetStaticField(0xBF30);
		}

		static ::System::Int32* StaticGet_AHLHICBECGN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NHGNBMFAINF")->GetStaticField(0xBF38);
		}

		static ::UnityEngine::Vector2Int* StaticGet_MEEGDBLPJHO()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "NHGNBMFAINF")->GetStaticField(0xBF3C);
		}

		static ::UnityEngine::Vector2Int* StaticGet_MMEEICBJGBO()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "NHGNBMFAINF")->GetStaticField(0xBF44);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGNBMFAINF_CCTOR_OFFSET))();
		}

		static ::System::Void ALIGJKCICHG(::RPG::Client::Prop::ChessDirection a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::ChessDirection, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHGNBMFAINF_ALIGJKCICHG_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2Int GPDOEHKMLOK(::RPG::Client::Prop::BlockPuzzleLogicFourDirection a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + NHGNBMFAINF_GPDOEHKMLOK_OFFSET))(a1);
		}

		static ::RPG::Client::Prop::BlockPuzzleLogicFourDirection MJDEFKGACDG(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::Prop::BlockPuzzleLogicFourDirection(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + NHGNBMFAINF_MJDEFKGACDG_OFFSET))(a1);
		}

		static ::System::Boolean BGFGBADLKCJ(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + NHGNBMFAINF_BGFGBADLKCJ_OFFSET))(a1, a2, a3);
		}

	};
