#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFEFMAIKHFE.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPAGJONBFID_NINALFMLMJD.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

#define LCEPBCLELJH_BAKENDCLFHP_OFFSET UNITYSDK_OFFSET(0x752FA0)
#define LCEPBCLELJH_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x752F80)
#define LCEPBCLELJH_IIHLGEFGOBL_OFFSET UNITYSDK_OFFSET(0x752F90)
#define LCEPBCLELJH__CTOR_OFFSET UNITYSDK_OFFSET(0x752F70)

inline static constexpr unsigned int LCEPBCLELJH_TypeDefinitionIndex = 87542;

struct alignas(4) LCEPBCLELJH
{
	::System::UInt32 DGEBDBEOEFO; // 0x10
	::System::Byte _padding0[0x4];
	::BFEFMAIKHFE MLHADNJPJGG; // 0x18
	::ProtoScript::HollowEntityType MKCOMJHINNJ; // 0x28

	::System::Void _ctor(::System::UInt32 ACHBBPJIBIE, ::ProtoScript::HollowEntityType LGIKCCOCENH, ::BFEFMAIKHFE& OFJELAAIOJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ProtoScript::HollowEntityType, ::BFEFMAIKHFE&))((::PBYTE)hIl2Cpp + LCEPBCLELJH__CTOR_OFFSET))(this, ACHBBPJIBIE, LGIKCCOCENH, OFJELAAIOJG);
	}

	::System::Void GBIMFDIADMD(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + LCEPBCLELJH_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void IIHLGEFGOBL(::JPAGJONBFID_NINALFMLMJD& MEJFKGECCPG)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NINALFMLMJD&))((::PBYTE)hIl2Cpp + LCEPBCLELJH_IIHLGEFGOBL_OFFSET))(this, MEJFKGECCPG);
	}

	::System::Void BAKENDCLFHP(::JPAGJONBFID_NINALFMLMJD& MEJFKGECCPG)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NINALFMLMJD&))((::PBYTE)hIl2Cpp + LCEPBCLELJH_BAKENDCLFHP_OFFSET))(this, MEJFKGECCPG);
	}
};
