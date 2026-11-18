#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOIMCGHFMGP_FLBNFGKPJPD_AIMLDJAOPGO_OFFSET UNITYSDK_OFFSET(0x1BAD2750)
#define GOIMCGHFMGP_FLBNFGKPJPD_LJCBINKKDAG_OFFSET UNITYSDK_OFFSET(0x1BAD2740)
#define GOIMCGHFMGP_FLBNFGKPJPD_NIFGGGILNAO_OFFSET UNITYSDK_OFFSET(0x1BAD2760)
#define GOIMCGHFMGP_FLBNFGKPJPD_OGDCNKPMBGA_OFFSET UNITYSDK_OFFSET(0x1BAD2770)
#define GOIMCGHFMGP_FLBNFGKPJPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD2730)

inline static constexpr unsigned int GOIMCGHFMGP_FLBNFGKPJPD_TypeDefinitionIndex = 10585;

class GOIMCGHFMGP_FLBNFGKPJPD : public ::System::Object
{
public:
	::System::Int32 _KLGGNELBACB_k__BackingField; // 0x10
	::System::Int32 _MMLIIGJFLKL_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIMCGHFMGP_FLBNFGKPJPD__CTOR_OFFSET))(this);
	}

	::System::Void LJCBINKKDAG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOIMCGHFMGP_FLBNFGKPJPD_LJCBINKKDAG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AIMLDJAOPGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIMCGHFMGP_FLBNFGKPJPD_AIMLDJAOPGO_OFFSET))(this);
	}

	::System::Void NIFGGGILNAO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOIMCGHFMGP_FLBNFGKPJPD_NIFGGGILNAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OGDCNKPMBGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIMCGHFMGP_FLBNFGKPJPD_OGDCNKPMBGA_OFFSET))(this);
	}
};
