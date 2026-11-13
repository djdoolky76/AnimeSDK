#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCLPKMIIANI;
class OEOAMBFMNIB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define CAELMBLOLIM_APOAAPDAAKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B61E860)

inline static constexpr unsigned int CAELMBLOLIM_APOAAPDAAKN_TypeDefinitionIndex = 61849;

	class CAELMBLOLIM_APOAAPDAAKN : public ::System::Object
	{
	public:
		::OEOAMBFMNIB* MKLOJCHCKPN; // 0x10
		::RPG::GameCore::GameEntity* IFCOJBEEAKG; // 0x18
		::System::String* NMELLLLPDPM; // 0x20
		::HCLPKMIIANI* FMJPMFEDIJL; // 0x28
		::RPG::GameCore::LittleGameLevelConfig* PDKOBKPIBPN; // 0x30
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x38
		::System::UInt32 KMIMICFAHAN; // 0x40
		::System::UInt32 OAJHOILAHJG; // 0x44
		::System::UInt32 HGGAFGOICCC; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM_APOAAPDAAKN_CTOR_OFFSET))(this);
		}

	};
