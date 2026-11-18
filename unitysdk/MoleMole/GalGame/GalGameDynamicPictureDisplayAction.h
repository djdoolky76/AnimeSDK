#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalGameImgExchangeType.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F54E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameDynamicPictureDisplayAction_TypeDefinitionIndex = 89379;

	class GalGameDynamicPictureDisplayAction : public ::MoleMole::GalGame::GalGameActionBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x10
		::System::String* horror30PicFadeInClip; // 0x18
		::System::String* horror30PicFadeOutClip; // 0x20
		::System::String* backgroundKey; // 0x28
		::MoleMole::GalGame::GalGameImgExchangeType imgExchangeType; // 0x30
		::System::Boolean isUsingSpecialImgExchange; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION__CTOR_OFFSET))(this);
		}
	};
}
