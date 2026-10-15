#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
class CDBKODALCAO;
class PEGKGENFIJO;
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { class Object; }

#define IODNOFHGFKC_CLEMCJNBCOJ_OFFSET UNITYSDK_OFFSET(0x165005C0)
#define IODNOFHGFKC_CTOR_OFFSET UNITYSDK_OFFSET(0x165007E0)
#define IODNOFHGFKC_EEFLALJFJCP_OFFSET UNITYSDK_OFFSET(0x16500750)
#define IODNOFHGFKC_EMGKPFFNHGO_OFFSET UNITYSDK_OFFSET(0x16500400)
#define IODNOFHGFKC_FDJGGAEJJKE_OFFSET UNITYSDK_OFFSET(0x16500180)
#define IODNOFHGFKC_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x164FFE40)
#define IODNOFHGFKC_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x164FF8A0)
#define IODNOFHGFKC_LMHCEHAENJN_OFFSET UNITYSDK_OFFSET(0x16500700)
#define IODNOFHGFKC_MHBEJENLMIG_OFFSET UNITYSDK_OFFSET(0x165006B0)
#define IODNOFHGFKC_MOAPBOHIGHM_OFFSET UNITYSDK_OFFSET(0x164FFF60)
#define IODNOFHGFKC_NJALMNLMHEO_OFFSET UNITYSDK_OFFSET(0x164FFAB0)

	class IODNOFHGFKC : public ::LJKHPOHKIIF
	{
	public:
		::CDBKODALCAO* IEGBIPMGBPA; // 0x20
		::Il2CppArray<::RPG::GameCore::PreloadGroupType>* DIEOFFDHIFE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODNOFHGFKC_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODNOFHGFKC_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODNOFHGFKC_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void FDJGGAEJJKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODNOFHGFKC_FDJGGAEJJKE_OFFSET))(this);
		}

		::System::Void EMGKPFFNHGO(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + IODNOFHGFKC_EMGKPFFNHGO_OFFSET))(this, a1);
		}

		::System::Void MHBEJENLMIG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IODNOFHGFKC_MHBEJENLMIG_OFFSET))(this, a1);
		}

		::System::Void LMHCEHAENJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IODNOFHGFKC_LMHCEHAENJN_OFFSET))(this, a1);
		}

		::System::Void NJALMNLMHEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODNOFHGFKC_NJALMNLMHEO_OFFSET))(this);
		}

		::System::Void CLEMCJNBCOJ(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1, ::PEGKGENFIJO* a2, ::PEGKGENFIJO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*, ::PEGKGENFIJO*, ::PEGKGENFIJO*))((::PBYTE)hIl2Cpp + IODNOFHGFKC_CLEMCJNBCOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MOAPBOHIGHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODNOFHGFKC_MOAPBOHIGHM_OFFSET))(this);
		}

		::System::Void EEFLALJFJCP(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + IODNOFHGFKC_EEFLALJFJCP_OFFSET))(this, a1);
		}

	};
