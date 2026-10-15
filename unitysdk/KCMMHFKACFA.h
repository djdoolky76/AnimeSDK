#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
class KCMMHFKACFA;
namespace RPG::Client { class MatchThreeBoard; }

#define KCMMHFKACFA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB337440)
#define KCMMHFKACFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB3375B0)
#define KCMMHFKACFA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB3374C0)
#define KCMMHFKACFA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB337510)

inline static constexpr unsigned int KCMMHFKACFA_TypeDefinitionIndex = 65891;

	class KCMMHFKACFA : public ::FNIDIOCNBBI
	{
	public:
		::System::UInt32 GACEMBBAGMP; // 0x28
		::System::Boolean GNDCCBNILML; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMHFKACFA_CTOR_OFFSET))(this);
		}

		static ::KCMMHFKACFA* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::KCMMHFKACFA*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + KCMMHFKACFA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMHFKACFA_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMHFKACFA_ONEXECUTE_OFFSET))(this);
		}

	};
