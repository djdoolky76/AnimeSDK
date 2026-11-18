#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EBPPAJIPBGE_HMBLMKPBGIC_OFFSET UNITYSDK_OFFSET(0x12BE1ED0)
#define EBPPAJIPBGE_JJGIHMIFCOM_OFFSET UNITYSDK_OFFSET(0x12BE1FC0)
#define EBPPAJIPBGE_LOFCKJICOFL_OFFSET UNITYSDK_OFFSET(0x12BE2010)
#define EBPPAJIPBGE_MOLOBBAPKHD_OFFSET UNITYSDK_OFFSET(0x12BE1F40)
#define EBPPAJIPBGE_OIKBJKHDAAI_OFFSET UNITYSDK_OFFSET(0x12BE1E80)

inline static constexpr unsigned int EBPPAJIPBGE_TypeDefinitionIndex = 74026;

struct alignas(4) EBPPAJIPBGE
{
	// static const ::System::UInt64 COAGHLELMLL = 0x1; // 0x0
	// static const ::System::Int32 JGDIMEOIGCL = 0x40; // 0x0
	// static const ::System::Int32 DLICFCOHMFE = 0x3; // 0x0
	// static const ::System::UInt64 IGCCOOEOBCM = 0x7; // 0x0
	// static const ::System::Int32 HBOBHKLBGEL = 0x1E; // 0x0
	// static const ::System::UInt64 JCHPADFGFDI = 0x3FFFFFFF; // 0x0
	// static const ::System::Int32 BMKDMAHCGBC = 0x7; // 0x0

	static ::System::Int32 OIKBJKHDAAI(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + EBPPAJIPBGE_OIKBJKHDAAI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::UInt64 HMBLMKPBGIC(::System::UInt64& GEGOALONGBI, ::System::Int32 EFMODEHHJJG)
	{
		return ((::System::UInt64(*)(::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + EBPPAJIPBGE_HMBLMKPBGIC_OFFSET))(GEGOALONGBI, EFMODEHHJJG);
	}

	static ::System::Boolean MOLOBBAPKHD(::System::UInt64& IGAAKDOIPNN, ::System::UInt64 GEGOALONGBI, ::System::Int32 EFMODEHHJJG)
	{
		return ((::System::Boolean(*)(::System::UInt64&, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + EBPPAJIPBGE_MOLOBBAPKHD_OFFSET))(IGAAKDOIPNN, GEGOALONGBI, EFMODEHHJJG);
	}

	static ::System::Int32 JJGIHMIFCOM(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + EBPPAJIPBGE_JJGIHMIFCOM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Int32 LOFCKJICOFL(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + EBPPAJIPBGE_LOFCKJICOFL_OFFSET))(EGEGIMGMJHN);
	}
};
