#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class HBDEJIIFIFG;
class NMLCKGKPBEO;
namespace RPG::Client::LimaoNews { class LimaoNewsUserData; }

#define NMLCKGKPBEO_BDHIJPMAJEA_OFFSET UNITYSDK_OFFSET(0xBC84250)
#define NMLCKGKPBEO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC83EC0)
#define NMLCKGKPBEO_CHNHICEMLBF_OFFSET UNITYSDK_OFFSET(0xBC83F90)
#define NMLCKGKPBEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC83F40)
#define NMLCKGKPBEO_DHGIKJDDMGP_OFFSET UNITYSDK_OFFSET(0xBC840F0)
#define NMLCKGKPBEO_JBDGMMJDGAC_OFFSET UNITYSDK_OFFSET(0xBC84150)
#define NMLCKGKPBEO_NJNNFJACGLH_OFFSET UNITYSDK_OFFSET(0xBC842A0)
#define NMLCKGKPBEO_PAAGOCFDKMF_OFFSET UNITYSDK_OFFSET(0xBC83F50)

inline static constexpr unsigned int NMLCKGKPBEO_TypeDefinitionIndex = 80281;

	class NMLCKGKPBEO : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsUserData* IGAALPKNGMA; // 0x10
		::System::UInt32 LOIBIEHNHFM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_CTOR_OFFSET))(this);
		}

		static ::NMLCKGKPBEO* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::NMLCKGKPBEO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 PAAGOCFDKMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_PAAGOCFDKMF_OFFSET))(this);
		}

		::RPG::Client::TextID CHNHICEMLBF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_CHNHICEMLBF_OFFSET))(this);
		}

		::System::UInt32 JBDGMMJDGAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_JBDGMMJDGAC_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* BDHIJPMAJEA()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_BDHIJPMAJEA_OFFSET))(this);
		}

		::HBDEJIIFIFG* DHGIKJDDMGP()
		{
			return ((::HBDEJIIFIFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_DHGIKJDDMGP_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* NJNNFJACGLH()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLCKGKPBEO_NJNNFJACGLH_OFFSET))(this);
		}

	};
