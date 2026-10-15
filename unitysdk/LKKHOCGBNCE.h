#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
class EKFMIDBJDIA;
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKKHOCGBNCE_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xB752FC0)
#define LKKHOCGBNCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB753CF0)
#define LKKHOCGBNCE_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB752F70)
#define LKKHOCGBNCE_DLCMFFMNAOB_OFFSET UNITYSDK_OFFSET(0xB753B00)
#define LKKHOCGBNCE_EMGKPFFNHGO_OFFSET UNITYSDK_OFFSET(0xB7539E0)
#define LKKHOCGBNCE_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xB753830)
#define LKKHOCGBNCE_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xB753200)
#define LKKHOCGBNCE_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xB753990)
#define LKKHOCGBNCE_KFADIFMHFKO_OFFSET UNITYSDK_OFFSET(0xB753B90)
#define LKKHOCGBNCE_NMBINJBMFCA_OFFSET UNITYSDK_OFFSET(0xB753C50)
#define LKKHOCGBNCE_OMIBCMMNJDG_OFFSET UNITYSDK_OFFSET(0xB753430)

	class LKKHOCGBNCE : public ::LJKHPOHKIIF
	{
	public:
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* JNCEELOJLOM; // 0x28
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x30
		::System::Int32 HCIGMLFDHDK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void EMGKPFFNHGO(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_EMGKPFFNHGO_OFFSET))(this, a1);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void OMIBCMMNJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_OMIBCMMNJDG_OFFSET))(this);
		}

		::System::Void DLCMFFMNAOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_DLCMFFMNAOB_OFFSET))(this, a1);
		}

		::System::Void KFADIFMHFKO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_KFADIFMHFKO_OFFSET))(this, a1);
		}

		::System::Void NMBINJBMFCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKKHOCGBNCE_NMBINJBMFCA_OFFSET))(this, a1);
		}

	};
