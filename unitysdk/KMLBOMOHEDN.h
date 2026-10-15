#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define KMLBOMOHEDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5660B0)

	class KMLBOMOHEDN : public ::System::Object
	{
	public:
		::System::String* OMPFNKJCGLK; // 0x10
		::System::Action* ONPCPLEECCG; // 0x18
		::RPG::Client::TextID GHCEBCDOBKK; // 0x20
		::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x30
		::System::Boolean PAKGBHILIGA; // 0x34
		::System::Boolean JNOCABEMEEM; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLBOMOHEDN_CTOR_OFFSET))(this);
		}

	};
