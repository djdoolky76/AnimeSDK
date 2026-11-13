#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FEFINNHDBII;
namespace RPG::Client { class MatchThreeBoard; }

#define FEFINNHDBII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1308D330)
#define FEFINNHDBII_CTOR_OFFSET UNITYSDK_OFFSET(0x1308D4C0)
#define FEFINNHDBII_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1308D470)
#define FEFINNHDBII_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1308D3B0)

inline static constexpr unsigned int FEFINNHDBII_TypeDefinitionIndex = 67822;

	class FEFINNHDBII : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFINNHDBII_CTOR_OFFSET))(this);
		}

		static ::FEFINNHDBII* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::FEFINNHDBII*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + FEFINNHDBII_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFINNHDBII_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFINNHDBII_LGAOOKPFIMF_OFFSET))(this);
		}

	};
