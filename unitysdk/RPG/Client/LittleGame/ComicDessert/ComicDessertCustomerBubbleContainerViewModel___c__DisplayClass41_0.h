#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL___C__DISPLAYCLASS41_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDE802D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL___C__DISPLAYCLASS41_0__SHOWEMOTIONBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0xDE81EC0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertCustomerBubbleContainerViewModel___c__DisplayClass41_0_TypeDefinitionIndex = 80111;

	class ComicDessertCustomerBubbleContainerViewModel___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::String* prefabPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL___C__DISPLAYCLASS41_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ShowEmotionBubble_b__0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL___C__DISPLAYCLASS41_0__SHOWEMOTIONBUBBLE_B__0_OFFSET))(this, a1);
		}

	};
}
