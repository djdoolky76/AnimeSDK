#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertCustomerBubbleViewModelBase.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E145090)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_GET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0x1E14A1D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1E14A1C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_SHOW_OFFSET UNITYSDK_OFFSET(0x1E1450C0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertEmotionBubbleViewModel_TypeDefinitionIndex = 80117;

	class ComicDessertEmotionBubbleViewModel : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertCustomerBubbleViewModelBase
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x38
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Int32 Show()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_SHOW_OFFSET))(this);
		}

		::System::String* get_AttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTEMOTIONBUBBLEVIEWMODEL_GET_ATTACHPOINTNAME_OFFSET))(this);
		}

	};
}
