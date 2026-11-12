#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleAssetPreload; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { class String; }
namespace System { class Type; }

#define LJKHPOHKIIF_AGABOKGBIED_OFFSET UNITYSDK_OFFSET(0xBFB99A0)
#define LJKHPOHKIIF_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xBFB9760)
#define LJKHPOHKIIF_CBPLFKKHMDB_OFFSET UNITYSDK_OFFSET(0xBFB9480)
#define LJKHPOHKIIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB99B0)
#define LJKHPOHKIIF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xBFB94E0)
#define LJKHPOHKIIF_EMGKPFFNHGO_OFFSET UNITYSDK_OFFSET(0xBFB96C0)
#define LJKHPOHKIIF_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xBFB95F0)
#define LJKHPOHKIIF_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xBFB95B0)
#define LJKHPOHKIIF_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xBFB9630)
#define LJKHPOHKIIF_IBBCIGABIAG_OFFSET UNITYSDK_OFFSET(0xBFB9670)
#define LJKHPOHKIIF_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xBFB9370)
#define LJKHPOHKIIF_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xBFB9980)
#define LJKHPOHKIIF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBFB92B0)
#define LJKHPOHKIIF_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xBFB9570)
#define LJKHPOHKIIF_OIJPAAPDGJH_OFFSET UNITYSDK_OFFSET(0xBFB9710)
#define LJKHPOHKIIF_PFCKLEMPAAD_OFFSET UNITYSDK_OFFSET(0xBFB9990)

inline static constexpr unsigned int LJKHPOHKIIF_TypeDefinitionIndex = 60981;

	class LJKHPOHKIIF : public ::System::Object
	{
	public:
		::RPG::Client::BattleAssetPreload* CFKHNPGEAJA; // 0x10
		::System::Boolean IDBHEIBEGBA; // 0x18
		::System::Boolean FMNEEONAMNO; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::BattleAssetPreload* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload*))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void IBBCIGABIAG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_IBBCIGABIAG_OFFSET))(this, a1, a2);
		}

		::System::Void EMGKPFFNHGO(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_EMGKPFFNHGO_OFFSET))(this, a1);
		}

		::System::Void OIJPAAPDGJH(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_OIJPAAPDGJH_OFFSET))(this, a1);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean PFCKLEMPAAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_PFCKLEMPAAD_OFFSET))(this);
		}

		::System::Void CBPLFKKHMDB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_CBPLFKKHMDB_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* AGABOKGBIED()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHPOHKIIF_AGABOKGBIED_OFFSET))(this);
		}

	};
