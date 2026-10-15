#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class JDHMIIEMFOF;
class JDIDJHLDOMN;
namespace RPG::Client { class MatchThreeBoard; }

#define JDHMIIEMFOF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x165B57C0)
#define JDHMIIEMFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x165CC330)
#define JDHMIIEMFOF_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x165CC2E0)
#define JDHMIIEMFOF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x165CC210)

	class JDHMIIEMFOF : public ::FNIDIOCNBBI
	{
	public:
		::JDIDJHLDOMN* MFKKDBHPFKB; // 0x28
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHMIIEMFOF_CTOR_OFFSET))(this);
		}

		static ::JDHMIIEMFOF* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::JDHMIIEMFOF*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + JDHMIIEMFOF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHMIIEMFOF_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHMIIEMFOF_LGAOOKPFIMF_OFFSET))(this);
		}

	};
