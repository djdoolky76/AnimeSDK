#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFBLAAJJHKF;
class PFKMBOGGEPE;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFKMBOGGEPE_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0x16D82E20)
#define PFKMBOGGEPE_CTOR_OFFSET UNITYSDK_OFFSET(0x16D83BA0)
#define PFKMBOGGEPE_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0x16D82DF0)
#define PFKMBOGGEPE_EMLCAKJEFLC_OFFSET UNITYSDK_OFFSET(0x16D83AC0)
#define PFKMBOGGEPE_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x16D83080)
#define PFKMBOGGEPE_GMNNCNOMEIF_OFFSET UNITYSDK_OFFSET(0x16D82EC0)
#define PFKMBOGGEPE_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0x16D82E40)
#define PFKMBOGGEPE_IALPIAAMOAL_OFFSET UNITYSDK_OFFSET(0x16D83170)
#define PFKMBOGGEPE_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0x16D82E00)
#define PFKMBOGGEPE_IOBHCBCHBLF_OFFSET UNITYSDK_OFFSET(0x16D83830)
#define PFKMBOGGEPE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16D83090)
#define PFKMBOGGEPE_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x16D83920)
#define PFKMBOGGEPE_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0x16D82E60)
#define PFKMBOGGEPE_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x16D82D90)
#define PFKMBOGGEPE_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0x16D82DE0)
#define PFKMBOGGEPE_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x16D83110)

inline static constexpr unsigned int PFKMBOGGEPE_TypeDefinitionIndex = 55461;

	class PFKMBOGGEPE : public ::System::Object
	{
	public:
		::RPG::GameCore::RtDefenceUnitRow* IBPBJBOKKMF; // 0x10
		::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x18
		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* HNAKNKGOJII; // 0x20
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x28
		::System::UInt32 IACHHFMCKMC; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _CharacterName_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_IGOGDDNGCLN_OFFSET))(this);
		}

		::System::String* BJHAIOCHDCL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_BJHAIOCHDCL_OFFSET))(this);
		}

		::System::String* HBLNPAMBJEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_HBLNPAMBJEO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::KFBLAAJJHKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_MDIEKGGLDOM_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_GET_CHARACTERNAME_OFFSET))(this);
		}

		::PFKMBOGGEPE* KPJGDHLENIP(::RPG::GameCore::RtDefenceUnitRow* a1, ::System::UInt32 a2)
		{
			return ((::PFKMBOGGEPE*(*)(::PVOID, ::RPG::GameCore::RtDefenceUnitRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void IOBHCBCHBLF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_IOBHCBCHBLF_OFFSET))(this, a1);
		}

		::System::Void IALPIAAMOAL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_IALPIAAMOAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Void GMNNCNOMEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_GMNNCNOMEIF_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* EMLCAKJEFLC()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKMBOGGEPE_EMLCAKJEFLC_OFFSET))(this);
		}

	};
