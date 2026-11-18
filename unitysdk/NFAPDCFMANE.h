#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFMKLPJIKFI.h"

namespace System { class EventArgs; }

#define NFAPDCFMANE_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x11F72BC0)
#define NFAPDCFMANE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F72D50)
#define NFAPDCFMANE_ELLBLIDMMHJ_OFFSET UNITYSDK_OFFSET(0x11F72CA0)
#define NFAPDCFMANE_IOBDNMEKKAC_OFFSET UNITYSDK_OFFSET(0x11F72DE0)
#define NFAPDCFMANE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F72950)
#define NFAPDCFMANE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F72C60)

inline static constexpr unsigned int NFAPDCFMANE_TypeDefinitionIndex = 42064;

class NFAPDCFMANE : public ::AFMKLPJIKFI
{
public:
	::System::Boolean FNNKGMKPDPE; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single ECBKJEICBCJ; // 0x3C
	::System::Single IHMIDGKALEE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAPDCFMANE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAPDCFMANE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAPDCFMANE_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void ELLBLIDMMHJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NFAPDCFMANE_ELLBLIDMMHJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAPDCFMANE_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void IOBDNMEKKAC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NFAPDCFMANE_IOBDNMEKKAC_OFFSET))(this, KOIBHLHLMFC);
	}
};
