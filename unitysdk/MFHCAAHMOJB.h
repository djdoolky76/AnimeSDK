#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
#include "unitysdk/RPG/Client/TextID.h"
class AGCPAMNLCGN;
class MFHCAAHMOJB;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define MFHCAAHMOJB_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB8F52D0)
#define MFHCAAHMOJB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8F5390)
#define MFHCAAHMOJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F5560)
#define MFHCAAHMOJB_IJCBBCDMMBC_OFFSET UNITYSDK_OFFSET(0xB8F51C0)
#define MFHCAAHMOJB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB8F5440)

inline static constexpr unsigned int MFHCAAHMOJB_TypeDefinitionIndex = 78176;

	class MFHCAAHMOJB : public ::AJHHFMBOCEN
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* FOIJHDEGJMM; // 0x20
		::System::String* BLALBPMLDNL; // 0x28
		::RPG::Client::TextID HEAPCMDMANF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHCAAHMOJB_CTOR_OFFSET))(this);
		}

		static ::MFHCAAHMOJB* IJCBBCDMMBC(::AGCPAMNLCGN* a1, ::System::String* a2)
		{
			return ((::MFHCAAHMOJB*(*)(::AGCPAMNLCGN*, ::System::String*))((::PBYTE)hIl2Cpp + MFHCAAHMOJB_IJCBBCDMMBC_OFFSET))(a1, a2);
		}

		static ::MFHCAAHMOJB* BPLPBPMEODA(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::TextID a2)
		{
			return ((::MFHCAAHMOJB*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MFHCAAHMOJB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::MFHCAAHMOJB* BPLPBPMEODA_1(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
		{
			return ((::MFHCAAHMOJB*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + MFHCAAHMOJB_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHCAAHMOJB_ONEXECUTE_OFFSET))(this);
		}

	};
