#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FPCGPEOMONJ;
namespace RPG::Client { class MatchThreeBoard; }

#define FPCGPEOMONJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1590D760)
#define FPCGPEOMONJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1590D910)
#define FPCGPEOMONJ_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1590D8C0)
#define FPCGPEOMONJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1590D7E0)

	class FPCGPEOMONJ : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int OLCHHDKKPLI; // 0x28
		::UnityEngine::Vector2Int ICGKFDEILKA; // 0x30
		::System::UInt32 KLOEJIMMPJM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCGPEOMONJ_CTOR_OFFSET))(this);
		}

		static ::FPCGPEOMONJ* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::FPCGPEOMONJ*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + FPCGPEOMONJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCGPEOMONJ_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCGPEOMONJ_LGAOOKPFIMF_OFFSET))(this);
		}

	};
