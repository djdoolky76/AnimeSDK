#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCLPKMIIANI;
class OEOAMBFMNIB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define CAELMBLOLIM_APOAAPDAAKN_CTOR_OFFSET UNITYSDK_OFFSET(0xC477800)

	class CAELMBLOLIM_APOAAPDAAKN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* IFCOJBEEAKG; // 0x10
		::RPG::GameCore::LittleGameLevelConfig* PDKOBKPIBPN; // 0x18
		::OEOAMBFMNIB* MKLOJCHCKPN; // 0x20
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x28
		::HCLPKMIIANI* FMJPMFEDIJL; // 0x30
		::System::String* NMELLLLPDPM; // 0x38
		::System::UInt32 OAJHOILAHJG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM_APOAAPDAAKN_CTOR_OFFSET))(this);
		}

	};
