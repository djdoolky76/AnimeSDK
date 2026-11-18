#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameActionBase.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11918DE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGamePictureDisplayAction_TypeDefinitionIndex = 80259;

	class GalGamePictureDisplayAction : public ::MoleMole::GalGame::GalGameActionBase
	{
	public:
		::System::String* backgroundKey; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION__CTOR_OFFSET))(this);
		}
	};
}
