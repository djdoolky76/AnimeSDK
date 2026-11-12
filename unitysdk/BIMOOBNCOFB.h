#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/HoverKind.h"
#include "unitysdk/System/Object.h"
class PEPPJLLGLIM;
class PJNNEJPIEML;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertView; }

#define BIMOOBNCOFB_ANOIOBMDEDO_OFFSET UNITYSDK_OFFSET(0xBE4A2C0)
#define BIMOOBNCOFB_BFPALJPFBNL_OFFSET UNITYSDK_OFFSET(0xBE4A3E0)
#define BIMOOBNCOFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE49FE0)
#define BIMOOBNCOFB_IFBCACACDCE_OFFSET UNITYSDK_OFFSET(0xBE4A490)
#define BIMOOBNCOFB_MLBLLNIJBCA_OFFSET UNITYSDK_OFFSET(0xBE4A380)
#define BIMOOBNCOFB_ONCLICK_OFFSET UNITYSDK_OFFSET(0xBE4A000)
#define BIMOOBNCOFB_OONHHKKOOAO_OFFSET UNITYSDK_OFFSET(0xBE4A060)
#define BIMOOBNCOFB_PDJLLLILJKC_OFFSET UNITYSDK_OFFSET(0xBE4A310)
#define BIMOOBNCOFB_PGEPACDPKAG_OFFSET UNITYSDK_OFFSET(0xBE4A430)
#define BIMOOBNCOFB_PNABPAAGGHE_OFFSET UNITYSDK_OFFSET(0xBE4A270)
#define BIMOOBNCOFB_PNNIIBFEKBK_OFFSET UNITYSDK_OFFSET(0xBE49FF0)

inline static constexpr unsigned int BIMOOBNCOFB_TypeDefinitionIndex = 79775;

	class BIMOOBNCOFB : public ::System::Object
	{
	public:
		::PEPPJLLGLIM* DENNCALHBFN; // 0x10
		::PJNNEJPIEML* HNHGNMBGABG; // 0x18
		::System::Void _ctor(::PJNNEJPIEML* a1, ::PEPPJLLGLIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PJNNEJPIEML*, ::PEPPJLLGLIM*))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean PNNIIBFEKBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_PNNIIBFEKBK_OFFSET))(this);
		}

		::System::Void OnClick(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_ONCLICK_OFFSET))(this, a1, a2);
		}

		::System::Boolean PNABPAAGGHE(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_PNABPAAGGHE_OFFSET))(this, a1, a2);
		}

		::System::Void ANOIOBMDEDO(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_ANOIOBMDEDO_OFFSET))(this, a1, a2);
		}

		::System::Void PDJLLLILJKC(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_PDJLLLILJKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLBLLNIJBCA(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::RPG::Client::LittleGame::ComicDessert::HoverKind a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::RPG::Client::LittleGame::ComicDessert::HoverKind, ::System::UInt32))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_MLBLLNIJBCA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BFPALJPFBNL(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_BFPALJPFBNL_OFFSET))(this, a1);
		}

		::System::Void OONHHKKOOAO(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_OONHHKKOOAO_OFFSET))(this, a1);
		}

		::System::Boolean PGEPACDPKAG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_PGEPACDPKAG_OFFSET))(this, a1);
		}

		::System::Void IFBCACACDCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIMOOBNCOFB_IFBCACACDCE_OFFSET))(this, a1);
		}

	};
