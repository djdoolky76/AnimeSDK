#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class COCHKMHHJFB;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }

#define COCHKMHHJFB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDCB3190)
#define COCHKMHHJFB_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB3470)
#define COCHKMHHJFB_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xDCB3420)
#define COCHKMHHJFB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xDCB3370)
#define COCHKMHHJFB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xDCB32B0)

	class COCHKMHHJFB : public ::FNIDIOCNBBI
	{
	public:
		::RPG::PoolList_1<::UnityEngine::Vector2Int>* IPKCFNKIDMB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHKMHHJFB_CTOR_OFFSET))(this);
		}

		static ::COCHKMHHJFB* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::COCHKMHHJFB*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + COCHKMHHJFB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHKMHHJFB_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHKMHHJFB_ONCLEAR_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHKMHHJFB_LGAOOKPFIMF_OFFSET))(this);
		}

	};
