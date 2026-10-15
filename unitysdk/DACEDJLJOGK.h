#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYDecoItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define DACEDJLJOGK_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBC810)

inline static constexpr unsigned int DACEDJLJOGK_TypeDefinitionIndex = 81992;

	class DACEDJLJOGK : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::Action* ONPCPLEECCG; // 0x18
		::RPG::Client::B51Racing::B51RacingDIYDecoItemType LINLNNHIBAK; // 0x20
		::System::Boolean HELJNHNDCJP; // 0x24
		::System::Boolean AALCCPJCBME; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 CMNOEFFFNPE; // 0x28
		::RPG::GameCore::B51RacingPartType OAPONHEHCOJ; // 0x2C
		::RPG::Client::TextID OENAMINOLLF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEDJLJOGK_CTOR_OFFSET))(this);
		}

	};
