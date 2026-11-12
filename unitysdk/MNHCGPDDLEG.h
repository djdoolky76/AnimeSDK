#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class MNHCGPDDLEG;
namespace RPG::Client { class MatchThreeBoard; }

#define MNHCGPDDLEG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2C60C0)
#define MNHCGPDDLEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C62B0)
#define MNHCGPDDLEG_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xC2C6260)
#define MNHCGPDDLEG_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC2C6140)
#define MNHCGPDDLEG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC2C6190)

inline static constexpr unsigned int MNHCGPDDLEG_TypeDefinitionIndex = 67793;

	class MNHCGPDDLEG : public ::FNIDIOCNBBI
	{
	public:
		::System::UInt32 AOCLHNKNJHM; // 0x28
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x2C
		::System::UInt32 BOKJJKFCFME; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHCGPDDLEG_CTOR_OFFSET))(this);
		}

		static ::MNHCGPDDLEG* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::MNHCGPDDLEG*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + MNHCGPDDLEG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHCGPDDLEG_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHCGPDDLEG_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHCGPDDLEG_LGAOOKPFIMF_OFFSET))(this);
		}

	};
