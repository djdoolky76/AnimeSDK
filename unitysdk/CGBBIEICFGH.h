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

#define CGBBIEICFGH_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0xCC655C0)
#define CGBBIEICFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC659C0)
#define CGBBIEICFGH_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xCC655A0)
#define CGBBIEICFGH_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xCC655E0)
#define CGBBIEICFGH_GMNNCNOMEIF_OFFSET UNITYSDK_OFFSET(0xCC65650)
#define CGBBIEICFGH_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0xCC655D0)
#define CGBBIEICFGH_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xCC655B0)
#define CGBBIEICFGH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC65870)
#define CGBBIEICFGH_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xCC65970)
#define CGBBIEICFGH_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0xCC655F0)
#define CGBBIEICFGH_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xCC65580)
#define CGBBIEICFGH_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xCC65590)
#define CGBBIEICFGH_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xCC65920)

inline static constexpr unsigned int CGBBIEICFGH_TypeDefinitionIndex = 54067;

	class CGBBIEICFGH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* HNAKNKGOJII; // 0x10
		::System::String* NLCHDCHBCAL; // 0x18
		::System::Object* IBPBJBOKKMF; // 0x20
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x28
		::System::UInt32 ANOPNMFJLMI; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _CharacterName_k__BackingField; // 0x38
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
