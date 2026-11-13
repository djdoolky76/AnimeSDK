#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertCustomerBubbleViewModelBase.h"
#include "unitysdk/RPG/GameCore/ComicDessertTalkBubbleType.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3716E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1C371830)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C371820)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1C371840)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_SHOW_OFFSET UNITYSDK_OFFSET(0x1C371850)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL__RESOLVEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1C371790)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertTalkBubbleViewModel_TypeDefinitionIndex = 80134;

	class ComicDessertTalkBubbleViewModel : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertCustomerBubbleViewModelBase
	{
	public:
		::System::String* _TextID_k__BackingField; // 0x38
		::RPG::GameCore::ComicDessertTalkBubbleType _Type_k__BackingField; // 0x40
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::ComicDessertTalkBubbleType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ComicDessertTalkBubbleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ComicDessertTalkBubbleType get_Type()
		{
			return ((::RPG::GameCore::ComicDessertTalkBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_TextID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_SET_TEXTID_OFFSET))(this, a1);
		}

		::System::Int32 Show(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL_SHOW_OFFSET))(this, a1);
		}

		static ::System::String* _ResolveAttachPoint(::RPG::GameCore::ComicDessertTalkBubbleType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::ComicDessertTalkBubbleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTALKBUBBLEVIEWMODEL__RESOLVEATTACHPOINT_OFFSET))(a1);
		}

	};
}
