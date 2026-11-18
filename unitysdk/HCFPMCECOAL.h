#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define HCFPMCECOAL_BOKMJMOAONH_OFFSET UNITYSDK_OFFSET(0x19DF8660)
#define HCFPMCECOAL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x19DF8760)
#define HCFPMCECOAL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19DF86D0)
#define HCFPMCECOAL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19DF8470)
#define HCFPMCECOAL_KHLHOPKBELP_OFFSET UNITYSDK_OFFSET(0x19DF8500)
#define HCFPMCECOAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DF83F0)
#define HCFPMCECOAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF8460)

inline static constexpr unsigned int HCFPMCECOAL_TypeDefinitionIndex = 39864;

class HCFPMCECOAL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA3; // 0x0
	::System::Double PMLOGFLOLNJ; // 0x20
	::System::Boolean OKABBHMIOOM; // 0x28
	::System::Byte _padding0[0x7];
	::System::Double HBOJLFKAOOH; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCFPMCECOAL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFPMCECOAL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFPMCECOAL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void KHLHOPKBELP(::System::Double MFMMNDAHFAD, ::System::Double OICIDHAGAKN, ::System::Boolean ODNGLDNMAGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + HCFPMCECOAL_KHLHOPKBELP_OFFSET))(this, MFMMNDAHFAD, OICIDHAGAKN, ODNGLDNMAGF);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFPMCECOAL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Double MFMMNDAHFAD, ::System::Double OICIDHAGAKN, ::System::Boolean ODNGLDNMAGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + HCFPMCECOAL_CNHBDOMKKDE_OFFSET))(this, MFMMNDAHFAD, OICIDHAGAKN, ODNGLDNMAGF);
	}

	static ::System::Double BOKMJMOAONH(::System::Double HAAEBCOBKFF, ::System::Double BFMMEICFNCD)
	{
		return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + HCFPMCECOAL_BOKMJMOAONH_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}
};
