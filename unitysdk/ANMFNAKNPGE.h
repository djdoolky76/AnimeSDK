#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPHFADIIBM.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }

#define ANMFNAKNPGE_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x14C223F0)
#define ANMFNAKNPGE_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x14C22AB0)
#define ANMFNAKNPGE_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x14C22820)
#define ANMFNAKNPGE_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x14C22890)
#define ANMFNAKNPGE_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x14C224E0)
#define ANMFNAKNPGE_HFMHKBAPHAI_OFFSET UNITYSDK_OFFSET(0x14C22BD0)
#define ANMFNAKNPGE_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x14C22B00)
#define ANMFNAKNPGE_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x14C22A10)
#define ANMFNAKNPGE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C22400)

inline static constexpr unsigned int ANMFNAKNPGE_TypeDefinitionIndex = 88392;

class ANMFNAKNPGE : public ::KGPHFADIIBM
{
public:
	::MoleMole::UIMissionTipsContainerWidgetController* DPBJCHEHGFK; // 0x30
	::System::Boolean KAANMGJABDH; // 0x38

	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANMFNAKNPGE__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void DNNJOOJBJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_DNNJOOJBJNB_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void HFMHKBAPHAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_HFMHKBAPHAI_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMFNAKNPGE_FFCPIEDHBDP_OFFSET))(this);
	}
};
