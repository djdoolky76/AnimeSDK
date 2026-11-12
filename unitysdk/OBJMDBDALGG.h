#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HCAAKJLECEH;
class NGKDIJMICHI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define OBJMDBDALGG_AAMJHMOPNFG_OFFSET UNITYSDK_OFFSET(0xC64E380)
#define OBJMDBDALGG_AMKHLBFNEGA_OFFSET UNITYSDK_OFFSET(0xC64EAD0)
#define OBJMDBDALGG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC64EB90)
#define OBJMDBDALGG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC64EEB0)
#define OBJMDBDALGG_CBFGIAJEBHG_OFFSET UNITYSDK_OFFSET(0xC64E6E0)
#define OBJMDBDALGG_CTOR_OFFSET UNITYSDK_OFFSET(0xC64F190)
#define OBJMDBDALGG_DJDONLHHKCI_OFFSET UNITYSDK_OFFSET(0xC64DF90)
#define OBJMDBDALGG_ECIHOGLPGMF_OFFSET UNITYSDK_OFFSET(0xC64E210)
#define OBJMDBDALGG_EENPPNJODFB_OFFSET UNITYSDK_OFFSET(0xC64DE30)
#define OBJMDBDALGG_FAEHNJHEPBO_OFFSET UNITYSDK_OFFSET(0xC64E8D0)
#define OBJMDBDALGG_GLJHJIDOJKG_OFFSET UNITYSDK_OFFSET(0xC64DEC0)
#define OBJMDBDALGG_HDBKBJDIILI_OFFSET UNITYSDK_OFFSET(0xC64E9D0)
#define OBJMDBDALGG_IJLBCHKOFHK_OFFSET UNITYSDK_OFFSET(0xC64E5B0)
#define OBJMDBDALGG_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xC64DDE0)
#define OBJMDBDALGG_JNEGKCHDKAI_OFFSET UNITYSDK_OFFSET(0xC64E160)
#define OBJMDBDALGG_MELODKLFAKB_OFFSET UNITYSDK_OFFSET(0xC64DF20)
#define OBJMDBDALGG_MJIKDLADJLO_OFFSET UNITYSDK_OFFSET(0xC64E540)
#define OBJMDBDALGG_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0xC64E7F0)
#define OBJMDBDALGG_PDMOFKAEOOO_OFFSET UNITYSDK_OFFSET(0xC64E000)

inline static constexpr unsigned int OBJMDBDALGG_TypeDefinitionIndex = 73559;

	class OBJMDBDALGG : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x60
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NGKDIJMICHI*>* HIIMAAOGHPE; // 0x70
		::System::Collections::Generic::Stack_1<::NGKDIJMICHI*>* CFBNIPBJEFF; // 0x78
		// static const ::System::Object JDGCGKDLKEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMDBDALGG_CTOR_OFFSET))(this);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void GLJHJIDOJKG(::RPG::GameCore::LevelEntityEscape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_GLJHJIDOJKG_OFFSET))(this, a1);
		}

		::System::Void MELODKLFAKB(::HCAAKJLECEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCAAKJLECEH*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_MELODKLFAKB_OFFSET))(this, a1);
		}

		::System::Void DJDONLHHKCI(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_DJDONLHHKCI_OFFSET))(this, a1);
		}

		::System::Void JNEGKCHDKAI(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_JNEGKCHDKAI_OFFSET))(this, a1);
		}

		::System::Void EENPPNJODFB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_EENPPNJODFB_OFFSET))(this, a1);
		}

		::System::Void AAMJHMOPNFG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_AAMJHMOPNFG_OFFSET))(this, a1);
		}

		::System::Void PDMOFKAEOOO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_PDMOFKAEOOO_OFFSET))(this, a1);
		}

		::NGKDIJMICHI* MJIKDLADJLO()
		{
			return ((::NGKDIJMICHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMDBDALGG_MJIKDLADJLO_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* IJLBCHKOFHK()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMDBDALGG_IJLBCHKOFHK_OFFSET))(this);
		}

		::RPG::GameCore::LevelUIComponent* ECIHOGLPGMF()
		{
			return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMDBDALGG_ECIHOGLPGMF_OFFSET))(this);
		}

		::System::Void CBFGIAJEBHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_CBFGIAJEBHG_OFFSET))(this, a1);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void FAEHNJHEPBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_FAEHNJHEPBO_OFFSET))(this, a1);
		}

		::System::Void HDBKBJDIILI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_HDBKBJDIILI_OFFSET))(this, a1);
		}

		::System::Void AMKHLBFNEGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJMDBDALGG_AMKHLBFNEGA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMDBDALGG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMDBDALGG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
