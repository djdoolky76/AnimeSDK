#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class OEMMICIDKCC;
namespace RPG::Client { class IRogueTournPersonaStylePumanOrbInfo; }

#define OEMMICIDKCC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC6EA880)
#define OEMMICIDKCC_CTOR_OFFSET UNITYSDK_OFFSET(0xC6EA910)
#define OEMMICIDKCC_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xC6EAA20)
#define OEMMICIDKCC_GET_PUMANORBINFO_OFFSET UNITYSDK_OFFSET(0xC6EAA60)
#define OEMMICIDKCC_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC6EAA40)
#define OEMMICIDKCC_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xC6EA920)
#define OEMMICIDKCC_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xC6EAA30)
#define OEMMICIDKCC_SET_PUMANORBINFO_OFFSET UNITYSDK_OFFSET(0xC6EAA70)
#define OEMMICIDKCC_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC6EAA50)
#define OEMMICIDKCC_UPDATE_OFFSET UNITYSDK_OFFSET(0xC6EA9D0)

inline static constexpr unsigned int OEMMICIDKCC_TypeDefinitionIndex = 69650;

	class OEMMICIDKCC : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaStylePumanOrbInfo* _PumanOrbInfo_k__BackingField; // 0x10
		::System::UInt64 _ModifierID_k__BackingField; // 0x18
		::AMEIKAGDIFC _SourceType_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMICIDKCC_CTOR_OFFSET))(this);
		}

		static ::OEMMICIDKCC* BPLPBPMEODA(::BMCNDLNONMO* a1)
		{
			return ((::OEMMICIDKCC*(*)(::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + OEMMICIDKCC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + OEMMICIDKCC_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + OEMMICIDKCC_LLBFBLIGNDG_OFFSET))(this, a1);
		}

		::System::UInt64 get_ModifierID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMICIDKCC_GET_MODIFIERID_OFFSET))(this);
		}

		::System::Void set_ModifierID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OEMMICIDKCC_SET_MODIFIERID_OFFSET))(this, a1);
		}

		::AMEIKAGDIFC get_SourceType()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMICIDKCC_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + OEMMICIDKCC_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaStylePumanOrbInfo* get_PumanOrbInfo()
		{
			return ((::RPG::Client::IRogueTournPersonaStylePumanOrbInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMICIDKCC_GET_PUMANORBINFO_OFFSET))(this);
		}

		::System::Void set_PumanOrbInfo(::RPG::Client::IRogueTournPersonaStylePumanOrbInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStylePumanOrbInfo*))((::PBYTE)hIl2Cpp + OEMMICIDKCC_SET_PUMANORBINFO_OFFSET))(this, a1);
		}

	};
