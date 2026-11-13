#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace CriWare::CriMana { class Player_CuePointCallbackFromNativeDelegate; }
namespace CriWare::CriMana { class Player_SubtitleCallbackFromNativeDelegate; }

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player___O_TypeDefinitionIndex = 41202;

	class Player___O : public ::System::Object
	{
	public:
		static ::CriWare::CriMana::Player_SubtitleCallbackFromNativeDelegate** StaticGet__0___SubtitleCallbackFromNative()
		{
			return (::CriWare::CriMana::Player_SubtitleCallbackFromNativeDelegate**)UnitySDK::FromName("CriWare.CriMana", "<>O")->GetStaticField(0x5DDD0);
		}

		static ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate** StaticGet__1___CuePointCallbackFromNative()
		{
			return (::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate**)UnitySDK::FromName("CriWare.CriMana", "<>O")->GetStaticField(0x5DDD8);
		}

	};
}
