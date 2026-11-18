#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ANBDFMFDLGM_CBLHMIGBLAE_OFFSET UNITYSDK_OFFSET(0x11BC55A0)
#define ANBDFMFDLGM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11BC56E0)
#define ANBDFMFDLGM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11BC5650)
#define ANBDFMFDLGM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11BC5510)
#define ANBDFMFDLGM_IDCGAIKMNID_OFFSET UNITYSDK_OFFSET(0x11BC5740)
#define ANBDFMFDLGM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11BC55B0)
#define ANBDFMFDLGM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11BC5400)
#define ANBDFMFDLGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BC5490)
#define ANBDFMFDLGM__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC5500)

inline static constexpr unsigned int ANBDFMFDLGM_TypeDefinitionIndex = 93204;

class ANBDFMFDLGM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x159; // 0x0
	::System::UInt32 _ONHNCIPHPKP_k__BackingField; // 0x20
	::System::Int32 GNHEHOMMHPB; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANBDFMFDLGM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBDFMFDLGM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBDFMFDLGM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBDFMFDLGM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CBLHMIGBLAE(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANBDFMFDLGM_CBLHMIGBLAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBDFMFDLGM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBDFMFDLGM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 GNHEHOMMHPB, ::System::UInt32 ECKMALONJCL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANBDFMFDLGM_CNHBDOMKKDE_OFFSET))(this, GNHEHOMMHPB, ECKMALONJCL);
	}

	::System::UInt32 IDCGAIKMNID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBDFMFDLGM_IDCGAIKMNID_OFFSET))(this);
	}
};
