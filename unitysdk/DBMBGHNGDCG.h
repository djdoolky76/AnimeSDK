#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFHKAJPFNE;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlock; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }
namespace UnityEngine { class RPGPointCloudGrassBlock; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define DBMBGHNGDCG_BLIFBCCOCBG_OFFSET UNITYSDK_OFFSET(0xE2303E0)
#define DBMBGHNGDCG_CLEAR_OFFSET UNITYSDK_OFFSET(0xE2309F0)
#define DBMBGHNGDCG_CNHNHPCLBGE_OFFSET UNITYSDK_OFFSET(0xE230870)
#define DBMBGHNGDCG_CTOR_OFFSET UNITYSDK_OFFSET(0xE230050)
#define DBMBGHNGDCG_DJJCENLOFNL_OFFSET UNITYSDK_OFFSET(0xE230A60)
#define DBMBGHNGDCG_EMPOHEAAGEM_OFFSET UNITYSDK_OFFSET(0xE230430)
#define DBMBGHNGDCG_FADMCAOKNEP_OFFSET UNITYSDK_OFFSET(0xE230B70)
#define DBMBGHNGDCG_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0xE230C90)
#define DBMBGHNGDCG_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0xE230350)
#define DBMBGHNGDCG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE2302C0)
#define DBMBGHNGDCG_LNPEPBEIABL_OFFSET UNITYSDK_OFFSET(0xE230560)
#define DBMBGHNGDCG_OAAKNEJFBPJ_OFFSET UNITYSDK_OFFSET(0xE230040)

	class DBMBGHNGDCG : public ::System::Object
	{
	public:
		::LJFHKAJPFNE* NFPCBMCGFDD; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IGCOEIBEFDN; // 0x18
		::UnityEngine::RPGPointCloudGrassBlock* NHOEBAPIGKM; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FDEBDPJFENF; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* OECIKJPPOOO; // 0x30
		::System::Collections::Generic::List_1<::System::Byte>* NCOHMMFINEA; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* PHIDMHJOJHE; // 0x40
		::UnityEngine::RPGPointCloudGrassBlockData* JBAMGBLGEBJ; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* GELDIDBCHCC; // 0x50
		::UnityEngine::RPGDensityMapGrassBlockData* CLHOBDAOMIJ; // 0x58
		::UnityEngine::RPGDensityMapGrassBlock* IEHCJNFHECG; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* JEPMBKBLIFC; // 0x68
		::RPG::GameCore::StageLodMapConfig* PBNONFEOHLD; // 0x70
		::System::Collections::Generic::List_1<::System::UInt64>* GKPMBHHPEGF; // 0x78
		::RPG::GameCore::LodConfig* JBBMEJIJPBP; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FPKJNLHKFKK; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* FPHJGLPPBOP; // 0x90
		::System::Byte FCFLPEKEFBD; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* OAAKNEJFBPJ()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_OAAKNEJFBPJ_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LJFHKAJPFNE* a1, ::UnityEngine::RPGPointCloudGrassBlock* a2, ::UnityEngine::RPGPointCloudGrassBlockData* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::GameCore::StageLodMapConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::UnityEngine::RPGPointCloudGrassBlock*, ::UnityEngine::RPGPointCloudGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KPJGDHLENIP_1(::LJFHKAJPFNE* a1, ::UnityEngine::RPGDensityMapGrassBlock* a2, ::UnityEngine::RPGDensityMapGrassBlockData* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::GameCore::StageLodMapConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::UnityEngine::RPGDensityMapGrassBlock*, ::UnityEngine::RPGDensityMapGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BLIFBCCOCBG(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_BLIFBCCOCBG_OFFSET))(this, a1);
		}

		::System::Boolean EMPOHEAAGEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_EMPOHEAAGEM_OFFSET))(this);
		}

		::System::Void LNPEPBEIABL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_LNPEPBEIABL_OFFSET))(this);
		}

		::System::Void CNHNHPCLBGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_CNHNHPCLBGE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_CLEAR_OFFSET))(this);
		}

		::System::Void DJJCENLOFNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_DJJCENLOFNL_OFFSET))(this);
		}

		::System::Void FADMCAOKNEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_FADMCAOKNEP_OFFSET))(this);
		}

		::System::Void IGDIEBODAAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMBGHNGDCG_IGDIEBODAAH_OFFSET))(this);
		}

	};
