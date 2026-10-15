#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class NANENPCCNIF;
namespace RPG::Client { class IRogueTournPersonaStyleModifierBattlePassive; }

#define NANENPCCNIF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBAA9400)
#define NANENPCCNIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA9490)
#define NANENPCCNIF_GET_BATTLEPASSIVE_OFFSET UNITYSDK_OFFSET(0xBAA9600)
#define NANENPCCNIF_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xBAA95C0)
#define NANENPCCNIF_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xBAA95E0)
#define NANENPCCNIF_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xBAA94A0)
#define NANENPCCNIF_SET_BATTLEPASSIVE_OFFSET UNITYSDK_OFFSET(0xBAA9610)
#define NANENPCCNIF_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xBAA95D0)
#define NANENPCCNIF_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xBAA95F0)
#define NANENPCCNIF_UPDATE_OFFSET UNITYSDK_OFFSET(0xBAA9570)

inline static constexpr unsigned int NANENPCCNIF_TypeDefinitionIndex = 67703;

	class NANENPCCNIF : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* _BattlePassive_k__BackingField; // 0x10
		::AMEIKAGDIFC _SourceType_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 _ModifierID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANENPCCNIF_CTOR_OFFSET))(this);
		}

		static ::NANENPCCNIF* BPLPBPMEODA(::BMCNDLNONMO* a1)
		{
			return ((::NANENPCCNIF*(*)(::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + NANENPCCNIF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + NANENPCCNIF_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + NANENPCCNIF_LLBFBLIGNDG_OFFSET))(this, a1);
		}

		::System::UInt64 get_ModifierID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NANENPCCNIF_GET_MODIFIERID_OFFSET))(this);
		}

		::System::Void set_ModifierID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NANENPCCNIF_SET_MODIFIERID_OFFSET))(this, a1);
		}

		::AMEIKAGDIFC get_SourceType()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + NANENPCCNIF_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + NANENPCCNIF_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* get_BattlePassive()
		{
			return ((::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANENPCCNIF_GET_BATTLEPASSIVE_OFFSET))(this);
		}

		::System::Void set_BattlePassive(::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive*))((::PBYTE)hIl2Cpp + NANENPCCNIF_SET_BATTLEPASSIVE_OFFSET))(this, a1);
		}

	};
