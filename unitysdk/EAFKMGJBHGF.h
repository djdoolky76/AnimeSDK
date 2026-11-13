#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/HoverKind.h"
#include "unitysdk/RPG/GameCore/ComicDessertTutorialOperationType.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertView; }

#define EAFKMGJBHGF_ANOIOBMDEDO_OFFSET UNITYSDK_OFFSET(0x181CC5C0)
#define EAFKMGJBHGF_BFPALJPFBNL_OFFSET UNITYSDK_OFFSET(0x181CC860)
#define EAFKMGJBHGF_CTOR_OFFSET UNITYSDK_OFFSET(0x181CC2B0)
#define EAFKMGJBHGF_MLBLLNIJBCA_OFFSET UNITYSDK_OFFSET(0x181CC780)
#define EAFKMGJBHGF_ONCLICK_OFFSET UNITYSDK_OFFSET(0x181CC380)
#define EAFKMGJBHGF_PDJLLLILJKC_OFFSET UNITYSDK_OFFSET(0x181CC650)
#define EAFKMGJBHGF_PGEPACDPKAG_OFFSET UNITYSDK_OFFSET(0x181CC410)
#define EAFKMGJBHGF_PNABPAAGGHE_OFFSET UNITYSDK_OFFSET(0x181CC500)
#define EAFKMGJBHGF_PNNIIBFEKBK_OFFSET UNITYSDK_OFFSET(0x181CC2C0)

inline static constexpr unsigned int EAFKMGJBHGF_TypeDefinitionIndex = 79773;

	class EAFKMGJBHGF : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PNNIIBFEKBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_PNNIIBFEKBK_OFFSET))(this);
		}

		::System::Void OnClick(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_ONCLICK_OFFSET))(this, a1, a2);
		}

		::System::Boolean PNABPAAGGHE(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_PNABPAAGGHE_OFFSET))(this, a1, a2);
		}

		::System::Void ANOIOBMDEDO(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_ANOIOBMDEDO_OFFSET))(this, a1, a2);
		}

		::System::Void PDJLLLILJKC(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_PDJLLLILJKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLBLLNIJBCA(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::RPG::Client::LittleGame::ComicDessert::HoverKind a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::RPG::Client::LittleGame::ComicDessert::HoverKind, ::System::UInt32))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_MLBLLNIJBCA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BFPALJPFBNL(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_BFPALJPFBNL_OFFSET))(this, a1);
		}

		::System::Boolean PGEPACDPKAG(::LPHINGPIEAJ* a1, ::RPG::GameCore::ComicDessertTutorialOperationType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::GameCore::ComicDessertTutorialOperationType))((::PBYTE)hIl2Cpp + EAFKMGJBHGF_PGEPACDPKAG_OFFSET))(this, a1, a2);
		}

	};
