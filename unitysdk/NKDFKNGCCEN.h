#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFBLAAJJHKF;
class NKDFKNGCCEN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ILBattleMonsterConfigRow; }
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class ILEliteGroupConfigRow; }
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKDFKNGCCEN_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0xBC2AC40)
#define NKDFKNGCCEN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2C660)
#define NKDFKNGCCEN_DANJFOLEJAN_OFFSET UNITYSDK_OFFSET(0xBC2AC80)
#define NKDFKNGCCEN_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xBC2AC10)
#define NKDFKNGCCEN_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xBC2ACF0)
#define NKDFKNGCCEN_GMNNCNOMEIF_OFFSET UNITYSDK_OFFSET(0xBC2BFE0)
#define NKDFKNGCCEN_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0xBC2AC60)
#define NKDFKNGCCEN_IALPIAAMOAL_OFFSET UNITYSDK_OFFSET(0xBC2B580)
#define NKDFKNGCCEN_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xBC2AC20)
#define NKDFKNGCCEN_IOBHCBCHBLF_OFFSET UNITYSDK_OFFSET(0xBC2B110)
#define NKDFKNGCCEN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC2AD20)
#define NKDFKNGCCEN_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xBC2BCA0)
#define NKDFKNGCCEN_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0xBC2AC90)
#define NKDFKNGCCEN_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xBC2ABB0)
#define NKDFKNGCCEN_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xBC2AC00)
#define NKDFKNGCCEN_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xBC2ADF0)

inline static constexpr unsigned int NKDFKNGCCEN_TypeDefinitionIndex = 54212;

	class NKDFKNGCCEN : public ::System::Object
	{
	public:
		::RPG::GameCore::ILBattleMonsterConfigRow* IBPBJBOKKMF; // 0x10
		::RPG::GameCore::ILBattleStageConfigRow* HIEEEPAGOCI; // 0x18
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x20
		::RPG::GameCore::ILHardLevelGroupConfigRow* NMKMPHMNJDE; // 0x28
		::RPG::GameCore::ILEliteGroupConfigRow* KGJNIDHBIBA; // 0x30
		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* HNAKNKGOJII; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_IGOGDDNGCLN_OFFSET))(this);
		}

		::System::String* BJHAIOCHDCL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_BJHAIOCHDCL_OFFSET))(this);
		}

		::System::String* HBLNPAMBJEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_HBLNPAMBJEO_OFFSET))(this);
		}

		::RPG::GameCore::ILBattleCharacterLocation DANJFOLEJAN()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_DANJFOLEJAN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::KFBLAAJJHKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_MDIEKGGLDOM_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_GET_CHARACTERNAME_OFFSET))(this);
		}

		::NKDFKNGCCEN* KPJGDHLENIP(::RPG::GameCore::ILBattleMonsterConfigRow* a1, ::RPG::GameCore::ILBattleStageConfigRow* a2)
		{
			return ((::NKDFKNGCCEN*(*)(::PVOID, ::RPG::GameCore::ILBattleMonsterConfigRow*, ::RPG::GameCore::ILBattleStageConfigRow*))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void IOBHCBCHBLF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_IOBHCBCHBLF_OFFSET))(this, a1);
		}

		::System::Void IALPIAAMOAL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_IALPIAAMOAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Void GMNNCNOMEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDFKNGCCEN_GMNNCNOMEIF_OFFSET))(this);
		}

	};
