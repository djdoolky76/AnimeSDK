#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFBLAAJJHKF;
class LKJCFHAEJJE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKJCFHAEJJE_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0xBFEDDB0)
#define LKJCFHAEJJE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEEBA0)
#define LKJCFHAEJJE_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xBFEDD80)
#define LKJCFHAEJJE_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xBFEE050)
#define LKJCFHAEJJE_GMNNCNOMEIF_OFFSET UNITYSDK_OFFSET(0xBFEDE50)
#define LKJCFHAEJJE_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0xBFEDDD0)
#define LKJCFHAEJJE_IALPIAAMOAL_OFFSET UNITYSDK_OFFSET(0xBFEE130)
#define LKJCFHAEJJE_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xBFEDD90)
#define LKJCFHAEJJE_IOBHCBCHBLF_OFFSET UNITYSDK_OFFSET(0xBFEE900)
#define LKJCFHAEJJE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBFEE060)
#define LKJCFHAEJJE_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xBFEE9F0)
#define LKJCFHAEJJE_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0xBFEDDF0)
#define LKJCFHAEJJE_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xBFEDD20)
#define LKJCFHAEJJE_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xBFEDD70)
#define LKJCFHAEJJE_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xBFEE0D0)

inline static constexpr unsigned int LKJCFHAEJJE_TypeDefinitionIndex = 55463;

	class LKJCFHAEJJE : public ::System::Object
	{
	public:
		::RPG::GameCore::RtDefenceUnitRow* IBPBJBOKKMF; // 0x10
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x18
		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* HNAKNKGOJII; // 0x20
		::RPG::Client::TextID _CharacterName_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_IGOGDDNGCLN_OFFSET))(this);
		}

		::System::String* BJHAIOCHDCL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_BJHAIOCHDCL_OFFSET))(this);
		}

		::System::String* HBLNPAMBJEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_HBLNPAMBJEO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::KFBLAAJJHKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_MDIEKGGLDOM_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_GET_CHARACTERNAME_OFFSET))(this);
		}

		::LKJCFHAEJJE* KPJGDHLENIP(::RPG::GameCore::RtDefenceUnitRow* a1, ::System::Object* a2)
		{
			return ((::LKJCFHAEJJE*(*)(::PVOID, ::RPG::GameCore::RtDefenceUnitRow*, ::System::Object*))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void IOBHCBCHBLF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_IOBHCBCHBLF_OFFSET))(this, a1);
		}

		::System::Void IALPIAAMOAL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_IALPIAAMOAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Void GMNNCNOMEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJCFHAEJJE_GMNNCNOMEIF_OFFSET))(this);
		}

	};
