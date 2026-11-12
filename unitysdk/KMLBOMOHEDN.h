#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KMLBOMOHEDN_CTOR_OFFSET UNITYSDK_OFFSET(0xBDB1750)

inline static constexpr unsigned int KMLBOMOHEDN_TypeDefinitionIndex = 84781;

	class KMLBOMOHEDN : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::B51RacingPartType>* ONPCPLEECCG; // 0x10
		::System::String* OMPFNKJCGLK; // 0x18
		::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x20
		::System::Boolean JNOCABEMEEM; // 0x24
		::System::Boolean PAKGBHILIGA; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID GHCEBCDOBKK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLBOMOHEDN_CTOR_OFFSET))(this);
		}

	};
