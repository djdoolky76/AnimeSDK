#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"
class HNFFJNEKJHA;

#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC8631B0)
#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__TRYDOWNLOADREPLAY_B__0_OFFSET UNITYSDK_OFFSET(0xC866DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___c__DisplayClass32_0_TypeDefinitionIndex = 72082;

	class BattleUIUtils___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Int32 iTryCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryDownLoadReplay_b__0(::System::Net::HttpStatusCode a1, ::System::Int32 a2, ::HNFFJNEKJHA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode, ::System::Int32, ::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__TRYDOWNLOADREPLAY_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
}
