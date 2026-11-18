#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOIAGDMKKGJ.h"
#include "unitysdk/System/Object.h"

class AGCJCGPOCHI;

#define CKMBDPOPDFC_CGNPIGHBMDN_OFFSET UNITYSDK_OFFSET(0x1A1B88B0)
#define CKMBDPOPDFC_EKPOEOEGBLE_OFFSET UNITYSDK_OFFSET(0x1A1B8890)
#define CKMBDPOPDFC_FNGIBMNELPI_OFFSET UNITYSDK_OFFSET(0x1A1B87C0)
#define CKMBDPOPDFC_KLGMHHOBJBA_OFFSET UNITYSDK_OFFSET(0x1A1B88A0)
#define CKMBDPOPDFC_NPDCMNLPCDF_OFFSET UNITYSDK_OFFSET(0x1A1B88D0)
#define CKMBDPOPDFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B87B0)

inline static constexpr unsigned int CKMBDPOPDFC_TypeDefinitionIndex = 45675;

class CKMBDPOPDFC : public ::System::Object
{
public:
	::AOIAGDMKKGJ BOLGKDHEJFA; // 0x10
	::System::Single LLGIFMLKAMF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMBDPOPDFC__CTOR_OFFSET))(this);
	}

	::System::Void FNGIBMNELPI(::System::Double FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + CKMBDPOPDFC_FNGIBMNELPI_OFFSET))(this, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	::System::Boolean EKPOEOEGBLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMBDPOPDFC_EKPOEOEGBLE_OFFSET))(this);
	}

	::System::Void KLGMHHOBJBA(::AGCJCGPOCHI* BOBIKBDKFCK)
	{
		return ((::System::Void(*)(::PVOID, ::AGCJCGPOCHI*))((::PBYTE)hIl2Cpp + CKMBDPOPDFC_KLGMHHOBJBA_OFFSET))(this, BOBIKBDKFCK);
	}

	::AOIAGDMKKGJ CGNPIGHBMDN()
	{
		return ((::AOIAGDMKKGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMBDPOPDFC_CGNPIGHBMDN_OFFSET))(this);
	}

	::System::Void NPDCMNLPCDF(::AGCJCGPOCHI* GJIAIJFJACB)
	{
		return ((::System::Void(*)(::PVOID, ::AGCJCGPOCHI*))((::PBYTE)hIl2Cpp + CKMBDPOPDFC_NPDCMNLPCDF_OFFSET))(this, GJIAIJFJACB);
	}
};
