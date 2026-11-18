#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MHAPBDEEALD_PEENLLHIGNC_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x156AD4A0)
#define MHAPBDEEALD_PEENLLHIGNC_OPBEOJOGDOI_OFFSET UNITYSDK_OFFSET(0x156AD4F0)
#define MHAPBDEEALD_PEENLLHIGNC__CTOR_OFFSET UNITYSDK_OFFSET(0x156ACEB0)

inline static constexpr unsigned int MHAPBDEEALD_PEENLLHIGNC_TypeDefinitionIndex = 54898;

class MHAPBDEEALD_PEENLLHIGNC : public ::System::Object
{
public:
	::System::Int32 ILNHPFIDIBG; // 0x10
	::System::Boolean MCJCCJOEKGN; // 0x14
	::System::Boolean EPMNNELBGFG; // 0x15
	::System::Boolean PPMOHEGLEKP; // 0x16
	::System::Byte _padding0[0x1];
	::System::Int32 LHABCFOFILI; // 0x18
	::System::Int32 BGHDDFAPEAN; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBDEEALD_PEENLLHIGNC__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD(::System::Boolean JBJOIKACOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHAPBDEEALD_PEENLLHIGNC_CHCGMACMJLD_OFFSET))(this, JBJOIKACOIC);
	}

	::System::Void OPBEOJOGDOI(::System::Boolean JBJOIKACOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHAPBDEEALD_PEENLLHIGNC_OPBEOJOGDOI_OFFSET))(this, JBJOIKACOIC);
	}
};
