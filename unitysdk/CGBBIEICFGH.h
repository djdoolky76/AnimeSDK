#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CGBBIEICFGH;
class KFBLAAJJHKF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGBBIEICFGH_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0xCC600F0)
#define CGBBIEICFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC604F0)
#define CGBBIEICFGH_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xCC600D0)
#define CGBBIEICFGH_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xCC60110)
#define CGBBIEICFGH_GMNNCNOMEIF_OFFSET UNITYSDK_OFFSET(0xCC60180)
#define CGBBIEICFGH_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0xCC60100)
#define CGBBIEICFGH_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xCC600E0)
#define CGBBIEICFGH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC603A0)
#define CGBBIEICFGH_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xCC604A0)
#define CGBBIEICFGH_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0xCC60120)
#define CGBBIEICFGH_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xCC600B0)
#define CGBBIEICFGH_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xCC600C0)
#define CGBBIEICFGH_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xCC60450)

inline static constexpr unsigned int CGBBIEICFGH_TypeDefinitionIndex = 54067;

	class CGBBIEICFGH : public ::System::Object
	{
	public:
		::System::Object* IBPBJBOKKMF; // 0x10
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x18
		::System::String* NLCHDCHBCAL; // 0x20
		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* HNAKNKGOJII; // 0x28
		::RPG::Client::TextID _CharacterName_k__BackingField; // 0x30
		::System::UInt32 ANOPNMFJLMI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_IGOGDDNGCLN_OFFSET))(this);
		}

		::System::String* BJHAIOCHDCL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_BJHAIOCHDCL_OFFSET))(this);
		}

		::System::String* HBLNPAMBJEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_HBLNPAMBJEO_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_GET_CHARACTERNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::KFBLAAJJHKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_MDIEKGGLDOM_OFFSET))(this);
		}

		::CGBBIEICFGH* KPJGDHLENIP(::System::UInt32 a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::CGBBIEICFGH*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CGBBIEICFGH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CGBBIEICFGH_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CGBBIEICFGH_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Void GMNNCNOMEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBBIEICFGH_GMNNCNOMEIF_OFFSET))(this);
		}

	};
