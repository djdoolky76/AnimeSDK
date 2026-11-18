#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOEJFJEGNMJ;

#define OIOOIDLBCPB_BMLPFLCJDGI_OFFSET UNITYSDK_OFFSET(0x16C1A560)
#define OIOOIDLBCPB_CEEPDDJFJCE_OFFSET UNITYSDK_OFFSET(0x16C1A500)
#define OIOOIDLBCPB_HCEGOIDEDBE_OFFSET UNITYSDK_OFFSET(0x16C1A5B0)
#define OIOOIDLBCPB_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x16C16CB0)
#define OIOOIDLBCPB_MDGOOIHIMDC_OFFSET UNITYSDK_OFFSET(0x16C1A550)
#define OIOOIDLBCPB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1A460)

inline static constexpr unsigned int OIOOIDLBCPB_TypeDefinitionIndex = 85328;

class OIOOIDLBCPB : public ::System::Object
{
public:
	static ::OIOOIDLBCPB** StaticGet_PMKINFHDLFD()
	{
		return (::OIOOIDLBCPB**)Il2CppClass::FromTypeDefinitionIndex(OIOOIDLBCPB_TypeDefinitionIndex)->GetStaticField(0x52410);
	}
	::KOEJFJEGNMJ* LPMOBJMHPLN; // 0x10
	::System::UInt32 _FOFDIMHOAAD_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOIDLBCPB__CTOR_OFFSET))(this);
	}

	::System::Void CEEPDDJFJCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOIDLBCPB_CEEPDDJFJCE_OFFSET))(this);
	}

	::System::Void MDGOOIHIMDC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIOOIDLBCPB_MDGOOIHIMDC_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::OIOOIDLBCPB* KCKBIOBGKBH()
	{
		return ((::OIOOIDLBCPB*(*)())((::PBYTE)hIl2Cpp + OIOOIDLBCPB_KCKBIOBGKBH_OFFSET))();
	}

	::System::Void BMLPFLCJDGI(::System::UInt32 OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIOOIDLBCPB_BMLPFLCJDGI_OFFSET))(this, OMMEALOOOOD);
	}

	::System::UInt32 HCEGOIDEDBE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOIDLBCPB_HCEGOIDEDBE_OFFSET))(this);
	}
};
