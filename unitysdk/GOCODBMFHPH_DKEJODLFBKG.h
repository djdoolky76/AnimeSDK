#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class IGamePhase; }
namespace System { class Action; }
namespace System { class Object; }

#define GOCODBMFHPH_DKEJODLFBKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1DDA0)

inline static constexpr unsigned int GOCODBMFHPH_DKEJODLFBKG_TypeDefinitionIndex = 76300;

	class GOCODBMFHPH_DKEJODLFBKG : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::IGamePhase* PPOIJHJIMLL; // 0x10
		::System::Action* HMLKKGLNFCJ; // 0x18
		::System::Object* BKMMGBPOKGI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_DKEJODLFBKG_CTOR_OFFSET))(this);
		}

	};
