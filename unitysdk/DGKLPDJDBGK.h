#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class DGKLPDJDBGK;
class JEANAIHDCAA;
namespace RPG::Client { class MatchThreeBoard; }

#define DGKLPDJDBGK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE844640)
#define DGKLPDJDBGK_CTOR_OFFSET UNITYSDK_OFFSET(0xE844860)
#define DGKLPDJDBGK_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xE844810)
#define DGKLPDJDBGK_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xE8447C0)
#define DGKLPDJDBGK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xE8446C0)

inline static constexpr unsigned int DGKLPDJDBGK_TypeDefinitionIndex = 65867;

	class DGKLPDJDBGK : public ::FNIDIOCNBBI
	{
	public:
		::JEANAIHDCAA* IEGFCMEEEKC; // 0x28
		::UnityEngine::Vector2Int ICGKFDEILKA; // 0x30
		::UnityEngine::Vector2Int OLCHHDKKPLI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPDJDBGK_CTOR_OFFSET))(this);
		}

		static ::DGKLPDJDBGK* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::DGKLPDJDBGK*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + DGKLPDJDBGK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPDJDBGK_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPDJDBGK_ONCLEAR_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPDJDBGK_LGAOOKPFIMF_OFFSET))(this);
		}

	};
