#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JAIHODJEIMI;
class KFBLAAJJHKF;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAIHODJEIMI_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0xB88AC20)
#define JAIHODJEIMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB88BAC0)
#define JAIHODJEIMI_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xB88ABF0)
#define JAIHODJEIMI_EMLCAKJEFLC_OFFSET UNITYSDK_OFFSET(0xB88B9E0)
#define JAIHODJEIMI_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xB88AE80)
#define JAIHODJEIMI_GMNNCNOMEIF_OFFSET UNITYSDK_OFFSET(0xB88ACC0)
#define JAIHODJEIMI_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0xB88AC40)
#define JAIHODJEIMI_IALPIAAMOAL_OFFSET UNITYSDK_OFFSET(0xB88AF70)
#define JAIHODJEIMI_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xB88AC00)
#define JAIHODJEIMI_IOBHCBCHBLF_OFFSET UNITYSDK_OFFSET(0xB88B6E0)
#define JAIHODJEIMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB88AE90)
#define JAIHODJEIMI_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xB88B7D0)
#define JAIHODJEIMI_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0xB88AC60)
#define JAIHODJEIMI_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xB88AB90)
#define JAIHODJEIMI_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xB88ABE0)
#define JAIHODJEIMI_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xB88AF10)

inline static constexpr unsigned int JAIHODJEIMI_TypeDefinitionIndex = 55459;

	class JAIHODJEIMI : public ::System::Object
	{
	public:
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x10
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
		::RPG::GameCore::RtDefenceUnitRow* IBPBJBOKKMF; // 0x20
		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* HNAKNKGOJII; // 0x28
		::RPG::Client::TextID _CharacterName_k__BackingField; // 0x30
		::System::UInt32 IACHHFMCKMC; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_IGOGDDNGCLN_OFFSET))(this);
		}

		::System::String* BJHAIOCHDCL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_BJHAIOCHDCL_OFFSET))(this);
		}

		::System::String* HBLNPAMBJEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_HBLNPAMBJEO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::KFBLAAJJHKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_MDIEKGGLDOM_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_GET_CHARACTERNAME_OFFSET))(this);
		}

		::JAIHODJEIMI* KPJGDHLENIP(::RPG::GameCore::RtDefenceUnitRow* a1, ::System::UInt32 a2)
		{
			return ((::JAIHODJEIMI*(*)(::PVOID, ::RPG::GameCore::RtDefenceUnitRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + JAIHODJEIMI_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JAIHODJEIMI_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void IOBHCBCHBLF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JAIHODJEIMI_IOBHCBCHBLF_OFFSET))(this, a1);
		}

		::System::Void IALPIAAMOAL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JAIHODJEIMI_IALPIAAMOAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + JAIHODJEIMI_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Void GMNNCNOMEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_GMNNCNOMEIF_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* EMLCAKJEFLC()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIHODJEIMI_EMLCAKJEFLC_OFFSET))(this);
		}

	};
