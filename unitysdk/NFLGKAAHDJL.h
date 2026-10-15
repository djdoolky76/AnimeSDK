#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
class NFLGKAAHDJL;
namespace RPG::Client { class MatchThreeBoard; }

#define NFLGKAAHDJL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB93770)
#define NFLGKAAHDJL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB93850)
#define NFLGKAAHDJL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBB937F0)

inline static constexpr unsigned int NFLGKAAHDJL_TypeDefinitionIndex = 65889;

	class NFLGKAAHDJL : public ::FNIDIOCNBBI
	{
	public:
		::System::Single FKNINPFKNAK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLGKAAHDJL_CTOR_OFFSET))(this);
		}

		static ::NFLGKAAHDJL* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::NFLGKAAHDJL*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + NFLGKAAHDJL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLGKAAHDJL_ONEXECUTE_OFFSET))(this);
		}

	};
