#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OONCPLAHLKE.h"

#define NDMHMAJABLF_EPEPBMJJBMN_OFFSET UNITYSDK_OFFSET(0xE18F830)
#define NDMHMAJABLF_FLNGMPEDKNL_OFFSET UNITYSDK_OFFSET(0xE18F100)
#define NDMHMAJABLF_KEOKNLKMPIG_OFFSET UNITYSDK_OFFSET(0xE18F290)
#define NDMHMAJABLF_KLHPFFLFKEO_OFFSET UNITYSDK_OFFSET(0xE18F8C0)
#define NDMHMAJABLF__CTOR_OFFSET UNITYSDK_OFFSET(0xE18F590)

inline static constexpr unsigned int NDMHMAJABLF_TypeDefinitionIndex = 73855;

class NDMHMAJABLF : public ::OONCPLAHLKE
{
public:
	::System::Int32 HOHDNCFFGKA; // 0x10
	::System::Int32 FGNCAPAIAOO; // 0x14
	::System::Int32 JKLEINAINCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMHMAJABLF__CTOR_OFFSET))(this);
	}

	::System::Void FLNGMPEDKNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMHMAJABLF_FLNGMPEDKNL_OFFSET))(this);
	}

	::System::Void KEOKNLKMPIG(::System::Int32 BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDMHMAJABLF_KEOKNLKMPIG_OFFSET))(this, BPEGDPLGFPO);
	}

	::System::Void EPEPBMJJBMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMHMAJABLF_EPEPBMJJBMN_OFFSET))(this);
	}

	::System::Void KLHPFFLFKEO(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDMHMAJABLF_KLHPFFLFKEO_OFFSET))(this, MIALFKCCCPI);
	}
};
