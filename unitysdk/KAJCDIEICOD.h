#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class KAJCDIEICOD;
namespace RPG::Client { class MatchThreeBoard; }

#define KAJCDIEICOD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2DAAD0)
#define KAJCDIEICOD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DAC60)
#define KAJCDIEICOD_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xB2DAC10)
#define KAJCDIEICOD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB2DAB50)

inline static constexpr unsigned int KAJCDIEICOD_TypeDefinitionIndex = 65893;

	class KAJCDIEICOD : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCDIEICOD_CTOR_OFFSET))(this);
		}

		static ::KAJCDIEICOD* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::KAJCDIEICOD*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + KAJCDIEICOD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCDIEICOD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCDIEICOD_LGAOOKPFIMF_OFFSET))(this);
		}

	};
