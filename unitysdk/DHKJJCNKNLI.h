#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHKJJCNKNLI_AutoAbility.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class PGBLBOJBDGG;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHKJJCNKNLI_AFCOBABPJJI_OFFSET UNITYSDK_OFFSET(0x18EA7650)
#define DHKJJCNKNLI_CCHAECECCJD_OFFSET UNITYSDK_OFFSET(0x18EA7910)
#define DHKJJCNKNLI_CDLCGAOMIBH_OFFSET UNITYSDK_OFFSET(0x18EA51A0)
#define DHKJJCNKNLI_CECNNNHJGJP_OFFSET UNITYSDK_OFFSET(0x18EA6280)
#define DHKJJCNKNLI_CTOR_OFFSET UNITYSDK_OFFSET(0x18EA4920)
#define DHKJJCNKNLI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18EA4B60)
#define DHKJJCNKNLI_GILNCJKCPDH_OFFSET UNITYSDK_OFFSET(0x18EA4A60)
#define DHKJJCNKNLI_GOIKPCMAAMA_OFFSET UNITYSDK_OFFSET(0x18EA7080)
#define DHKJJCNKNLI_HHEJNJJAFPM_OFFSET UNITYSDK_OFFSET(0x18EA7310)
#define DHKJJCNKNLI_HINMAAIEFOP_OFFSET UNITYSDK_OFFSET(0x18EA80F0)
#define DHKJJCNKNLI_IGFEHDFINKD_OFFSET UNITYSDK_OFFSET(0x18EA5BC0)
#define DHKJJCNKNLI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18EA4990)
#define DHKJJCNKNLI_JFKKGKEDMLA_OFFSET UNITYSDK_OFFSET(0x18EA7B40)
#define DHKJJCNKNLI_JHHIIMALHAA_OFFSET UNITYSDK_OFFSET(0x18EA6F50)
#define DHKJJCNKNLI_JKOJPGNKCJN_OFFSET UNITYSDK_OFFSET(0x18EA69C0)
#define DHKJJCNKNLI_KOCNGEMANAN_OFFSET UNITYSDK_OFFSET(0x18EA6B80)
#define DHKJJCNKNLI_MGINNILEBFB_OFFSET UNITYSDK_OFFSET(0x18EA64E0)
#define DHKJJCNKNLI_NCKGOCFOJBH_OFFSET UNITYSDK_OFFSET(0x18EA5EA0)
#define DHKJJCNKNLI_NOFLKALFDJE_OFFSET UNITYSDK_OFFSET(0x18EA55D0)
#define DHKJJCNKNLI_OHMINLKGMCL_OFFSET UNITYSDK_OFFSET(0x18EA67A0)

inline static constexpr unsigned int DHKJJCNKNLI_TypeDefinitionIndex = 79598;

	class DHKJJCNKNLI : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* IAFKBJLIMEK; // 0x20
		::System::Int32 GJLFHJGCFHA; // 0x28
		::System::Single BFCBODGGJOD; // 0x2C
		::System::Single OIOEJNFDENG; // 0x30
		::System::Int32 BPGEELIOMND; // 0x34
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
