#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class BIBONFENHII;
class BMCNDLNONMO;
namespace RPG::Client { class IRogueTournPersonaStyleAncientCoinHubInfo; }

#define BIBONFENHII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB490D70)
#define BIBONFENHII_CTOR_OFFSET UNITYSDK_OFFSET(0xB490E00)
#define BIBONFENHII_GET_ANCIENTCOININFO_OFFSET UNITYSDK_OFFSET(0xB490F50)
#define BIBONFENHII_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xB490F10)
#define BIBONFENHII_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB490F30)
#define BIBONFENHII_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xB490E10)
#define BIBONFENHII_SET_ANCIENTCOININFO_OFFSET UNITYSDK_OFFSET(0xB490F60)
#define BIBONFENHII_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xB490F20)
#define BIBONFENHII_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB490F40)
#define BIBONFENHII_UPDATE_OFFSET UNITYSDK_OFFSET(0xB490EC0)

inline static constexpr unsigned int BIBONFENHII_TypeDefinitionIndex = 67701;

	class BIBONFENHII : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo* _AncientCoinInfo_k__BackingField; // 0x10
		::System::UInt64 _ModifierID_k__BackingField; // 0x18
		::AMEIKAGDIFC _SourceType_k__BackingField; // 0x20
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
