#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
class CDBKODALCAO;
class PEGKGENFIJO;
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { class Object; }

#define IODNOFHGFKC_CLEMCJNBCOJ_OFFSET UNITYSDK_OFFSET(0x1A602420)
#define IODNOFHGFKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A602640)
#define IODNOFHGFKC_EEFLALJFJCP_OFFSET UNITYSDK_OFFSET(0x1A6025B0)
#define IODNOFHGFKC_EMGKPFFNHGO_OFFSET UNITYSDK_OFFSET(0x1A602260)
#define IODNOFHGFKC_FDJGGAEJJKE_OFFSET UNITYSDK_OFFSET(0x1A601FE0)
#define IODNOFHGFKC_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x1A601CA0)
#define IODNOFHGFKC_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x1A601700)
#define IODNOFHGFKC_LMHCEHAENJN_OFFSET UNITYSDK_OFFSET(0x1A602560)
#define IODNOFHGFKC_MHBEJENLMIG_OFFSET UNITYSDK_OFFSET(0x1A602510)
#define IODNOFHGFKC_MOAPBOHIGHM_OFFSET UNITYSDK_OFFSET(0x1A601DC0)
#define IODNOFHGFKC_NJALMNLMHEO_OFFSET UNITYSDK_OFFSET(0x1A601910)

inline static constexpr unsigned int IODNOFHGFKC_TypeDefinitionIndex = 60990;

	class IODNOFHGFKC : public ::LJKHPOHKIIF
	{
	public:
		::Il2CppArray<::RPG::GameCore::PreloadGroupType>* DIEOFFDHIFE; // 0x20
		::CDBKODALCAO* IEGBIPMGBPA; // 0x28
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
