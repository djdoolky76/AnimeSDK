#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBNLAFDKEOH.h"

class EIJNABNFPJJ;

#define CGAJNPDDBOP_ECGGEEOJGJG_OFFSET UNITYSDK_OFFSET(0x128EEFB0)
#define CGAJNPDDBOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x128EDAC0)
#define CGAJNPDDBOP_NGELJIJDHLJ_OFFSET UNITYSDK_OFFSET(0x128ED7E0)
#define CGAJNPDDBOP_NOLNLGKADNH_OFFSET UNITYSDK_OFFSET(0x128EDC40)
#define CGAJNPDDBOP__CTOR_OFFSET UNITYSDK_OFFSET(0x128ED860)

inline static constexpr unsigned int CGAJNPDDBOP_TypeDefinitionIndex = 82249;

class CGAJNPDDBOP : public ::GBNLAFDKEOH
{
public:
	::System::Int32 EBLAEKEBJJM; // 0x28

	::System::Void _ctor(::EIJNABNFPJJ* ALLCJOCNFLI)
	{
		return ((::System::Void(*)(::PVOID, ::EIJNABNFPJJ*))((::PBYTE)hIl2Cpp + CGAJNPDDBOP__CTOR_OFFSET))(this, ALLCJOCNFLI);
	}

	::System::Boolean NGELJIJDHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJNPDDBOP_NGELJIJDHLJ_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJNPDDBOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void NOLNLGKADNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJNPDDBOP_NOLNLGKADNH_OFFSET))(this);
	}

	::System::Boolean ECGGEEOJGJG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJNPDDBOP_ECGGEEOJGJG_OFFSET))(this);
	}
};
