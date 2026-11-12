#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHKJJCNKNLI_AutoAbility.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class PGBLBOJBDGG;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHKJJCNKNLI_AFCOBABPJJI_OFFSET UNITYSDK_OFFSET(0xF958070)
#define DHKJJCNKNLI_CCHAECECCJD_OFFSET UNITYSDK_OFFSET(0xF958340)
#define DHKJJCNKNLI_CDLCGAOMIBH_OFFSET UNITYSDK_OFFSET(0xF955BC0)
#define DHKJJCNKNLI_CECNNNHJGJP_OFFSET UNITYSDK_OFFSET(0xF956CA0)
#define DHKJJCNKNLI_CTOR_OFFSET UNITYSDK_OFFSET(0xF955340)
#define DHKJJCNKNLI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF955580)
#define DHKJJCNKNLI_GILNCJKCPDH_OFFSET UNITYSDK_OFFSET(0xF955480)
#define DHKJJCNKNLI_GOIKPCMAAMA_OFFSET UNITYSDK_OFFSET(0xF957AA0)
#define DHKJJCNKNLI_HHEJNJJAFPM_OFFSET UNITYSDK_OFFSET(0xF957D30)
#define DHKJJCNKNLI_HINMAAIEFOP_OFFSET UNITYSDK_OFFSET(0xF958B30)
#define DHKJJCNKNLI_IGFEHDFINKD_OFFSET UNITYSDK_OFFSET(0xF9565E0)
#define DHKJJCNKNLI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF9553B0)
#define DHKJJCNKNLI_JFKKGKEDMLA_OFFSET UNITYSDK_OFFSET(0xF958570)
#define DHKJJCNKNLI_JHHIIMALHAA_OFFSET UNITYSDK_OFFSET(0xF957970)
#define DHKJJCNKNLI_JKOJPGNKCJN_OFFSET UNITYSDK_OFFSET(0xF9573E0)
#define DHKJJCNKNLI_KOCNGEMANAN_OFFSET UNITYSDK_OFFSET(0xF9575A0)
#define DHKJJCNKNLI_MGINNILEBFB_OFFSET UNITYSDK_OFFSET(0xF956F00)
#define DHKJJCNKNLI_NCKGOCFOJBH_OFFSET UNITYSDK_OFFSET(0xF9568C0)
#define DHKJJCNKNLI_NOFLKALFDJE_OFFSET UNITYSDK_OFFSET(0xF955FF0)
#define DHKJJCNKNLI_OHMINLKGMCL_OFFSET UNITYSDK_OFFSET(0xF9571C0)

inline static constexpr unsigned int DHKJJCNKNLI_TypeDefinitionIndex = 79599;

	class DHKJJCNKNLI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* IAFKBJLIMEK; // 0x10
		::BNLHGENFEHG* PDENFEFCAGN; // 0x18
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x20
		::System::Single BFCBODGGJOD; // 0x28
		::System::Int32 BPGEELIOMND; // 0x2C
		::System::Single OIOEJNFDENG; // 0x30
		::System::Int32 GJLFHJGCFHA; // 0x34
		::System::Void _ctor(::PGBLBOJBDGG* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PGBLBOJBDGG*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_EXECUTE_OFFSET))(this);
		}

		::System::Void GILNCJKCPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_GILNCJKCPDH_OFFSET))(this);
		}

		::System::Void NOFLKALFDJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_NOFLKALFDJE_OFFSET))(this);
		}

		::System::Void CDLCGAOMIBH(::DHKJJCNKNLI_AutoAbility a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHKJJCNKNLI_AutoAbility))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_CDLCGAOMIBH_OFFSET))(this, a1);
		}

		::System::Void NCKGOCFOJBH(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_NCKGOCFOJBH_OFFSET))(this, a1);
		}

		::System::Void IGFEHDFINKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_IGFEHDFINKD_OFFSET))(this);
		}

		::System::Void CECNNNHJGJP(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_CECNNNHJGJP_OFFSET))(this, a1);
		}

		::System::Void JHHIIMALHAA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_JHHIIMALHAA_OFFSET))(this, a1);
		}

		::System::Boolean MGINNILEBFB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_MGINNILEBFB_OFFSET))(this, a1);
		}

		::System::Boolean JKOJPGNKCJN(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_JKOJPGNKCJN_OFFSET))(this, a1);
		}

		::System::Boolean OHMINLKGMCL(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_OHMINLKGMCL_OFFSET))(this, a1);
		}

		::System::Boolean HINMAAIEFOP(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_HINMAAIEFOP_OFFSET))(this, a1);
		}

		::System::Boolean KOCNGEMANAN(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_KOCNGEMANAN_OFFSET))(this, a1);
		}

		::System::Boolean AFCOBABPJJI(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_AFCOBABPJJI_OFFSET))(this, a1);
		}

		::System::Boolean CCHAECECCJD(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_CCHAECECCJD_OFFSET))(this, a1);
		}

		::System::Boolean JFKKGKEDMLA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_JFKKGKEDMLA_OFFSET))(this, a1);
		}

		::System::Boolean HHEJNJJAFPM(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_HHEJNJJAFPM_OFFSET))(this, a1);
		}

		::System::Boolean GOIKPCMAAMA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + DHKJJCNKNLI_GOIKPCMAAMA_OFFSET))(this, a1);
		}

	};
