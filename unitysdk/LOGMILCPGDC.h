#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class LOGMILCPGDC;
namespace RPG::Client { class MatchThreeBoard; }

#define LOGMILCPGDC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8028F0)
#define LOGMILCPGDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB802A80)
#define LOGMILCPGDC_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xB802A30)
#define LOGMILCPGDC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB802970)

	class LOGMILCPGDC : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGMILCPGDC_CTOR_OFFSET))(this);
		}

		static ::LOGMILCPGDC* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::LOGMILCPGDC*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + LOGMILCPGDC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGMILCPGDC_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGMILCPGDC_LGAOOKPFIMF_OFFSET))(this);
		}

	};
