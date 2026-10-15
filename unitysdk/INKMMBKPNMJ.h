#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

	struct alignas(8) INKMMBKPNMJ
	{
		::System::Boolean DFKJCMCDMEI; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* IFNAGLOMHBK; // 0x18
		::System::String* PKAOFONGEOD; // 0x20
		::RPG::GameCore::SpecialBPDisplayStyle CONJNAGLPDO; // 0x28
		::System::Boolean IMMKHFDJNDM; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Int32 AALMDFKKIMK; // 0x30
		::System::Byte _padding2[0x4];
		::RPG::GameCore::TurnBasedModifierInstance* EEMOLALELEI; // 0x38
	};
