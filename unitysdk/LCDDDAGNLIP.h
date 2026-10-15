#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class LCDDDAGNLIP;
namespace RPG::Client { class MatchThreeBoard; }

#define LCDDDAGNLIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB613000)
#define LCDDDAGNLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6131A0)
#define LCDDDAGNLIP_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xB613150)
#define LCDDDAGNLIP_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB613080)

	class LCDDDAGNLIP : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int AMNBPFHKIDF; // 0x28
		::UnityEngine::Vector2Int EKHMDMHBLNP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDDDAGNLIP_CTOR_OFFSET))(this);
		}

		static ::LCDDDAGNLIP* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::LCDDDAGNLIP*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + LCDDDAGNLIP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDDDAGNLIP_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDDDAGNLIP_LGAOOKPFIMF_OFFSET))(this);
		}

	};
