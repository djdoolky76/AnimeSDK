#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define KJAOMFNFMHE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x157F0E30)
#define KJAOMFNFMHE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x157F0D00)
#define KJAOMFNFMHE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x157F0C70)
#define KJAOMFNFMHE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x157F0D90)
#define KJAOMFNFMHE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x157F0B60)
#define KJAOMFNFMHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x157F0BF0)
#define KJAOMFNFMHE__CTOR_OFFSET UNITYSDK_OFFSET(0x157F0C60)

inline static constexpr unsigned int KJAOMFNFMHE_TypeDefinitionIndex = 85957;

class KJAOMFNFMHE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x155; // 0x0
	::System::Int32 GNHEHOMMHPB; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAOMFNFMHE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOMFNFMHE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOMFNFMHE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOMFNFMHE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOMFNFMHE_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOMFNFMHE_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 GNHEHOMMHPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KJAOMFNFMHE_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, GNHEHOMMHPB);
	}
};
