#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertCustomerBubbleViewModelBase.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE7F240)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_GET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xDE85370)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE85350)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE85360)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_SHOW_OFFSET UNITYSDK_OFFSET(0xDE7F1F0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertEmojiBubbleViewModel_TypeDefinitionIndex = 80117;

	class ComicDessertEmojiBubbleViewModel : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertCustomerBubbleViewModelBase
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x38
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Int32 Show(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_SHOW_OFFSET))(this, a1);
		}

		::System::String* get_AttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOJIBUBBLEVIEWMODEL_GET_ATTACHPOINTNAME_OFFSET))(this);
		}

	};
}
