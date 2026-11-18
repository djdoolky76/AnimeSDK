#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CPEAJCPPLMP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18314CD0)
#define CPEAJCPPLMP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18314C10)
#define CPEAJCPPLMP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18314B70)
#define CPEAJCPPLMP_HNLIKHEBDKM_OFFSET UNITYSDK_OFFSET(0x18314CC0)
#define CPEAJCPPLMP_IHFGPMAJKBE_OFFSET UNITYSDK_OFFSET(0x18314C00)
#define CPEAJCPPLMP_MCADBDCPLML_OFFSET UNITYSDK_OFFSET(0x18314CA0)
#define CPEAJCPPLMP_NMIHHFCHBBB_OFFSET UNITYSDK_OFFSET(0x18314CB0)
#define CPEAJCPPLMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x18314AF0)
#define CPEAJCPPLMP__CTOR_OFFSET UNITYSDK_OFFSET(0x18314B60)

inline static constexpr unsigned int CPEAJCPPLMP_TypeDefinitionIndex = 59187;

class CPEAJCPPLMP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xAB; // 0x0
	::System::Int32 _ABHOPDDICLC_k__BackingField; // 0x20
	::System::Int32 _HHJBMKHDCGD_k__BackingField; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPEAJCPPLMP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEAJCPPLMP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEAJCPPLMP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void IHFGPMAJKBE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPEAJCPPLMP_IHFGPMAJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEAJCPPLMP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Int32 MCADBDCPLML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEAJCPPLMP_MCADBDCPLML_OFFSET))(this);
	}

	::System::Int32 NMIHHFCHBBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEAJCPPLMP_NMIHHFCHBBB_OFFSET))(this);
	}

	::System::Void HNLIKHEBDKM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPEAJCPPLMP_HNLIKHEBDKM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 AEPHOIHHINF, ::System::Int32 LDACKEJFEMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CPEAJCPPLMP_CNHBDOMKKDE_OFFSET))(this, AEPHOIHHINF, LDACKEJFEMB);
	}
};
