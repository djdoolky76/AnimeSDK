#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class PEPLCJBLMAI;
namespace RPG::Client { class MatchThreeBoard; }

#define PEPLCJBLMAI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x145476D0)
#define PEPLCJBLMAI_CTOR_OFFSET UNITYSDK_OFFSET(0x145478D0)
#define PEPLCJBLMAI_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x14547880)
#define PEPLCJBLMAI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14547750)
#define PEPLCJBLMAI__ONEXECUTE_B__3_0_OFFSET UNITYSDK_OFFSET(0x145478E0)

inline static constexpr unsigned int PEPLCJBLMAI_TypeDefinitionIndex = 67826;

	class PEPLCJBLMAI : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int EEEPIDCGCLB; // 0x28
		::UnityEngine::Vector2Int NGAFJJNBHFM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPLCJBLMAI_CTOR_OFFSET))(this);
		}

		static ::PEPLCJBLMAI* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::PEPLCJBLMAI*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + PEPLCJBLMAI_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPLCJBLMAI_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPLCJBLMAI_LGAOOKPFIMF_OFFSET))(this);
		}

		::System::Void _OnExecute_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPLCJBLMAI__ONEXECUTE_B__3_0_OFFSET))(this);
		}

	};
