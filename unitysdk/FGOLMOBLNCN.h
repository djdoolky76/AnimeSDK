#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDJKLJGDCID.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class AvatarPropertyRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGOLMOBLNCN_AHFKELHOAGE_OFFSET UNITYSDK_OFFSET(0x1668E9E0)
#define FGOLMOBLNCN_CFGIMKGDPNA_OFFSET UNITYSDK_OFFSET(0x1668E800)
#define FGOLMOBLNCN_CFMAHAFCOHL_OFFSET UNITYSDK_OFFSET(0x1668E960)
#define FGOLMOBLNCN_CGDNBPIENBH_OFFSET UNITYSDK_OFFSET(0x1668E6F0)
#define FGOLMOBLNCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1668F430)
#define FGOLMOBLNCN_DHOCFJDCLLN_OFFSET UNITYSDK_OFFSET(0x1668E910)
#define FGOLMOBLNCN_DJLAJLODKJG_OFFSET UNITYSDK_OFFSET(0x1668F010)
#define FGOLMOBLNCN_FONHIPLPFEH_OFFSET UNITYSDK_OFFSET(0x1668ED80)
#define FGOLMOBLNCN_HBOGAOFFNKN_OFFSET UNITYSDK_OFFSET(0x1668EFA0)
#define FGOLMOBLNCN_IAIMCMJFHOC_OFFSET UNITYSDK_OFFSET(0x1668EC90)
#define FGOLMOBLNCN_IGLNKGDADBL_OFFSET UNITYSDK_OFFSET(0x1668EC20)
#define FGOLMOBLNCN_KENPELGMFLK_OFFSET UNITYSDK_OFFSET(0x1668F140)
#define FGOLMOBLNCN_MHEFHCCECLL_OFFSET UNITYSDK_OFFSET(0x1668EEF0)
#define FGOLMOBLNCN_NJCBHECDING_OFFSET UNITYSDK_OFFSET(0x1668F0F0)
#define FGOLMOBLNCN_OBAKEKLNMAM_OFFSET UNITYSDK_OFFSET(0x1668ECF0)
#define FGOLMOBLNCN_OHGEKNCGOEK_OFFSET UNITYSDK_OFFSET(0x1668EDE0)
#define FGOLMOBLNCN_OLAIKKLDGHP_OFFSET UNITYSDK_OFFSET(0x1668EE40)

inline static constexpr unsigned int FGOLMOBLNCN_TypeDefinitionIndex = 68807;

	class FGOLMOBLNCN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_CTOR_OFFSET))(this);
		}

		::System::Int32 CGDNBPIENBH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_CGDNBPIENBH_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* CFGIMKGDPNA(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_CFGIMKGDPNA_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* DHOCFJDCLLN(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_DHOCFJDCLLN_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* CFMAHAFCOHL(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_CFMAHAFCOHL_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* AHFKELHOAGE(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_AHFKELHOAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType IGLNKGDADBL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_IGLNKGDADBL_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType IAIMCMJFHOC(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_IAIMCMJFHOC_OFFSET))(this, a1);
		}

		::System::Boolean OBAKEKLNMAM(::System::UInt32 a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_OBAKEKLNMAM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint FONHIPLPFEH(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_FONHIPLPFEH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* OHGEKNCGOEK(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_OHGEKNCGOEK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint OLAIKKLDGHP(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::AvatarPropertyType a2, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_OLAIKKLDGHP_OFFSET))(this, a1, a2, a3);
		}

		::System::String* MHEFHCCECLL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_MHEFHCCECLL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID DJLAJLODKJG(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_DJLAJLODKJG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyRow* HBOGAOFFNKN(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AvatarPropertyRow*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_HBOGAOFFNKN_OFFSET))(this, a1);
		}

		::FDJKLJGDCID NJCBHECDING(::RPG::Client::RelicSmartSuit::RankType a1)
		{
			return ((::FDJKLJGDCID(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RankType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_NJCBHECDING_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* KENPELGMFLK(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + FGOLMOBLNCN_KENPELGMFLK_OFFSET))(this, a1);
		}

	};
