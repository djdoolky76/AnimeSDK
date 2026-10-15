#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class PKEOFPGGPEJ;
namespace RPG::Client { class MatchThreeBoard; }

#define PKEOFPGGPEJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2B42D0)
#define PKEOFPGGPEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B4460)
#define PKEOFPGGPEJ_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xC2B4410)
#define PKEOFPGGPEJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC2B4350)

	class PKEOFPGGPEJ : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEOFPGGPEJ_CTOR_OFFSET))(this);
		}

		static ::PKEOFPGGPEJ* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::PKEOFPGGPEJ*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + PKEOFPGGPEJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEOFPGGPEJ_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEOFPGGPEJ_LGAOOKPFIMF_OFFSET))(this);
		}

	};
