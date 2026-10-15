#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BELNFINMEDJ;
class BOKKFAJCOLI;
class ELDKPCBCIIO;
class FNMDEKMKEKH;
class HCAJLDIJJOH;
class HCLLCONFADM;
class HKAJMEMCBLC;
class NGIKMAMAPPF;
class PEAFBFCPFCC;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace System { class String; }

#define LMKIOMMDEJI_BDMNHBLAIJN_OFFSET UNITYSDK_OFFSET(0xB7C89B0)
#define LMKIOMMDEJI_CLPJAOJPKEJ_OFFSET UNITYSDK_OFFSET(0xB7C9030)
#define LMKIOMMDEJI_CMICFEJGGAN_OFFSET UNITYSDK_OFFSET(0xB7C82B0)
#define LMKIOMMDEJI_COLHJILPOHB_OFFSET UNITYSDK_OFFSET(0xB7C8890)
#define LMKIOMMDEJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C80F0)
#define LMKIOMMDEJI_GNEJDGNHEPJ_OFFSET UNITYSDK_OFFSET(0xB7C8310)
#define LMKIOMMDEJI_HCAPDKDNDFM_OFFSET UNITYSDK_OFFSET(0xB7C8900)
#define LMKIOMMDEJI_HFFLKDIFBPP_OFFSET UNITYSDK_OFFSET(0xB7C9080)
#define LMKIOMMDEJI_IAMKMOIIIMP_OFFSET UNITYSDK_OFFSET(0xB7C8EB0)
#define LMKIOMMDEJI_JNKPIIKAPJL_OFFSET UNITYSDK_OFFSET(0xB7C8FA0)
#define LMKIOMMDEJI_KBCCKBMAMHL_OFFSET UNITYSDK_OFFSET(0xB7C8BD0)
#define LMKIOMMDEJI_KNDJKKAOAPL_OFFSET UNITYSDK_OFFSET(0xB7C8C90)
#define LMKIOMMDEJI_LDMHDFKJHPA_OFFSET UNITYSDK_OFFSET(0xB7C9100)
#define LMKIOMMDEJI_LGDLOLIJMIA_OFFSET UNITYSDK_OFFSET(0xB7C8F50)

inline static constexpr unsigned int LMKIOMMDEJI_TypeDefinitionIndex = 80782;

	class LMKIOMMDEJI : public ::System::Object
	{
	public:
		::BOKKFAJCOLI* BNIJMCMIILO; // 0x10
		::FNMDEKMKEKH* EIKEHJPPKFK; // 0x18
		::NGIKMAMAPPF* LBNAGLIGKIO; // 0x20
		::PEAFBFCPFCC* MHBFNKIFLNN; // 0x28
		::ELDKPCBCIIO* LAMCGCJCDOL; // 0x30
		::BELNFINMEDJ* MMKKPHABPGB; // 0x38
		::System::Void _ctor(::NGIKMAMAPPF* a1, ::BELNFINMEDJ* a2, ::FNMDEKMKEKH* a3, ::BOKKFAJCOLI* a4, ::ELDKPCBCIIO* a5, ::PEAFBFCPFCC* a6)
		{
			return ((::System::Void(*)(::PVOID, ::NGIKMAMAPPF*, ::BELNFINMEDJ*, ::FNMDEKMKEKH*, ::BOKKFAJCOLI*, ::ELDKPCBCIIO*, ::PEAFBFCPFCC*))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::HCLLCONFADM* CMICFEJGGAN(::System::UInt32 a1)
		{
			return ((::HCLLCONFADM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_CMICFEJGGAN_OFFSET))(this, a1);
		}

		::HCLLCONFADM* GNEJDGNHEPJ()
		{
			return ((::HCLLCONFADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_GNEJDGNHEPJ_OFFSET))(this);
		}

		::System::String* COLHJILPOHB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_COLHJILPOHB_OFFSET))(this);
		}

		::HCAJLDIJJOH* HCAPDKDNDFM(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::HCAJLDIJJOH*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_HCAPDKDNDFM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID BDMNHBLAIJN(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_BDMNHBLAIJN_OFFSET))(this, a1);
		}

		::RPG::Client::TextID KNDJKKAOAPL(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_KNDJKKAOAPL_OFFSET))(this, a1);
		}

		static ::RPG::Client::TextID KBCCKBMAMHL(::System::UInt32 a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_KBCCKBMAMHL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IAMKMOIIIMP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_IAMKMOIIIMP_OFFSET))(a1);
		}

		::System::Single LGDLOLIJMIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_LGDLOLIJMIA_OFFSET))(this);
		}

		::System::Boolean JNKPIIKAPJL(::System::UInt32 a1, ::HKAJMEMCBLC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_JNKPIIKAPJL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GenderType CLPJAOJPKEJ()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_CLPJAOJPKEJ_OFFSET))(this);
		}

		::System::Int32 HFFLKDIFBPP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_HFFLKDIFBPP_OFFSET))(this);
		}

		::System::Void LDMHDFKJHPA(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + LMKIOMMDEJI_LDMHDFKJHPA_OFFSET))(this, a1);
		}

	};
