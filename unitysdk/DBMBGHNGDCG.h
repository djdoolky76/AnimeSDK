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

#define DBMBGHNGDCG_BLIFBCCOCBG_OFFSET UNITYSDK_OFFSET(0xE228C00)
#define DBMBGHNGDCG_CLEAR_OFFSET UNITYSDK_OFFSET(0xE229210)
#define DBMBGHNGDCG_CNHNHPCLBGE_OFFSET UNITYSDK_OFFSET(0xE229090)
#define DBMBGHNGDCG_CTOR_OFFSET UNITYSDK_OFFSET(0xE228870)
#define DBMBGHNGDCG_DJJCENLOFNL_OFFSET UNITYSDK_OFFSET(0xE229290)
#define DBMBGHNGDCG_EMPOHEAAGEM_OFFSET UNITYSDK_OFFSET(0xE228C50)
#define DBMBGHNGDCG_FADMCAOKNEP_OFFSET UNITYSDK_OFFSET(0xE2293A0)
#define DBMBGHNGDCG_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0xE2294C0)
#define DBMBGHNGDCG_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0xE228B70)
#define DBMBGHNGDCG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE228AE0)
#define DBMBGHNGDCG_LNPEPBEIABL_OFFSET UNITYSDK_OFFSET(0xE228D80)
#define DBMBGHNGDCG_OAAKNEJFBPJ_OFFSET UNITYSDK_OFFSET(0xE228860)

inline static constexpr unsigned int DBMBGHNGDCG_TypeDefinitionIndex = 73923;

	class DBMBGHNGDCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FDEBDPJFENF; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IGCOEIBEFDN; // 0x18
		::UnityEngine::RPGDensityMapGrassBlockData* CLHOBDAOMIJ; // 0x20
		::LJFHKAJPFNE* NFPCBMCGFDD; // 0x28
		::UnityEngine::RPGPointCloudGrassBlock* NHOEBAPIGKM; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FPKJNLHKFKK; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* FPHJGLPPBOP; // 0x40
		::UnityEngine::RPGDensityMapGrassBlock* IEHCJNFHECG; // 0x48
		::RPG::GameCore::LodConfig* JBBMEJIJPBP; // 0x50
		::System::Collections::Generic::List_1<::System::Byte>* NCOHMMFINEA; // 0x58
		::UnityEngine::RPGPointCloudGrassBlockData* JBAMGBLGEBJ; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* GELDIDBCHCC; // 0x68
		::System::Collections::Generic::List_1<::System::UInt64>* GKPMBHHPEGF; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* OECIKJPPOOO; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* JEPMBKBLIFC; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* PHIDMHJOJHE; // 0x88
		::RPG::GameCore::StageLodMapConfig* PBNONFEOHLD; // 0x90
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
