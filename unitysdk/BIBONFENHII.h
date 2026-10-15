#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class BIBONFENHII;
class BMCNDLNONMO;
namespace RPG::Client { class IRogueTournPersonaStyleAncientCoinHubInfo; }

#define BIBONFENHII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB494EC0)
#define BIBONFENHII_CTOR_OFFSET UNITYSDK_OFFSET(0xB494F50)
#define BIBONFENHII_GET_ANCIENTCOININFO_OFFSET UNITYSDK_OFFSET(0xB4950A0)
#define BIBONFENHII_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xB495060)
#define BIBONFENHII_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB495080)
#define BIBONFENHII_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xB494F60)
#define BIBONFENHII_SET_ANCIENTCOININFO_OFFSET UNITYSDK_OFFSET(0xB4950B0)
#define BIBONFENHII_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xB495070)
#define BIBONFENHII_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB495090)
#define BIBONFENHII_UPDATE_OFFSET UNITYSDK_OFFSET(0xB495010)

	class BIBONFENHII : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo* _AncientCoinInfo_k__BackingField; // 0x10
		::AMEIKAGDIFC _SourceType_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 _ModifierID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIBONFENHII_CTOR_OFFSET))(this);
		}

		static ::BIBONFENHII* BPLPBPMEODA(::BMCNDLNONMO* a1)
		{
			return ((::BIBONFENHII*(*)(::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + BIBONFENHII_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + BIBONFENHII_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + BIBONFENHII_LLBFBLIGNDG_OFFSET))(this, a1);
		}

		::System::UInt64 get_ModifierID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BIBONFENHII_GET_MODIFIERID_OFFSET))(this);
		}

		::System::Void set_ModifierID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BIBONFENHII_SET_MODIFIERID_OFFSET))(this, a1);
		}

		::AMEIKAGDIFC get_SourceType()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + BIBONFENHII_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + BIBONFENHII_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo* get_AncientCoinInfo()
		{
			return ((::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIBONFENHII_GET_ANCIENTCOININFO_OFFSET))(this);
		}

		::System::Void set_AncientCoinInfo(::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo*))((::PBYTE)hIl2Cpp + BIBONFENHII_SET_ANCIENTCOININFO_OFFSET))(this, a1);
		}

	};
