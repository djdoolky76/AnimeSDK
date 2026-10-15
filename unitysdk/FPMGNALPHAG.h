#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CFIHNPKOEMD;
class GBDODOMIMIF;
class LCJIAMCDDFL;
class NOBCAKJMGPH;

#define FPMGNALPHAG_BHODBHGCDAM_OFFSET UNITYSDK_OFFSET(0x1591F3F0)
#define FPMGNALPHAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1591F3E0)
#define FPMGNALPHAG_GHBAOILNBJP_OFFSET UNITYSDK_OFFSET(0x1591F4D0)
#define FPMGNALPHAG_LEAFDECAGPG_OFFSET UNITYSDK_OFFSET(0x1591F460)

	class FPMGNALPHAG : public ::System::Object
	{
	public:
		::CFIHNPKOEMD* IHDDOFNEOFM; // 0x10
		::NOBCAKJMGPH* NMOFDCOMEOD; // 0x18
		::System::Void _ctor(::CFIHNPKOEMD* a1, ::NOBCAKJMGPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CFIHNPKOEMD*, ::NOBCAKJMGPH*))((::PBYTE)hIl2Cpp + FPMGNALPHAG_CTOR_OFFSET))(this, a1, a2);
		}

		::LCJIAMCDDFL* BHODBHGCDAM(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::LCJIAMCDDFL*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + FPMGNALPHAG_BHODBHGCDAM_OFFSET))(this, a1);
		}

		::GBDODOMIMIF* LEAFDECAGPG(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::GBDODOMIMIF*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + FPMGNALPHAG_LEAFDECAGPG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GHBAOILNBJP(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPMGNALPHAG_GHBAOILNBJP_OFFSET))(this, a1);
		}

	};
