#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class IGamePhase; }
namespace System { class Action; }
namespace System { class Object; }

#define GOCODBMFHPH_DKEJODLFBKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B29790)

	class GOCODBMFHPH_DKEJODLFBKG : public ::System::Object
	{
	public:
		::System::Object* BKMMGBPOKGI; // 0x10
		::System::Action* HMLKKGLNFCJ; // 0x18
		::RPG::Client::ChenLingBattle::IGamePhase* PPOIJHJIMLL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_DKEJODLFBKG_CTOR_OFFSET))(this);
		}

	};
