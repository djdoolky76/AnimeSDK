#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DDGPPHNKOED;
namespace RPG::Client { class MatchThreeBoard; }

#define DDGPPHNKOED_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE25B340)
#define DDGPPHNKOED_CTOR_OFFSET UNITYSDK_OFFSET(0xE25B550)
#define DDGPPHNKOED_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xE25B500)
#define DDGPPHNKOED_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xE25B3C0)
#define DDGPPHNKOED_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xE25B420)

inline static constexpr unsigned int DDGPPHNKOED_TypeDefinitionIndex = 65859;

	class DDGPPHNKOED : public ::FNIDIOCNBBI
	{
	public:
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x28
		::UnityEngine::Vector2 NHEDBJMCEEF; // 0x2C
		::System::Boolean GBKHPNODEAH; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 AOCLHNKNJHM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGPPHNKOED_CTOR_OFFSET))(this);
		}

		static ::DDGPPHNKOED* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::DDGPPHNKOED*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + DDGPPHNKOED_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGPPHNKOED_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGPPHNKOED_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGPPHNKOED_LGAOOKPFIMF_OFFSET))(this);
		}

	};
