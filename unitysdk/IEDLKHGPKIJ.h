#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAONGKLFNGN.h"

class CFHOGOKGLOO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IEDLKHGPKIJ_ABLKKHDKCOO_OFFSET UNITYSDK_OFFSET(0x16A95E10)
#define IEDLKHGPKIJ_AECLCDPLAII_OFFSET UNITYSDK_OFFSET(0x16A95EA0)
#define IEDLKHGPKIJ_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x16A95A00)
#define IEDLKHGPKIJ_CINMEPOMAAG_OFFSET UNITYSDK_OFFSET(0x16A96000)
#define IEDLKHGPKIJ_FMOCCHONJOH_OFFSET UNITYSDK_OFFSET(0x16A95CF0)
#define IEDLKHGPKIJ_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x16A95960)
#define IEDLKHGPKIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16A95C20)

inline static constexpr unsigned int IEDLKHGPKIJ_TypeDefinitionIndex = 48954;

class IEDLKHGPKIJ : public ::CAONGKLFNGN
{
public:
	::System::Collections::Generic::HashSet_1<::CFHOGOKGLOO*>* JOLFNAKBFJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKHGPKIJ__CTOR_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKHGPKIJ_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKHGPKIJ_BMGEEIJFLIJ_OFFSET))(this);
	}

	::System::Void FMOCCHONJOH(::CFHOGOKGLOO* JJKPDAMGJDM)
	{
		return ((::System::Void(*)(::PVOID, ::CFHOGOKGLOO*))((::PBYTE)hIl2Cpp + IEDLKHGPKIJ_FMOCCHONJOH_OFFSET))(this, JJKPDAMGJDM);
	}

	::System::Void ABLKKHDKCOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKHGPKIJ_ABLKKHDKCOO_OFFSET))(this);
	}

	::System::Void AECLCDPLAII(::CFHOGOKGLOO* JJKPDAMGJDM)
	{
		return ((::System::Void(*)(::PVOID, ::CFHOGOKGLOO*))((::PBYTE)hIl2Cpp + IEDLKHGPKIJ_AECLCDPLAII_OFFSET))(this, JJKPDAMGJDM);
	}

	::System::Void CINMEPOMAAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKHGPKIJ_CINMEPOMAAG_OFFSET))(this);
	}
};
