#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AENGOKAEEOA;
class ANGGDDJJBKO;
class CMJBLLIHDKP;
class DCKBFBAPJDG;
class KFBLAAJJHKF;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ILBattleAvatarConfigRow; }
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCKBFBAPJDG_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0xE24C3A0)
#define DCKBFBAPJDG_CJDLJMKBNON_OFFSET UNITYSDK_OFFSET(0xE24CB60)
#define DCKBFBAPJDG_CTOR_OFFSET UNITYSDK_OFFSET(0xE24E950)
#define DCKBFBAPJDG_DANJFOLEJAN_OFFSET UNITYSDK_OFFSET(0xE24CB40)
#define DCKBFBAPJDG_DOFPPECLCAO_OFFSET UNITYSDK_OFFSET(0xE24E790)
#define DCKBFBAPJDG_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xE24C370)
#define DCKBFBAPJDG_EMLCAKJEFLC_OFFSET UNITYSDK_OFFSET(0xE24E860)
#define DCKBFBAPJDG_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE24CB70)
#define DCKBFBAPJDG_GMNNCNOMEIF_OFFSET UNITYSDK_OFFSET(0xE24C440)
#define DCKBFBAPJDG_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0xE24C3C0)
#define DCKBFBAPJDG_HOGIKLJMBFB_OFFSET UNITYSDK_OFFSET(0xE24E390)
#define DCKBFBAPJDG_IALPIAAMOAL_OFFSET UNITYSDK_OFFSET(0xE24CF60)
#define DCKBFBAPJDG_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xE24C380)
#define DCKBFBAPJDG_IJFMGKJNOME_OFFSET UNITYSDK_OFFSET(0xE24D5A0)
#define DCKBFBAPJDG_IOBHCBCHBLF_OFFSET UNITYSDK_OFFSET(0xE24D4B0)
#define DCKBFBAPJDG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE24CBA0)
#define DCKBFBAPJDG_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xE24E260)
#define DCKBFBAPJDG_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0xE24C3E0)
#define DCKBFBAPJDG_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xE24C300)
#define DCKBFBAPJDG_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xE24C360)
#define DCKBFBAPJDG_PBLOPPPDMEB_OFFSET UNITYSDK_OFFSET(0xE24CE50)
#define DCKBFBAPJDG_PIPNFFHALNI_OFFSET UNITYSDK_OFFSET(0xE24E0A0)
#define DCKBFBAPJDG_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xE24CF00)

inline static constexpr unsigned int DCKBFBAPJDG_TypeDefinitionIndex = 54205;

	class DCKBFBAPJDG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* HNAKNKGOJII; // 0x10
		::ANGGDDJJBKO* JLIKCCBDEGD; // 0x18
		::RPG::GameCore::ILBattleAvatarConfigRow* IBPBJBOKKMF; // 0x20
		::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* NIEFIMNAHMI; // 0x28
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x30
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* NNDOBIMOFEO; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>* DHIGDLPBPLN; // 0x40
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x48
		::System::UInt32 IACHHFMCKMC; // 0x50
		::System::UInt32 OAIEBAKJKIG; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_IGOGDDNGCLN_OFFSET))(this);
		}

		::System::String* BJHAIOCHDCL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_BJHAIOCHDCL_OFFSET))(this);
		}

		::System::String* HBLNPAMBJEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_HBLNPAMBJEO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::KFBLAAJJHKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_MDIEKGGLDOM_OFFSET))(this);
		}

		::RPG::GameCore::ILBattleCharacterLocation DANJFOLEJAN()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_DANJFOLEJAN_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CJDLJMKBNON()
		{
			return ((::Il2CppArray<::RPG::GameCore::JsonEnum*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_CJDLJMKBNON_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_GET_CHARACTERNAME_OFFSET))(this);
		}

		::DCKBFBAPJDG* KPJGDHLENIP(::RPG::GameCore::ILBattleAvatarConfigRow* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a4, ::AENGOKAEEOA* a5, ::ANGGDDJJBKO* a6)
		{
			return ((::DCKBFBAPJDG*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarConfigRow*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::AENGOKAEEOA*, ::ANGGDDJJBKO*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean PBLOPPPDMEB(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_PBLOPPPDMEB_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void IJFMGKJNOME(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_IJFMGKJNOME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IOBHCBCHBLF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_IOBHCBCHBLF_OFFSET))(this, a1);
		}

		::System::Void IALPIAAMOAL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_IALPIAAMOAL_OFFSET))(this, a1);
		}

		::System::Void PIPNFFHALNI(::CMJBLLIHDKP* a1, ::RPG::GameCore::RtAbilityProperty a2, ::CMJBLLIHDKP* a3, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::CMJBLLIHDKP*, ::RPG::GameCore::RtAbilityProperty, ::CMJBLLIHDKP*, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_PIPNFFHALNI_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint HOGIKLJMBFB(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_HOGIKLJMBFB_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* DOFPPECLCAO(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_DOFPPECLCAO_OFFSET))(this, a1);
		}

		::System::Void GMNNCNOMEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_GMNNCNOMEIF_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* EMLCAKJEFLC()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG_EMLCAKJEFLC_OFFSET))(this);
		}

	};
