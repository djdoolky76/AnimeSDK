#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/ConfigPlayerOnChessPiece_PlayerOnSheetConfig.h"

namespace MoleMole::Config { class ConfigPlayerOnChessPiece; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCHESSSKIN_GETPLAYERONSHEETCONFIG_OFFSET UNITYSDK_OFFSET(0x164085B0)
#define MOLEMOLE_CONFIG_CONFIGCHESSSKIN_ISPLAYERONSTATECONFIGUSEDEFAULT_OFFSET UNITYSDK_OFFSET(0x164087B0)
#define MOLEMOLE_CONFIG_CONFIGCHESSSKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x164088E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessSkin_TypeDefinitionIndex = 64405;

	class ConfigChessSkin : public ::System::Object
	{
	public:
		// static const ::System::String* DefaultString; // 0x0
		::MoleMole::Config::ConfigPlayerOnChessPiece* _defaultPiece; // 0x10
		::System::String* enterSkinTextureAnimKey; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigPlayerOnChessPiece*>* playerOnPrevAnimDict; // 0x20
		::System::String* exitSKinTextureAnimKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSSKIN__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig GetPlayerOnSheetConfig(::System::Boolean useDefault, ::System::String* eventId, ::MoleMole::PlayerOnViewState playerOnState, ::MoleMole::Config::DirectionPlayerOnKey directionPlayerOnKey)
		{
			return ((::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig(*)(::PVOID, ::System::Boolean, ::System::String*, ::MoleMole::PlayerOnViewState, ::MoleMole::Config::DirectionPlayerOnKey))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSSKIN_GETPLAYERONSHEETCONFIG_OFFSET))(this, useDefault, eventId, playerOnState, directionPlayerOnKey);
		}

		::System::Boolean IsPlayerOnStateConfigUseDefault(::System::String* eventId, ::MoleMole::PlayerOnViewState playerOnState, ::MoleMole::Config::DirectionPlayerOnKey directionPlayerOnKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::PlayerOnViewState, ::MoleMole::Config::DirectionPlayerOnKey))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSSKIN_ISPLAYERONSTATECONFIGUSEDEFAULT_OFFSET))(this, eventId, playerOnState, directionPlayerOnKey);
		}
	};
}
