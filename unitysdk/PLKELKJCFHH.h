#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCANEPJMANL.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AOEHPGLBLIH;
class BPHGNMNLLHF;
class IBENDELLLAO;

#define PLKELKJCFHH_AMPPFJIBEBE_OFFSET UNITYSDK_OFFSET(0x1B9F2290)
#define PLKELKJCFHH_FPLCEJIFEPC_OFFSET UNITYSDK_OFFSET(0x1B9F2610)
#define PLKELKJCFHH_GKEGDPCOAIC_OFFSET UNITYSDK_OFFSET(0x1B9F2670)
#define PLKELKJCFHH_ILMBBPDENAD_OFFSET UNITYSDK_OFFSET(0x1B9F22F0)
#define PLKELKJCFHH_JAGOFLJGCDB_OFFSET UNITYSDK_OFFSET(0x1B9F27B0)
#define PLKELKJCFHH_MIFBILEBCLD_OFFSET UNITYSDK_OFFSET(0x1B9F2080)
#define PLKELKJCFHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F2070)

inline static constexpr unsigned int PLKELKJCFHH_TypeDefinitionIndex = 53793;

class PLKELKJCFHH : public ::FCANEPJMANL
{
public:
	::BPHGNMNLLHF* NGHCGPEMMHP; // 0xC0
	::System::UInt32 PKMFBJMJCOO; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKELKJCFHH__CTOR_OFFSET))(this);
	}

	::System::Void MIFBILEBCLD(::IBENDELLLAO* MKDNILKGFCC)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + PLKELKJCFHH_MIFBILEBCLD_OFFSET))(this, MKDNILKGFCC);
	}

	::System::Void FPLCEJIFEPC(::BPHGNMNLLHF* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + PLKELKJCFHH_FPLCEJIFEPC_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Void GKEGDPCOAIC(::AOEHPGLBLIH* DFMKILICPFB, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 OHOCFMBECHM)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + PLKELKJCFHH_GKEGDPCOAIC_OFFSET))(this, DFMKILICPFB, KMFOONLDBFA, OHOCFMBECHM);
	}

	::System::UInt32 JAGOFLJGCDB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKELKJCFHH_JAGOFLJGCDB_OFFSET))(this);
	}

	::System::Boolean ILMBBPDENAD(::System::Boolean EOBILCOAIDI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLKELKJCFHH_ILMBBPDENAD_OFFSET))(this, EOBILCOAIDI);
	}

	::System::Boolean AMPPFJIBEBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKELKJCFHH_AMPPFJIBEBE_OFFSET))(this);
	}
};
