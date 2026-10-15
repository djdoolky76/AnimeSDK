#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define PJELEGLGHCN_CTOR_OFFSET UNITYSDK_OFFSET(0xC2845A0)

	class PJELEGLGHCN : public ::System::Object
	{
	public:
		::System::Action* ONPCPLEECCG; // 0x10
		::System::String* CNPMPHNKALI; // 0x18
		::RPG::Client::TextID OHLBMAGECPM; // 0x20
		::RPG::Client::TextID CAEPCCBODOM; // 0x30
		::System::UInt32 BAGPBCADCJN; // 0x40
		::System::Boolean HELJNHNDCJP; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJELEGLGHCN_CTOR_OFFSET))(this);
		}

	};
