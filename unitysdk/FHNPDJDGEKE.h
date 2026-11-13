#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicAffixType.h"
#include "unitysdk/System/Object.h"
class CENEJCKEFHJ;
class FHNPDJDGEKE;
class JDALBFCHGNK;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicShowPropertyData; }
namespace RPG::Client::RelicSmartSuit { class MainPropertyMatchChecker; }
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }
namespace RPG::GameCore { class RelicSubAffixAvatarValueRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHNPDJDGEKE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x197ED310)
#define FHNPDJDGEKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x197EE700)
#define FHNPDJDGEKE_CTOR_OFFSET UNITYSDK_OFFSET(0x197ED3A0)
#define FHNPDJDGEKE_DPLIJOIDNIJ_OFFSET UNITYSDK_OFFSET(0x197EDFC0)
#define FHNPDJDGEKE_EIPANLOJAJA_OFFSET UNITYSDK_OFFSET(0x197EE360)
#define FHNPDJDGEKE_EPILGILCEAP_OFFSET UNITYSDK_OFFSET(0x197ED680)
#define FHNPDJDGEKE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x197ED300)
#define FHNPDJDGEKE_HDEFFKOLEEN_OFFSET UNITYSDK_OFFSET(0x197ED830)
#define FHNPDJDGEKE_HFGGDILEBFG_OFFSET UNITYSDK_OFFSET(0x197EDF10)
#define FHNPDJDGEKE_KAOGGMCEEPI_OFFSET UNITYSDK_OFFSET(0x197EE0B0)
#define FHNPDJDGEKE_KCOKMKMIKKA_OFFSET UNITYSDK_OFFSET(0x197EE2D0)
#define FHNPDJDGEKE_LGKIDNPKEIC_OFFSET UNITYSDK_OFFSET(0x197EDA40)
#define FHNPDJDGEKE_MADGHBKMIKA_1_OFFSET UNITYSDK_OFFSET(0x197EDC40)
#define FHNPDJDGEKE_MADGHBKMIKA_OFFSET UNITYSDK_OFFSET(0x197ED7D0)
#define FHNPDJDGEKE_OBKAHOIEJDJ_OFFSET UNITYSDK_OFFSET(0x197EE6B0)
#define FHNPDJDGEKE_OIPKFCKJENO_OFFSET UNITYSDK_OFFSET(0x197EE5D0)
#define FHNPDJDGEKE_PNJPDNAFGHJ_OFFSET UNITYSDK_OFFSET(0x197EE450)

inline static constexpr unsigned int FHNPDJDGEKE_TypeDefinitionIndex = 76578;

	class FHNPDJDGEKE : public ::System::Object
	{
	public:
		::CENEJCKEFHJ* GANLOCFFMEF; // 0x10
		::RPG::GameCore::RelicMainAffixAvatarValueRow* NFGBGNPFFOC; // 0x18
		::RPG::GameCore::RelicSubAffixAvatarValueRow* LKODOEBPKKA; // 0x20
		::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* FDAJDAPOCCN; // 0x28
		::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig _Config_k__BackingField; // 0x30
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>** StaticGet_CACFFENNFHD()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>**)UnitySDK::FromName("", "FHNPDJDGEKE")->GetStaticField(0x60AF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>** StaticGet_IBNAIAKECIE()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("", "FHNPDJDGEKE")->GetStaticField(0x60AF8);
		}

		::System::Void _ctor(::CENEJCKEFHJ* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
		{
			return ((::System::Void(*)(::PVOID, ::CENEJCKEFHJ*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNPDJDGEKE_CCTOR_OFFSET))();
		}

		::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig get_Config()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_GET_CONFIG_OFFSET))(this);
		}

		static ::FHNPDJDGEKE* BPLPBPMEODA(::CENEJCKEFHJ* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
		{
			return ((::FHNPDJDGEKE*(*)(::CENEJCKEFHJ*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::JDALBFCHGNK* EPILGILCEAP(::RPG::Client::RelicItemData* a1)
		{
			return ((::JDALBFCHGNK*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_EPILGILCEAP_OFFSET))(this, a1);
		}

		::System::Single MADGHBKMIKA(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_MADGHBKMIKA_OFFSET))(this, a1);
		}

		::System::Single MADGHBKMIKA_1(::RPG::GameCore::AvatarPropertyType a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_MADGHBKMIKA_1_OFFSET))(this, a1, a2);
		}

		::System::Single DPLIJOIDNIJ(::RPG::GameCore::RelicAffixType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_DPLIJOIDNIJ_OFFSET))(this, a1);
		}

		::System::Single HDEFFKOLEEN(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_HDEFFKOLEEN_OFFSET))(this, a1);
		}

		::System::Single KCOKMKMIKKA(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_KCOKMKMIKKA_OFFSET))(this, a1, a2);
		}

		::System::Single EIPANLOJAJA(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_EIPANLOJAJA_OFFSET))(this, a1, a2);
		}

		::System::Single PNJPDNAFGHJ(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_PNJPDNAFGHJ_OFFSET))(this, a1);
		}

		::System::Single OIPKFCKJENO(::RPG::GameCore::RelicAffixType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_OIPKFCKJENO_OFFSET))(this, a1);
		}

		::System::Boolean OBKAHOIEJDJ(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_OBKAHOIEJDJ_OFFSET))(this, a1);
		}

		::System::UInt32 HFGGDILEBFG(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_HFGGDILEBFG_OFFSET))(this, a1);
		}

		::System::Single KAOGGMCEEPI(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_KAOGGMCEEPI_OFFSET))(this, a1);
		}

		::System::Single LGKIDNPKEIC(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + FHNPDJDGEKE_LGKIDNPKEIC_OFFSET))(this, a1);
		}

	};
