#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class DGKLPDJDBGK;
class JEANAIHDCAA;
namespace RPG::Client { class MatchThreeBoard; }

#define DGKLPDJDBGK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1ADB9070)
#define DGKLPDJDBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB9290)
#define DGKLPDJDBGK_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1ADB9240)
#define DGKLPDJDBGK_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1ADB91F0)
#define DGKLPDJDBGK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1ADB90F0)

inline static constexpr unsigned int DGKLPDJDBGK_TypeDefinitionIndex = 67799;

	class DGKLPDJDBGK : public ::FNIDIOCNBBI
	{
	public:
		::JEANAIHDCAA* IEGFCMEEEKC; // 0x28
		::UnityEngine::Vector2Int OLCHHDKKPLI; // 0x30
		::UnityEngine::Vector2Int ICGKFDEILKA; // 0x38
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
