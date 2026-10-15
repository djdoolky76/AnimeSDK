#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class MNHCGPDDLEG;
namespace RPG::Client { class MatchThreeBoard; }

#define MNHCGPDDLEG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA03210)
#define MNHCGPDDLEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA03400)
#define MNHCGPDDLEG_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xBA033B0)
#define MNHCGPDDLEG_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBA03290)
#define MNHCGPDDLEG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBA032E0)

inline static constexpr unsigned int MNHCGPDDLEG_TypeDefinitionIndex = 65861;

	class MNHCGPDDLEG : public ::FNIDIOCNBBI
	{
	public:
		::System::UInt32 AOCLHNKNJHM; // 0x28
		::System::UInt32 BOKJJKFCFME; // 0x2C
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x30
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
