#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CMFFLPBJJKN_CCCMIIGOJGG_OFFSET UNITYSDK_OFFSET(0xE36ED60)
#define CMFFLPBJJKN_CTOR_OFFSET UNITYSDK_OFFSET(0xE36F8A0)
#define CMFFLPBJJKN_DHNCMMAECCE_OFFSET UNITYSDK_OFFSET(0xE36EEC0)
#define CMFFLPBJJKN_DPIIHPNEHJA_OFFSET UNITYSDK_OFFSET(0xE36F7E0)
#define CMFFLPBJJKN_EMGKPFFNHGO_OFFSET UNITYSDK_OFFSET(0xE36F260)
#define CMFFLPBJJKN_EPOLDGPEFPO_OFFSET UNITYSDK_OFFSET(0xE36F700)
#define CMFFLPBJJKN_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xE36E940)
#define CMFFLPBJJKN_GEMKFCFDNDO_1_OFFSET UNITYSDK_OFFSET(0xE36EBD0)
#define CMFFLPBJJKN_GEMKFCFDNDO_2_OFFSET UNITYSDK_OFFSET(0xE36EC90)
#define CMFFLPBJJKN_GEMKFCFDNDO_3_OFFSET UNITYSDK_OFFSET(0xE36E890)
#define CMFFLPBJJKN_GEMKFCFDNDO_OFFSET UNITYSDK_OFFSET(0xE36EA70)
#define CMFFLPBJJKN_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xE36E7A0)
#define CMFFLPBJJKN_HJJLBAKGKLI_OFFSET UNITYSDK_OFFSET(0xE36F3D0)
#define CMFFLPBJJKN_KNMFJCIJDOP_OFFSET UNITYSDK_OFFSET(0xE36EB50)
#define CMFFLPBJJKN_MHBEJENLMIG_OFFSET UNITYSDK_OFFSET(0xE36F540)
#define CMFFLPBJJKN_OFDLKNAJLKP_OFFSET UNITYSDK_OFFSET(0xE36ECF0)
#define CMFFLPBJJKN_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xE36F370)
#define CMFFLPBJJKN_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xE36F310)

inline static constexpr unsigned int CMFFLPBJJKN_TypeDefinitionIndex = 60994;

	class CMFFLPBJJKN : public ::LJKHPOHKIIF
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* GABGMLADLCI; // 0x20
		::RPG::GameCore::EntityTypeMask PPBJNNOMCHA; // 0x28
		::System::Byte _padding0[0x4];
		::System::Boolean AINFEIKOOAA; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 DCMOJFEJNBO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GEMKFCFDNDO(::RPG::GameCore::EntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_GEMKFCFDNDO_OFFSET))(this, a1);
		}

		::System::Void GEMKFCFDNDO_1(::RPG::GameCore::EntityTypeMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_GEMKFCFDNDO_1_OFFSET))(this, a1);
		}

		::System::Void GEMKFCFDNDO_2(::RPG::GameCore::PreloadGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_GEMKFCFDNDO_2_OFFSET))(this, a1);
		}

		::System::Void GEMKFCFDNDO_3(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_GEMKFCFDNDO_3_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OFDLKNAJLKP()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_OFDLKNAJLKP_OFFSET))(this);
		}

		::System::Void CCCMIIGOJGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_CCCMIIGOJGG_OFFSET))(this);
		}

		::System::Void DHNCMMAECCE(::RPG::GameCore::PreloadGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_DHNCMMAECCE_OFFSET))(this, a1);
		}

		::System::Void EMGKPFFNHGO(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_EMGKPFFNHGO_OFFSET))(this, a1);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void HJJLBAKGKLI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_HJJLBAKGKLI_OFFSET))(this, a1);
		}

		::System::Void MHBEJENLMIG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_MHBEJENLMIG_OFFSET))(this, a1);
		}

		::System::Void EPOLDGPEFPO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_EPOLDGPEFPO_OFFSET))(this, a1);
		}

		::System::Void DPIIHPNEHJA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_DPIIHPNEHJA_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 KNMFJCIJDOP(::RPG::GameCore::EntityTypeMask a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CMFFLPBJJKN_KNMFJCIJDOP_OFFSET))(a1);
		}

	};
